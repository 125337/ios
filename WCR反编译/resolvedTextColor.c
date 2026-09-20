// resolvedTextColor @ 01e54b3c

/* WARNING: Removing unreachable block (ram,0x01e54bc8) */
/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramTabStripView::resolvedTextColor(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_78;
  undefined *local_60;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
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
  local_38 = (undefined *)0x0;
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_38;
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar4 = local_20;
  FUN_01e54350();
  if ((IVar4 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323cc0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_homeTelegramGroupingCustomTextCo_026c6758);
  puVar2 = local_38;
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_3c = 1;
  }
  else {
    IVar4 = local_20;
    FUN_01e54350();
    bVar1 = (IVar4 & 1) == 0;
    local_78 = local_30;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_homeTelegramGroupingTextColorLig_026c6768);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_78;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_homeTelegramGroupingTextColorDar_026c6770);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_78;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    puVar2 = local_48;
    FUN_01e54424(local_48,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

