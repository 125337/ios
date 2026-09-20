// FUN_003cbf5c @ 003cbf5c

void FUN_003cbf5c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [48];
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar1 = local_28;
  FUN_003beb04();
  if ((uVar1 & 1) == 0) {
    local_2c = 1;
  }
  else {
    uVar1 = local_28;
    FUN_003b269c();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      FUN_0036bd00();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_frame_026ca640);
        uVar2 = 0x3fe0000000000000;
        local_58 = param_1;
        local_50 = param_2;
        local_48 = param_3;
        local_40 = param_4;
        if (0.5 < ABS(param_1)) {
          _memcpy(auStack_88,PTR__CGAffineTransformIdentity_025782d8,0x30);
          uVar1 = local_38;
          _memcpy(auStack_b8,auStack_88,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_b8);
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,uVar2,param_3,param_4,local_38,PTR_s_setFrame__026ca960);
        }
      }
      _objc_storeStrong(&local_38,0);
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

