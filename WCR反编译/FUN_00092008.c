// FUN_00092008 @ 00092008

void FUN_00092008(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38 [3];
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    if ((DAT_028c7e78 & 1) == 0) {
      FUN_0006e628();
    }
    uVar1 = local_18;
    FUN_0009239c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_18;
    local_38[0] = uVar1;
    FUN_00071ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_18;
    local_40 = uVar2;
    FUN_00077d80(local_18,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    FUN_0006fa28();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x24f6e4);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeFromSuperview_026ca800);
      }
      if (local_38[0] == 0) {
        FUN_0006faf4(local_18);
      }
      else {
        FUN_0006faf4(local_38[0]);
      }
      local_1c = 1;
      _objc_storeStrong(&local_50,0);
    }
    else {
      uVar1 = local_18;
      FUN_00092780();
      if ((uVar1 & 1) == 0) {
        FUN_0008b550(local_18);
        if (local_38[0] == 0) {
          uVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x24f6e4);
          _objc_retainAutoreleasedReturnValue();
          local_58 = uVar1;
          if (uVar1 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeFromSuperview_026ca800);
          }
          FUN_00081fbc(local_18,local_48,0,0,1);
          _objc_storeStrong(&local_58,0);
          local_1c = 0;
        }
        else {
          FUN_00081fbc(local_38[0],local_48,0,0,1);
          FUN_00070364(local_18,local_38[0]);
          local_1c = 1;
        }
      }
      else {
        local_1c = 1;
      }
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(local_38,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

