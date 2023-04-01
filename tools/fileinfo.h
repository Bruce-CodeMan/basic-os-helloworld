//
// Created by Bruce on 2023/04/01.
//

#ifndef ZIYA_OS_KERNEL_FILEINFO_H
#define ZIYA_OS_KERNEL_FILEINFO_H

typedef struct {
    char*   name;
    int     size;
    char*   content;
}Fileinfo;

Fileinfo* read_file(const char* filename);

#endif
