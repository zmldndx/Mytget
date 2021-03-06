/*  Mytget - A download accelerator for GNU/Linux
 *  Homepage: http://myget.sf.net
 *  Copyright (C) 2005- xiaosuo
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
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */


#ifndef PROXY_H_
#define PROXY_H_

#include "url.h"

enum ProxyType {
    HTTP_PROXY,
    FTP_PROXY,
    SOCKS5_PROXY,
    NONE_PROXY
};

class Proxy {
    public:
        Proxy();
        ~Proxy();

        const ProxyType get_type();
        const char* get_host();
        const int get_port();
        const char* get_user();
        const char* get_password();

        void set_host(const char *host);
        void set_user(const char *user);
        void set_port(int port);
        void set_password(const char *password);
        void set_type(ProxyType type);

        Proxy& operator = (Proxy &proxy);

    private:
        ProxyType type;
        const char *host;
        int port;
        const char *user;
        const char *password;
};

#endif  // PROXY_H_

