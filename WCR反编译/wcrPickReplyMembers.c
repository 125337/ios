// wcrPickReplyMembers @ 017d17a0

/* Function Stack Size: 0x10 bytes */

void WCRefineAISessionSettingsViewController::wcrPickReplyMembers(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrSessionID_026b5090);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_28 = PTR_WCRefineAIStore_026ce048;
  if ((IVar3 & 1) != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrOptions_026b5098);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sanitizedUserNames__026aad80);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_initWeak(auStack_30,local_18);
    IVar3 = local_18;
    puVar1 = PTR_WCRefineChatRoomPicker_026cef60;
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrSessionID_026b5090);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_28;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_017d1a14;
    local_50 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_48,auStack_30);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_presentMemberPickerFromViewContr_026ab8b0,IVar3,IVar4,&cf_SVYc__S,puVar2
               ,&local_68);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

