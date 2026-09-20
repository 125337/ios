// wcrRepo_chatSessionFromBaseMsgVC: @ 01bb2b54

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageRepositoryViewController::wcrRepo_chatSessionFromBaseMsgVC_
             (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_e0;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  ulong local_80;
  cfstringStruct *local_78;
  undefined4 local_6c;
  char *local_68;
  cfstringStruct *local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = (cfstringStruct *)0x0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  local_68 = pcVar1;
  if ((local_60 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_60,
     (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isKindOfClass__0269cd68,pcVar1),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &::cf___;
    local_6c = 1;
  }
  else {
    local_78 = (cfstringStruct *)0x0;
    local_40[0] = (cfstringStruct *)PTR_s_getChatContact_0269d630;
    pcVar2 = &cf_GetCContact;
    _NSSelectorFromString();
    pcVar3 = &cf_GetContact;
    local_40[1] = pcVar2;
    _NSSelectorFromString();
    local_40[2] = pcVar3;
    for (local_80 = 0; local_80 < 3; local_80 = local_80 + 1) {
      local_88 = local_40[local_80];
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,local_88);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,local_88);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_78;
        local_78 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        if (local_78 != (cfstringStruct *)0x0) break;
      }
    }
    if (local_78 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = &::cf___;
      local_6c = 1;
    }
    else {
      pcVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_90 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)pcVar2 & 1) == 0) {
        local_e0 = &::cf___;
      }
      else {
        local_e0 = local_90;
      }
      FUN_01bb2ed8();
      _objc_retainAutoreleasedReturnValue();
      local_6c = 1;
      local_48 = local_e0;
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_48;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

