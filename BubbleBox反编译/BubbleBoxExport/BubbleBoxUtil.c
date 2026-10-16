
// ===================== @interface BubbleBoxUtil : 2 methods =====================

// ----- -[BubbleBoxUtil b_last_time] @ 002f7814 -----

/* Function Stack Size: 0x10 bytes */

unsigned_int BubbleBoxUtil::b_last_time(ID param_1,SEL param_2)

{
  int iVar1;
  int local_78;
  unsigned_int local_74;
  unsigned_int *local_70;
  
  local_78 = 0x63ca4fe;
  iVar1 = local_78;
  do {
    while( true ) {
      while( true ) {
        while (local_78 = iVar1, iVar1 = local_78, local_78 < 0xe5be3dc) {
          if (local_78 < -0x2cacebd4) {
            if (local_78 == -0x4f170945) {
              iVar1 = -0x4f170945;
              local_70 = (unsigned_int *)(param_1 + 8);
              if ((DAT_004bc0d8 * DAT_004bc0dc + 0xe54e5ed7U) / 0x34b7f144 < 0xe3d9727a) {
                iVar1 = -0x2cacebd4;
              }
            }
            else if (local_78 == -0x2d22dd65) {
              local_74 = *local_70;
              iVar1 = 0x67e4384a;
            }
          }
          else if (local_78 == -0x2cacebd4) {
            iVar1 = -0x2d22dd65;
          }
          else if ((local_78 == 0x63ca4fe) &&
                  (iVar1 = -0x4f170945, (DAT_004bc0d0 ^ DAT_004bc0d4) * 0x676e9675 == 0x6e34d450)) {
            iVar1 = 0x2d6f5942;
          }
        }
        if (local_78 < 0x67e4384a) break;
        if (local_78 == 0x67e4384a) {
          iVar1 = 0x7ccc95c6;
          if (0x3462d0cc < ((DAT_004bc0e0 * DAT_004bc0e4 ^ 0xc9a8b1U) + 0xeb52b9cd | 0xec9d2d2e)) {
            iVar1 = 0x26ece625;
          }
        }
        else if (local_78 == 0x7ccc95c6) {
          iVar1 = 0x26ece625;
        }
      }
      if (local_78 != 0x26ece625) break;
      iVar1 = 0x26ece625;
      if ((DAT_004bc0e8 * DAT_004bc0ec + 0xbe42f749U & 0x75dfff2a | 0x64d3df2a) != 0xb1811d3b) {
        iVar1 = 0xe5be3dc;
      }
    }
    iVar1 = -0x4f170945;
  } while ((local_78 == 0x2d6f5942) || (iVar1 = local_78, local_78 != 0xe5be3dc));
  return local_74;
}



// ----- -[BubbleBoxUtil setB_last_time:] @ 002f7a94 -----

/* WARNING: Removing unreachable block (ram,0x002f7c48) */
/* Function Stack Size: 0x14 bytes */

void BubbleBoxUtil::setB_last_time_(ID param_1,SEL param_2,unsigned_int param_3)

{
  uint uVar1;
  int local_6c;
  
  local_6c = 0x77c2f463;
  do {
    while( true ) {
      while( true ) {
        while (local_6c < 0x1fb800d0) {
          if (local_6c < -0x12230c75) {
            if (local_6c == -0x5ec17800) {
              local_6c = 0x44796f21;
            }
            else if (local_6c == -0x1db3638c) {
              *(unsigned_int *)(param_1 + 8) = param_3;
              local_6c = -0x12230c75;
            }
          }
          else if (local_6c == -0x12230c75) {
            uVar1 = DAT_004bc0f8 | DAT_004bc0fc;
            *(unsigned_int *)(param_1 + 8) = param_3;
            local_6c = 0x5b2ac53e;
            if (((uVar1 | 0xb0e547b2) ^ 0x474e3489) + 0x20175d6f < 0xa472343c) {
              local_6c = -0x1db3638c;
            }
          }
          else if (local_6c == 0xc6c65ee) {
            local_6c = 0x44796f21;
          }
        }
        if (local_6c < 0x5b2ac53e) break;
        if (local_6c == 0x5b2ac53e) {
          local_6c = 0xc6c65ee;
        }
        else if ((local_6c == 0x77c2f463) &&
                (local_6c = -0x1db3638c,
                0xc33274ef <
                (((DAT_004bc0f0 ^ DAT_004bc0f4) & 0x6d3eeffc) / 0x1e7b5dea) * 0x5301465e)) {
          local_6c = -0x12230c75;
        }
      }
      if (local_6c != 0x44796f21) break;
      local_6c = -0x5ec17800;
      if (0x78490b01 < ((DAT_004bc108 - DAT_004bc10c ^ 0x8104080U) & 0x83a4894) * -0x3bb86fac) {
        local_6c = 0x1fb800d0;
      }
    }
  } while (local_6c != 0x1fb800d0);
  return;
}


