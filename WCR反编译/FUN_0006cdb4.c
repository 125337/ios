// FUN_0006cdb4 @ 0006cdb4

void FUN_0006cdb4(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong local_98;
  undefined1 auStack_68 [48];
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_0006d064(local_18,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_18;
    FUN_0006db48(local_18,0);
    if ((uVar2 & 1) == 0) {
      local_28 = 1;
    }
    else {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_98 = uVar2;
      if (uVar2 == 0) {
        local_98 = local_18;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = local_98;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((DAT_028c7e78 & 1) == 0) {
        FUN_0006e628();
      }
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewWithTag__026cabe0,0x24f6e4);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      FUN_0006fa28();
      if ((uVar2 & 1) == 0) {
        if (local_38 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeFromSuperview_026ca800);
        }
        FUN_0006faf4(local_18);
        local_28 = 1;
      }
      else {
        FUN_000701ec(auStack_68);
        uVar1 = 0;
        FUN_0007017c();
        if ((uVar1 & 1) == 0) {
          FUN_0006faf4(local_18);
        }
        else {
          FUN_00070260(local_18);
        }
        FUN_00070364(local_30,local_18);
        local_28 = 0;
      }
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
    }
  }
  else {
    FUN_0006d5e8(local_18);
    local_28 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

