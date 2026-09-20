// sessionUserNameFromChatController: @ 01ea2b0c

/* Function Stack Size: 0x18 bytes */

ID WCRefineToDoHistoryViewController::sessionUserNameFromChatController_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_b8;
  cfstringStruct *local_70;
  ulong local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  if (local_50 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &::cf___;
    local_54 = 1;
  }
  else {
    local_60 = (cfstringStruct *)0x0;
    local_30[0] = (cfstringStruct *)PTR_s_getChatContact_0269d630;
    pcVar1 = &cf_GetCContact;
    _NSSelectorFromString();
    pcVar2 = &cf_GetContact;
    local_30[1] = pcVar1;
    _NSSelectorFromString();
    local_30[2] = pcVar2;
    for (local_68 = 0; local_68 < 3; local_68 = local_68 + 1) {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,local_30[local_68]);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,local_30[local_68]);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_60;
        local_60 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        if (local_60 != (cfstringStruct *)0x0) break;
      }
    }
    pcVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_70 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      local_b8 = &::cf___;
    }
    else {
      local_b8 = local_70;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_b8;
    local_54 = 1;
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_38;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

