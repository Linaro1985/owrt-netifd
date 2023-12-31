/*
 * netifd - network interface daemon
 * Copyright (C) 2012 Felix Fietkau <nbd@openwrt.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef __NETIFD_CONFIG_H
#define __NETIFD_CONFIG_H

#include <libubox/blobmsg.h>
#include <uci_blob.h>

extern bool config_init;

int config_init_all(void);
struct ether_addr *config_get_default_macaddr(const char *ifname);
int config_get_default_gro(const char *ifname);
const char *config_get_default_conduit(const char *ifname);

#endif
