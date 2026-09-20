// FUN_001f8830 @ 001f8830

void FUN_001f8830(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **local_80;
  undefined **local_70;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38 [3];
  byte local_19;
  undefined *local_18;
  
  uVar1 = DAT_02323d70;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar3;
  FUN_001d6008();
  local_19 = (byte)puVar3;
  puVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatBubbleCornerBorderColorLight_026a03e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_18;
  local_38[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatBubbleCornerBorderColorDark_026a03f0);
  _objc_retainAutoreleasedReturnValue();
  if ((local_19 & 1) == 0) {
    local_70 = local_38;
  }
  else {
    local_70 = &local_40;
  }
  puVar3 = *local_70;
  local_40 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    if ((local_19 & 1) == 0) {
      local_80 = &local_40;
    }
    else {
      local_80 = local_38;
    }
    _objc_storeStrong(&local_48,*local_80);
  }
  if (local_48 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,uVar1,0x3fe6666666666666,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_48;
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

