// FUN_0080d088 @ 0080d088

void FUN_0080d088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_190;
  bool local_d9;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_30;
  if ((local_30 == 0) || (local_38 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar1;
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_size_026cab00);
    local_50 = param_1;
    uStack_48 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scale_026ca830);
    uStack_78 = uStack_48;
    local_80 = local_50;
    lVar1 = 0;
    local_68 = param_2;
    _UIGraphicsBeginImageContextWithOptions(local_50,uStack_48,param_2);
    _UIGraphicsGetCurrentContext();
    local_88 = lVar1;
    if (lVar1 == 0) {
      _UIGraphicsEndImageContext();
      lVar1 = local_30;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = lVar1;
      local_3c = 1;
    }
    else {
      _CGContextSetBlendMode(lVar1,0x14);
      lVar1 = local_30;
      uVar3 = 0;
      uVar2 = 0;
      uVar4 = local_50;
      uVar5 = uStack_48;
      FUN_0081e864();
      local_a8 = uVar2;
      local_a0 = uVar3;
      local_98 = uVar4;
      local_90 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,uVar3,uVar4,uVar5,lVar1,PTR_s_drawInRect__026ca610);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFill_026a3190);
      lVar1 = local_88;
      uVar3 = 0;
      uVar2 = 0;
      uVar4 = local_50;
      uVar5 = uStack_48;
      FUN_0081e864();
      local_c8 = uVar2;
      local_c0 = uVar3;
      local_b8 = uVar4;
      local_b0 = uVar5;
      _CGContextFillRect(uVar2,uVar3,uVar4,uVar5);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_d0 = lVar1;
      _UIGraphicsEndImageContext();
      local_d9 = local_d0 == 0;
      if (local_d9) {
        local_190 = local_30;
      }
      else {
        local_190 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_imageWithRenderingMode__026ca690,1);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_190;
      }
      local_d9 = !local_d9;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_190;
      if (local_d9) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
      }
      local_3c = 1;
      _objc_storeStrong(&local_d0,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

