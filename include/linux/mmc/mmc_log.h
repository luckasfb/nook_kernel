#ifndef MMC_LOG_H
#define MMC_LOG_H

/*
 * linux/include/linux/mmc/mmc_log.h - MMC Transaction Logging driver
 *
 * Copyright (C) 2011 Barnes & Noble, Inc
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#define MMC_OP_READ   0x0
#define MMC_OP_WRITE  0x1

int mmc_log_transaction(u8 mmc_operation, u32 block_addr, u16 num_blocks, u32 start_msecs, u16 duration_msecs);

#endif /* MMC_LOG_H */

