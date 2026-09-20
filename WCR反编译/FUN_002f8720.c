// FUN_002f8720 @ 002f8720

void FUN_002f8720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_b0;
  ulong local_a8;
  undefined8 local_98;
  byte local_8c;
  ulong local_70;
  undefined1 local_61;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  undefined8 local_40;
  byte local_32;
  byte local_31;
  undefined *local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_24 = 1;
    goto LAB_002f8b28;
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  FUN_002f8b50();
  local_31 = (byte)puVar1;
  local_8c = 0;
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_glassBeautifyColorEnabled_026a1f70);
    local_8c = (byte)puVar1;
  }
  local_32 = local_8c & 1;
  if ((local_31 & 1) == 0) {
    local_98 = 0xbff0000000000000;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_glassBeautifyIntensity_026a1f78);
    local_98 = param_1;
  }
  local_40 = local_98;
  local_51 = 0;
  if ((local_32 & 1) == 0) {
    local_b0 = 0;
  }
  else {
    if (local_20 == 0) {
      local_a8 = local_18;
    }
    else {
      local_a8 = local_20;
    }
    FUN_002f8be8();
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_b0 = local_a8;
    local_50 = local_a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b0;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  uVar3 = (ulong)(local_31 & 1);
  FUN_002f8e2c(local_40,uVar3,local_32 & 1,local_48);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_60 = uVar3;
  _objc_getAssociatedObject(local_18,&DAT_026dfda8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_18;
  local_61 = (undefined1)uVar3;
  if ((local_31 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      FUN_002f8f64(local_18);
      _objc_setAssociatedObject(local_18,&DAT_026dfda8,0,1);
    }
    local_24 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,&DAT_026dfda8,puVar1,1);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_026dfdb0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,local_60);
    if ((uVar2 & 1) == 0) {
LAB_002f8aa4:
      FUN_002f9c48(local_18,1,local_32 & 1,local_48);
      _objc_setAssociatedObject(local_18,&DAT_026dfdb0,local_60,3);
      FUN_002f9754(local_40,local_18);
      local_24 = 0;
    }
    else {
      uVar2 = local_18;
      FUN_002f90bc();
      if ((uVar2 & 1) == 0) goto LAB_002f8aa4;
      FUN_002f9754(local_40,local_18);
      local_24 = 1;
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
LAB_002f8b28:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

