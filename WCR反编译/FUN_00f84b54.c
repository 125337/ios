// FUN_00f84b54 @ 00f84b54

void FUN_00f84b54(byte param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_70;
  bool local_61;
  undefined *local_60;
  undefined *local_50;
  bool local_41;
  undefined *local_40;
  undefined *local_38;
  byte local_29;
  undefined *local_28;
  byte local_19;
  undefined *local_18;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_19 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_bubbleColorEnabled_026a8cf8);
  if (((ulong)puVar3 & 1) != 0) {
    local_29 = 0;
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_29 = puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_41 = false;
    bVar1 = false;
    local_61 = false;
    bVar2 = false;
    if ((local_19 & 1) == 0) {
      bVar2 = (local_29 & 1) == 0;
      local_a0 = local_28;
      if (bVar2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bubbleFixedColorLightOther_026a8d20);
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_a0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bubbleFixedColorDarkOther_026a8d28);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_a0;
      }
      local_61 = !bVar2;
      local_98 = local_a0;
    }
    else {
      bVar1 = (local_29 & 1) == 0;
      local_90 = local_28;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bubbleFixedColorLightSelf_026a8d10);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_90;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bubbleFixedColorDarkSelf_026a8d18);
        _objc_retainAutoreleasedReturnValue();
        local_40 = local_90;
      }
      local_41 = !bVar1;
      local_98 = local_90;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_98;
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (local_41) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (local_38 == (undefined *)0x0) {
      bVar1 = false;
    }
    else {
      uVar6 = DAT_02323d40;
      if ((local_19 & 1) == 0) {
        uVar6 = DAT_02323f68;
      }
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,local_38,PTR_s_colorWithAlphaComponent__026ca578);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_18 = puVar3;
    }
    _objc_storeStrong(&local_38,0);
    if (bVar1) goto LAB_00f84f80;
  }
  if ((local_19 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323c90,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_0232c3d0,DAT_0232c3c8,0x3ff0000000000000,DAT_02323cc0,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
LAB_00f84f80:
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

