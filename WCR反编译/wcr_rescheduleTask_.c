// wcr_rescheduleTask: @ 01bf5f5c

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsDraftListViewController::wcr_rescheduleTask_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_b0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined *local_58;
  uint local_50;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_49 = false;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_b0 = &::cf___;
  }
  else {
    local_b0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_b0;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b0;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_fireAt);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    _objc_initWeak(auStack_60,local_28);
    IVar2 = local_28;
    pcVar5 = local_40;
    puVar4 = local_58;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_01bf6288;
    local_78 = &DAT_0258ba90;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = pcVar5;
    _objc_copyWeak(auStack_68,auStack_60);
    _WCRMomentsScheduledPresentDatePicker(IVar2,puVar4,&local_90);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_70);
    _objc_destroyWeak(auStack_60);
    _objc_storeStrong(&local_58,0);
  }
  local_50 = (uint)(pcVar3 == (cfstringStruct *)0x0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

