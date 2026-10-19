// comments @0x1594c

/* Function Stack Size: 0x10 bytes */

ID WCMVideoComments::comments(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_comments);
}

