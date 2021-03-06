# Copyright 2019 The gRPC Authors.
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
import logging
import unittest

from tests_aio.unit._test_base import AioTestBase


class TestInit(AioTestBase):

    async def test_grpc(self):
        import grpc  # pylint: disable=wrong-import-position
        channel = grpc.aio.insecure_channel('dummy')
        self.assertIsInstance(channel, grpc.aio.Channel)

    async def test_grpc_dot_aio(self):
        import grpc.aio  # pylint: disable=wrong-import-position
        channel = grpc.aio.insecure_channel('dummy')
        self.assertIsInstance(channel, grpc.aio.Channel)

    async def test_aio_from_grpc(self):
        from grpc import aio  # pylint: disable=wrong-import-position
        channel = aio.insecure_channel('dummy')
        self.assertIsInstance(channel, aio.Channel)


if __name__ == '__main__':
    logging.basicConfig(level=logging.DEBUG)
    unittest.main(verbosity=2)
