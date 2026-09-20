// FUN_003ecb30 @ 003ecb30

byte FUN_003ecb30(undefined8 param_1,ulong *param_2,byte *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  uint local_104;
  ulong local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined *puStack_88;
  ulong local_80;
  ulong local_78;
  undefined *puStack_70;
  byte local_61;
  ulong local_60;
  undefined4 local_58;
  ulong *local_48;
  byte *local_40;
  ulong *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_21 = 0;
    local_58 = 1;
  }
  else {
    uVar2 = local_30;
    FUN_003eca9c();
    uVar1 = local_30;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = uVar1;
      local_61 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasSuffix__0269d018,&cf__);
      if (((uVar1 & 1) != 0) ||
         (uVar1 = local_60, puVar3 = PTR_s_hasSuffix__0269d018,
         (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasSuffix__0269d018,&cf_format_s_),
         (uVar1 & 1) != 0)) {
        uVar1 = local_60;
        local_61 = 1;
        uVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringToIndex__0269d6c0,uVar2 - 1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_60;
        local_60 = uVar1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        while( true ) {
          uVar2 = local_60;
          puVar3 = PTR_s_length_0269cca0;
          (*(code *)PTR__objc_msgSend_02578628)();
          uVar1 = local_60;
          local_104 = 0;
          if (uVar2 != 0) {
            uVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
            puVar3 = PTR_s_characterAtIndex__0269fa18;
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_characterAtIndex__0269fa18,uVar2 - 1);
            local_104 = (uint)uVar1;
            FUN_003ed084();
          }
          uVar1 = local_60;
          if ((local_104 & 1) == 0) break;
          uVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringToIndex__0269d6c0,uVar2 - 1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_60;
          local_60 = uVar1;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
      }
      uVar1 = local_60;
      FUN_003ee16c();
      local_78 = uVar1;
      puStack_70 = puVar3;
      if (uVar1 == 0x7fffffffffffffff) {
        local_21 = 0;
        local_58 = 1;
      }
      else {
        uVar2 = local_60;
        local_90 = uVar1;
        puStack_88 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_substringWithRange__0269d138,uVar1,puVar3);
        _objc_retainAutoreleasedReturnValue();
        local_98 = 0;
        local_80 = uVar2;
        FUN_003ee918(uVar2,&local_98);
        if ((uVar2 & 1) == 0) {
          local_21 = 0;
          local_58 = 1;
        }
        else {
          FUN_003efab8(local_98);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = uVar2;
          if (uVar2 == 0) {
            local_21 = 0;
          }
          else {
            if (local_38 != (ulong *)0x0) {
              local_38[1] = (ulong)puStack_70;
              *local_38 = local_78;
            }
            if (local_40 != (byte *)0x0) {
              *local_40 = local_61 & 1;
            }
            if (local_48 != (ulong *)0x0) {
              _objc_retainAutorelease();
              *local_48 = uVar2;
            }
            local_21 = 1;
          }
          local_58 = 1;
          _objc_storeStrong(&local_a0,0);
        }
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_21 = 0;
      local_58 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

