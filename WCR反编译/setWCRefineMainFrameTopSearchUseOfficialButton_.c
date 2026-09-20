// setWCRefineMainFrameTopSearchUseOfficialButton: @ 021214c8

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setWCRefineMainFrameTopSearchUseOfficialButton_
               (ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  byte local_54;
  ID local_40;
  byte local_31;
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_WCRefineMainFrameTopSearchMode);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = IVar2 != 0;
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_31 = bVar1;
  if (!bVar1) {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKey__0269e048,&cf_WCRefineSearchEntryMainFrameButton);
    _objc_retainAutoreleasedReturnValue();
    local_54 = 0;
    local_40 = IVar2;
    if (IVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_boolValue_026ca540);
      local_54 = (byte)IVar2;
    }
    local_31 = local_54 & 1;
    _objc_storeStrong(&local_40,0);
  }
  IVar2 = local_30;
  if ((local_31 & 1) == 0) {
    local_21 = 0;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_21 & 1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_setObject_forKey__026ca9e8,puVar3,
             &cf_WCRefineMainFrameTopSearchUseOfficialButton);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30,0);
  return;
}

