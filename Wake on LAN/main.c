//
//  main.c
//  Wake on LAN
//
//  Created by Markus Kwaśnicki on 17.12.11.
//  Copyright (c) 2011 Kwasniccy. All rights reserved.
//

#include <stdio.h>
#include "wol.h"

int main (int argc, const char * argv[])
{
    return wakeOnLan(argv[1], argv[2]);
}

