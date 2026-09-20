// resolvedHighlightColor @ 01e54e2c

/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramTabStripView::resolvedHighlightColor(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined *local_88;
  undefined *local_78;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_20;
  local_30 = puVar2;
  FUN_01e54350();
  local_41 = 0;
  local_51 = 0;
  local_88 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_88;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_88;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  puVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_homeTelegramGroupingCustomHighli_026c6780);
  puVar2 = local_38;
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_58 = 1;
  }
  else {
    IVar3 = local_20;
    FUN_01e54350();
    bVar1 = (IVar3 & 1) == 0;
    local_a0 = local_30;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_homeTelegramGroupingHighlightCol_026c6790);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_a0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_homeTelegramGroupingHighlightCol_026c6798);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_a0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_a0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    puVar2 = local_60;
    FUN_01e54424(local_60,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_58 = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

