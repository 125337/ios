// promptRemarkForItem: @ 01d194fc

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickReplyListViewController::promptRemarkForItem_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_98;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_2c = 1;
  }
  else {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,_WCRQuickReplyRemarkKey);
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_98 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_98;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar3 & 1) == 0) {
      _objc_storeStrong(&local_38,&::cf___);
    }
    _objc_initWeak(auStack_40,local_18);
    pcVar1 = local_28;
    pcVar3 = local_38;
    puVar2 = PTR_WCRefineHelper_026ce000;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01d197ac;
    local_58 = &DAT_0258c190;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = pcVar1;
    _objc_copyWeak(auStack_48,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4064000000000000,puVar2,PTR_s_presentPageSheetSingleLineInputW_026a46e0,&cf_Yl,
               &cf_YuzzR>f_ySYQ_,pcVar3,&local_70);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    _objc_destroyWeak(auStack_48);
    _objc_storeStrong(&local_50);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

