// didTapQuickAdd: @ 01e44134

/* Function Stack Size: 0x18 bytes */

void WCRTGQuickAddViewController::didTapQuickAdd_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  cfstringStruct *local_58;
  ID local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c69f0);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar2 & 1) == 0) {
    local_58 = &::cf___;
  }
  else {
    local_58 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_catalogTabWithId__026c64f8,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar4;
  if (IVar4 != 0) {
    puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (((ulong)puVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R__X__W);
    }
    else {
      IVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_title_0269d250);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__mR0_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onAdded_026c6500);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar4 != 0) {
        IVar4 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onAdded_026c6500);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(IVar4 + 0x10))();
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupData_026b7c20);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

