// confirmPercentInput @ 01a83914

/* Function Stack Size: 0x10 bytes */

void WCRefineGlobalPageBackgroundViewController::confirmPercentInput(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  undefined *puVar6;
  double dVar7;
  cfstringStruct *local_b0;
  long local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  ID local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingPercentKey_026bd7e8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_percentAlert_026bd7f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPercentAlert__026bd7d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingPercentKey__026bd7c8,0);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_39 = 0;
  bVar1 = true;
  if (IVar5 != 0) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_expandedScene_026bd750);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar2 == (cfstringStruct *)0x0;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar2 = local_30;
  if (bVar1) {
    local_40 = 1;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (local_48 == (cfstringStruct *)0x0) {
      local_b0 = &::cf___;
    }
    else {
      local_b0 = local_48;
    }
    puVar6 = PTR__OBJC_CLASS___NSScanner_026ce368;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_b0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = 0;
    local_50 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_scanInteger__026a4fc8,&local_58);
    if ((((((ulong)puVar6 & 1) == 0) ||
         (puVar6 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isAtEnd_026ab608),
         ((ulong)puVar6 & 1) == 0)) || (local_58 < 0)) || (100 < local_58)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
      local_40 = 1;
    }
    else {
      dVar7 = (double)local_58;
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_blur);
      puVar6 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
      if ((IVar5 & 1) == 0) {
        pcVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_expandedScene_026bd750);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar7 / 100.0,puVar6,PTR_s_setOpacity_forScene__026bd7b0);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      else {
        pcVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_expandedScene_026bd750);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar7 / 100.0,puVar6,PTR_s_setBlur_forScene__026bd7b8)
        ;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      local_40 = 0;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

