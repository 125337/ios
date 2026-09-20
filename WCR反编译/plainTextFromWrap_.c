// plainTextFromWrap: @ 00ed01a4

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::plainTextFromWrap_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    local_40 = (undefined *)0x0;
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_plainTextFromMessageWrap__026a3628,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_plainTextByStrippingGroupPrefix__026ab618,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = pcVar3;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

