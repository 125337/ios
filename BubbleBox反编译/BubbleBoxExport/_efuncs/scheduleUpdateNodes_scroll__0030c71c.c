// ##### +[scheduleUpdateNodes:scroll:] @ 0030c71c
// #####################################

/* Function Stack Size: 0x1c bytes */

void BubbleMessageMerge::scheduleUpdateNodes_scroll_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  uint uVar1;
  undefined *puVar2;
  int local_6c;
  
  puVar2 = PTR_s_updateAllNodes_scroll__0048b8f0;
  local_6c = -0x2a7d7d06;
  do {
    while( true ) {
      while( true ) {
        while (local_6c < -0x2a7d7d06) {
          if (local_6c < -0x4763960e) {
            if (local_6c == -0x6d31b9d8) {
              local_6c = -0x1d228fd4;
              if ((DAT_004bd2c8 ^ DAT_004bd2cc) * -0x2d1fb8c9 + 0x8f6598f2 < 0x6f8be316) {
                local_6c = -0x6d31b9d8;
              }
            }
            else if (local_6c == -0x4b3ffa0a) {
              local_6c = -0x4763960e;
            }
          }
          else if ((local_6c == -0x4763960e) || (local_6c == -0x3e58bbfc)) {
            local_6c = -0x6d31b9d8;
          }
        }
        if (local_6c < -0xb86491a) break;
        if (local_6c == -0xb86491a) {
          uVar1 = DAT_004bd2b8 - DAT_004bd2bc;
          updateAllNodes_scroll_(param_1,(SEL)puVar2,param_3,param_4);
          local_6c = -0x3a02a28;
          if (((uVar1 ^ 0x80050830) & 0xc017dbba) != 0x910c8134) {
            local_6c = -0x4b3ffa0a;
          }
        }
        else if (local_6c == -0x3a02a28) {
          updateAllNodes_scroll_(param_1,(SEL)puVar2,param_3,param_4);
          local_6c = -0xb86491a;
        }
      }
      if (local_6c != -0x2a7d7d06) break;
      uVar1 = 0;
      if (DAT_004bd2b4 != 0) {
        uVar1 = DAT_004bd2b0 / DAT_004bd2b4;
      }
      local_6c = -0xb86491a;
      if ((uVar1 * -0x51d77660 + 0xc6afbada | 0x67bf90ea) == 0xbd59d45d) {
        local_6c = -0x3a02a28;
      }
    }
  } while (local_6c != -0x1d228fd4);
  return;
}



// #####################################