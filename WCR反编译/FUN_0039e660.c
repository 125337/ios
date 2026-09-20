// FUN_0039e660 @ 0039e660

void FUN_0039e660(undefined8 param_1,byte param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_80;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  byte local_19;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = &cf_FakeMainFrameCell;
  if ((param_2 & 1) == 0) {
    local_28 = &cf_NewMainFrameCell;
  }
  local_19 = param_2;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = &cf_WCRGroupingNativeFakeEntryCell;
  if ((local_19 & 1) == 0) {
    local_30 = &cf_WCRGroupingNativeFinalEntryCell;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar1 = local_28;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_UTF8String_026a2e68);
  _objc_getClass();
  pcVar2 = local_18;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_dequeueReusableCellWithIdentifie_026a2808,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  if (((pcVar2 == (cfstringStruct *)0x0) || (local_38 == (cfstringStruct *)0x0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,local_38),
     ((ulong)pcVar2 & 1) == 0)) {
    if (local_38 == (cfstringStruct *)0x0) {
      local_80 = (cfstringStruct *)PTR__OBJC_CLASS___UITableViewCell_026ce200;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    }
    else {
      local_80 = local_38;
    }
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar1 = local_40;
    local_40 = local_80;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  FUN_0036bf30(local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAccessoryType__026a3220,0);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

