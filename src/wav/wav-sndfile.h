/*  Audacious - Cross-platform multimedia player
 *  Copyright (C) 2005 Audacious development team.
 *
 *  Based on the xmms_sndfile input plugin:
 *  Copyright (C) 2000, 2002 Erik de Castro Lopo
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef WAV_SNDFILE_H
#define WAV_SNDFILE_H

#define BUFFER_SIZE 			8192

static	void 	plugin_init (void);
static	int	is_our_file (char *filename);
static	void 	play_start (InputPlayback *playback);
static	void 	play_stop (InputPlayback *playback);
static	void 	file_seek (InputPlayback *playback, int time);
static	void 	get_song_info (char *filename, char **title, int *length);
static  void    wav_about (void);
static	void	play_pause (InputPlayback *playback, gshort p);
static  void file_mseek (InputPlayback *playback, gulong millisecond);

#endif
