// beginEditTitleAtIndex: @ 01e33738

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatURLSchemeViewController::beginEditTitleAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_60;
  cfstringStruct *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  pcVar3 = (cfstringStruct *)PTR_WCRSuperFloatProfileStore_026cee48;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_28;
  local_30 = pcVar3;
  if ((-1 < (long)local_28) &&
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0), (long)lVar1 < (long)pcVar3
     )) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingIndex__026c62e8,local_28);
    IVar2 = local_18;
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_presentTextAlertTitle_message_pl_026c6350,&cf_RTy,&cf__>f_yTyo_yagv_NS9e,
               local_60,0x28,PTR_s_handleSaveTitleOnly__026c6358);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

