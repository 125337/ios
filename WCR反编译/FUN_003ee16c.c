// FUN_003ee16c @ 003ee16c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] FUN_003ee16c(undefined8 param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint local_1fc;
  uint local_18c;
  ulong local_158;
  undefined8 local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  long local_110;
  ulong local_108;
  ushort local_fa;
  ulong local_f8;
  ulong local_f0;
  int local_e8;
  ulong local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  ulong local_78;
  ulong local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  uVar4 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (uVar4 == 0) {
    local_38 = 0x7fffffffffffffff;
    local_40 = 0;
    local_30 = 0x7fffffffffffffff;
    local_28 = 0;
    local_d0 = 0x7fffffffffffffff;
    local_c8 = 0;
    local_e8 = 1;
  }
  else {
    uVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    local_f0 = uVar4;
    while( true ) {
      local_18c = 0;
      if (0 < (long)local_f0) {
        uVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_characterAtIndex__0269fa18,local_f0 - 1);
        local_18c = (uint)uVar4;
        FUN_003ed084();
      }
      if ((local_18c & 1) == 0) break;
      local_f0 = local_f0 - 1;
    }
    if ((long)local_f0 < 1) {
      local_58 = 0x7fffffffffffffff;
      local_60 = 0;
      local_50 = 0x7fffffffffffffff;
      local_48 = 0;
      local_d0 = 0x7fffffffffffffff;
      local_c8 = 0;
      local_e8 = 1;
    }
    else {
      for (local_f8 = local_f0; 0 < (long)local_f8; local_f8 = local_f8 - 1) {
        uVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_characterAtIndex__0269fa18,local_f8 - 1);
        local_fa = (ushort)uVar4;
        uVar3 = (uint)uVar4 & 0xffff;
        FUN_003ee878();
        if ((uVar3 & 1) == 0) {
          uVar3 = (uint)local_fa;
          FUN_003ee8cc();
          if ((uVar3 & 1) == 0) {
            uVar3 = (uint)local_fa;
            FUN_003ed084();
            if ((uVar3 & 1) == 0) break;
          }
        }
      }
      local_110 = local_f0 - local_f8;
      local_78 = local_f8;
      local_70 = local_f8;
      local_118 = local_f8;
      uVar4 = local_d8;
      local_80 = local_110;
      local_68 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d8,PTR_s_substringWithRange__0269d138,local_f8,local_110);
      _objc_retainAutoreleasedReturnValue();
      local_120 = 0;
      local_108 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
      local_128 = uVar4;
      do {
        if (local_128 <= local_120) goto LAB_003ee7c4;
        uVar4 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_108,PTR_s_substringFromIndex__0269d120,local_120);
        _objc_retainAutoreleasedReturnValue();
        local_138 = 0;
        local_130 = uVar4;
        while( true ) {
          uVar4 = local_138;
          uVar5 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          local_1fc = 0;
          if (uVar4 < uVar5) {
            uVar4 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_characterAtIndex__0269fa18,local_138);
            local_1fc = (uint)uVar4;
            FUN_003ed084();
          }
          if ((local_1fc & 1) == 0) break;
          local_138 = local_138 + 1;
        }
        if (local_138 == 0) {
          local_140 = 0;
          uVar4 = local_130;
          FUN_003ee918(0,local_130,&local_140);
          local_158 = local_120;
          if ((uVar4 & 1) == 0) {
            while (local_158 = local_158 + 1, local_158 < local_128) {
              uVar4 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_108,PTR_s_characterAtIndex__0269fa18,local_158);
              uVar1 = (ushort)uVar4;
              if ((((0x2f < uVar1) && (uVar1 < 0x3a)) || (uVar1 == 0x2e)) ||
                 ((uVar1 == 0x2b || (uVar1 == 0x2d)))) break;
            }
            if (local_158 < local_128) {
              local_120 = local_158;
              local_e8 = 0;
            }
            else {
              local_e8 = 7;
            }
          }
          else {
            local_d0 = local_f8 + local_120;
            local_c8 = local_f0 - local_d0;
            local_e8 = 1;
            local_a0 = local_c8;
            local_98 = local_d0;
            local_90 = local_d0;
            local_88 = local_c8;
          }
        }
        else {
          local_120 = local_120 + local_138;
          local_e8 = 6;
        }
        _objc_storeStrong(&local_130,0);
      } while ((local_e8 == 0) || (local_e8 == 6));
      iVar6 = local_e8 + -7;
      if (iVar6 == 0) {
LAB_003ee7c4:
        local_b8 = 0x7fffffffffffffff;
        local_c0 = 0;
        local_b0 = 0x7fffffffffffffff;
        local_a8 = 0;
        local_d0 = 0x7fffffffffffffff;
        local_c8 = 0;
        iVar6 = 1;
        local_e8 = 1;
      }
      _objc_storeStrong(iVar6,&local_108,0);
    }
  }
  _objc_storeStrong(&local_d8,0);
  auVar2._8_8_ = local_c8;
  auVar2._0_8_ = local_d0;
  return auVar2;
}

