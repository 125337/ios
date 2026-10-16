
// ===================== @interface BubbleMessageMerge : 3 methods =====================

// ----- -[BubbleMessageMerge nodes] @ 0031f1fc -----

/* Function Stack Size: 0x10 bytes */

ID BubbleMessageMerge::nodes(ID param_1,SEL param_2)

{
  int iVar1;
  undefined4 local_24;
  undefined8 local_20;
  
  local_24 = -0x4f527eda;
LAB_0031f298:
  while (-0x6bc8a79 < local_24) {
    if (local_24 == -0x6bc8a78) {
      iVar1 = 0x7a146a39;
      if ((DAT_004bdd28 & DAT_004bdd2c & 0xf48fca90) / 0x7e428cc0 + 0xec10969f < 0x587272d2) {
        iVar1 = -0x910a0dc;
      }
      goto LAB_0031f334;
    }
    if (local_24 == 0x11c1585) {
      iVar1 = -0x6bc8a78;
      if (0xe1385042 <
          ((uint)((ulong)(uint)(DAT_004bdd20 + DAT_004bdd24) * 0x27de0e0f >> 0x3c) + 0xba2eee95 ^
          0xa919d6bd)) {
        iVar1 = -0x910a0dc;
      }
      goto LAB_0031f334;
    }
    if (local_24 == 0x7a146a39) {
      return local_20;
    }
  }
  if (local_24 == -0x4f527eda) {
    local_20 = *(ID *)(param_1 + 8);
    iVar1 = 0x11c1585;
  }
  else {
    iVar1 = -0x6bc8a78;
    if (local_24 != -0x910a0dc) goto LAB_0031f298;
  }
LAB_0031f334:
  local_24 = iVar1;
  goto LAB_0031f298;
}



// ----- -[BubbleMessageMerge setNodes:] @ 0031f358 -----

/* Function Stack Size: 0x18 bytes */

void BubbleMessageMerge::setNodes_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ID IVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int local_74;
  ID *local_70;
  
  iVar1 = DAT_004bdd30 + DAT_004bdd34;
  local_74 = 0x3b7569cf;
  iVar3 = local_74;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_74 = iVar3, iVar3 = local_74, -0x6270486 < local_74) {
            if (local_74 < 0x39ded07f) {
              if (local_74 == -0x6270485) {
                iVar3 = 0x5bc85767;
              }
              else if (local_74 == -0x6bf34a) {
                _objc_retain(param_3,param_2);
                IVar4 = *local_70;
                *local_70 = param_3;
                _objc_release(IVar4);
                param_2 = extraout_x1_00;
                iVar3 = -0x35e37282;
              }
              else if (local_74 == 0xf2eb1c3) {
                iVar3 = -0x6375a4e3;
              }
            }
            else if (local_74 == 0x39ded07f) {
              iVar3 = -0x3a4553ca;
            }
            else if (local_74 == 0x5bc85767) {
              iVar3 = -0x6bf34a;
              if (((DAT_004bdd40 | DAT_004bdd44) ^ 0x841e0880 | 0x7381c574) * 0x7f2979ef <
                  0x3bfc1786) {
                iVar3 = -0x35e37282;
              }
            }
            else if ((local_74 == 0x3b7569cf) &&
                    (iVar3 = -0x275fad09, iVar1 * -0x3049b32e == 0x2b813c2)) {
              iVar3 = -0x6df1318d;
            }
          }
          if (-0x378df918 < local_74) break;
          iVar3 = -0x275fad09;
          if (local_74 != -0x6df1318d) {
            if (local_74 == -0x6375a4e3) {
              iVar3 = 0x39ded07f;
              if (0x374ec645 <
                  (((DAT_004bdd50 & DAT_004bdd54) * 0x1d52e7bb ^ 0x4f462b60) & 0x5f46ff7d)) {
                iVar3 = -0x3a4553ca;
              }
            }
            else {
              iVar3 = local_74;
              if (local_74 == -0x3a4553ca) {
                iVar3 = -0x378df917;
                if ((int)((long)((ulong)((DAT_004bdd58 - DAT_004bdd5c | 0x2a33302cU) ^ 0x3f7e1fa5) *
                                0xc1e0b2a5) >> 0x3f) == 0x6f6526cc) {
                  iVar3 = -0x3a4553ca;
                }
              }
            }
          }
        }
        if (local_74 != -0x35e37282) break;
        uVar2 = 0;
        if (DAT_004bdd4c != 0) {
          uVar2 = DAT_004bdd48 / DAT_004bdd4c;
        }
        _objc_retain(param_3,param_2);
        IVar4 = *local_70;
        *local_70 = param_3;
        _objc_release(IVar4);
        param_2 = extraout_x1;
        iVar3 = -0x35e37282;
        if (uVar2 / 0x46297e3 + 0x656b7a08 < 0x931924a4) {
          iVar3 = 0xf2eb1c3;
        }
      }
      if (local_74 != -0x275fad09) break;
      iVar3 = -0x6270485;
      local_70 = (ID *)(param_1 + 8);
      if ((DAT_004bdd38 & DAT_004bdd3c | 0x6b72dff9) * 0x5a4ab7d6 < 0xdb05936b) {
        iVar3 = -0x6df1318d;
      }
    }
  } while (local_74 != -0x378df917);
  return;
}



// ----- -[BubbleMessageMerge .cxx_destruct] @ 0031f704 -----

/* Function Stack Size: 0x10 bytes */

void BubbleMessageMerge::_cxx_destruct(ID param_1,SEL param_2)

{
  uint uVar1;
  int local_6c;
  
  local_6c = 0x3def7b4;
LAB_0031f790:
  do {
    while (local_6c < 0x60ae8a29) {
      if (local_6c < -0x19c83ab7) {
        if (local_6c == -0x59a7aa87) {
          local_6c = -0x59a7aa87;
          if (0xc2233497 < (DAT_004bdd68 - DAT_004bdd6c & 0x84400008U) + 0xd484e9b1) {
            local_6c = 0x7f065ee3;
          }
        }
        else if (local_6c == -0x3dc3ecfb) {
          _objc_storeStrong(param_1 + 8,0);
          local_6c = 0x7c76dba4;
        }
      }
      else if (local_6c == -0x19c83ab7) {
LAB_0031f864:
        local_6c = -0x59a7aa87;
      }
      else if (local_6c == 0x3def7b4) {
        uVar1 = 0;
        if (DAT_004bdd64 != 0) {
          uVar1 = DAT_004bdd60 / DAT_004bdd64;
        }
        local_6c = 0x60eb555d;
        if (0x1c9f66a2 <
            0xa54db19bU - (int)((long)((ulong)(uVar1 + 0x4f0e4de5) * 0x99e42283) >> 0x3f)) {
          local_6c = -0x3dc3ecfb;
        }
      }
    }
    if (local_6c < 0x7c76dba4) {
      if (local_6c == 0x60ae8a29) goto LAB_0031f864;
      if (local_6c == 0x60eb555d) {
        _objc_storeStrong(param_1 + 8,0);
        local_6c = -0x3dc3ecfb;
      }
      goto LAB_0031f790;
    }
    if (local_6c == 0x7c76dba4) {
      local_6c = -0x19c83ab7;
    }
    else if (local_6c == 0x7f065ee3) {
      return;
    }
  } while( true );
}


