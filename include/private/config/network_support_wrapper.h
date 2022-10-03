/* SPDX-License-Identifier: Apache-2.0 */

/*
 * Copyright 2021 Joel E. Anderson
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
 */

#ifndef __STUMPLESS_PRIVATE_CONFIG_WRAPPER_NETWORK_SUPPORT_H
#  define __STUMPLESS_PRIVATE_CONFIG_WRAPPER_NETWORK_SUPPORT_H

#  include <stumpless/config.h>

/* definition of network target support */
#  ifdef STUMPLESS_NETWORK_TARGETS_SUPPORTED
#    include <stumpless/target/network.h>
#    include "private/target/network.h"
#    define config_close_network_target stumpless_close_network_target
#    define config_network_free_all network_free_all
#    define config_network_target_is_open network_target_is_open
#    define config_open_network_target open_network_target
#    define config_sendto_network_target sendto_network_target
#  else
#    include "private/target.h"
#    define config_close_network_target close_unsupported_target
#    define config_network_free_all() ( ( void ) 0 )
#    define config_network_target_is_open unsupported_target_is_open
#    define config_open_network_target open_unsupported_target
#    define config_sendto_network_target sendto_unsupported_target
#  endif
#endif /* __STUMPLESS_PRIVATE_CONFIG_WRAPPER_NETWORK_SUPPORT_H */
