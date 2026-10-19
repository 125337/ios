// videos @0x2b0e4

/* Function Stack Size: 0x10 bytes */

ID WCMVideoController::videos(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_videos);
}

