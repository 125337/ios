// senderIDForMessageWrap:sessionID: @ 0109cbac

/* Function Stack Size: 0x20 bytes */

ID WCRefineMessageBlockSupport::senderIDForMessageWrap_sessionID_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if (local_30 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_3c = 1;
    goto LAB_0109ceb8;
  }
  uVar1 = local_38;
  FUN_0109a9f4();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_48 = uVar1;
  FUN_0109cee4(local_30,&cf_m_nsRealChatUsr);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
LAB_0109ccc0:
    pcVar2 = local_30;
    FUN_0109cee4(local_30,&cf_m_nsFromUsr);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
LAB_0109cd70:
      pcVar2 = local_30;
      FUN_0109cee4(local_30,&cf_m_nsContent);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      FUN_0109d084();
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      pcVar2 = local_60;
      if (pcVar4 == (cfstringStruct *)0x0) {
        IVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_48);
        local_18 = local_58;
        if ((IVar3 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &::cf___;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      local_3c = 1;
      _objc_storeStrong(&local_60,0);
    }
    else {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_58);
      if ((IVar3 & 1) != 0) goto LAB_0109cd70;
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_48);
      pcVar2 = local_58;
      if (((ulong)pcVar4 & 1) != 0) goto LAB_0109cd70;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_3c = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatRoomID__0269ec68,local_50);
    pcVar2 = local_50;
    if ((IVar3 & 1) != 0) goto LAB_0109ccc0;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    local_3c = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
LAB_0109ceb8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

