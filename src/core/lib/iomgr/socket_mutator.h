/*
 *
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef GRPC_CORE_LIB_IOMGR_SOCKET_MUTATOR_H
#define GRPC_CORE_LIB_IOMGR_SOCKET_MUTATOR_H

#include <grpc/support/port_platform.h>

#include <grpc/grpc.h>
#include <grpc/support/sync.h>

#include <stdbool.h>

/** Perform the file descriptor mutation operation of \a mutator on \a fd */
bool grpc_socket_mutator_mutate_fd(grpc_socket_mutator* mutator, int fd);

/** Compare if \a a and \a b are the same mutator or have same settings */
int grpc_socket_mutator_compare(grpc_socket_mutator* a, grpc_socket_mutator* b);

grpc_socket_mutator* grpc_socket_mutator_ref(grpc_socket_mutator* mutator);
void grpc_socket_mutator_unref(grpc_socket_mutator* mutator);

#endif /* GRPC_CORE_LIB_IOMGR_SOCKET_MUTATOR_H */
