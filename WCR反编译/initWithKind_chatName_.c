// initWithKind:chatName: @ 01f68c88

/* Function Stack Size: 0x20 bytes */

ID WCRefineVoicePackBookmarkListViewController::initWithKind_chatName_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
  undefined8 *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long_long local_28;
  SEL local_20;
  ID *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_30,param_4);
  local_40 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_40;
  local_38 = PTR_WCRefineVoicePackBookmarkListViewController_026d0280;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    *(long_long *)((long)local_18 + (long)_kind) = local_28;
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    local_60 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_60 = &::cf___;
    }
    _objc_storeStrong((long)local_18 + (long)_chatName,local_60);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

