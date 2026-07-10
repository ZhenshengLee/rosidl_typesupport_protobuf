@{
# ================================= Apache 2.0 =================================
#
# Copyright (C) 2021 Continental
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# ================================= Apache 2.0 =================================
}@
@{
def is_protobuf_header(header_file):
  return header_file.endswith(".pb.h")

include_lines = []
for header_file in system_header_files:
  if header_file not in include_directives:
    include_directives.add(header_file)
    include_lines.append(f"#include <{header_file}>")

for header_file in header_files:
  if header_file not in include_directives:
    include_directives.add(header_file)
    if is_protobuf_header(header_file):
      include_lines.append(
          "#ifdef _MSC_VER\n"
          "#pragma warning(push)\n"
          "#pragma warning(disable : 4127 4146 4800)\n"
          "#endif\n"
          f'#include "{header_file}"\n'
          "#ifdef _MSC_VER\n"
          "#pragma warning(pop)\n"
          "#endif"
      )
    else:
      include_lines.append(f'#include "{header_file}"')

includes_output = "\n".join(include_lines)
}@
@(includes_output)
