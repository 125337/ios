// chatSessionUserNameFromViewController: @ 01b2e56c

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertHistoryViewController::chatSessionUserNameFromViewController_
             (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_78;
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
  pcVar2 = local_50;
  if (local_50 != (cfstringStruct *)0x0) {
    pcVar1 = "BaseMsgContentViewController";
    _objc_getClass("BaseMsgContentViewController");
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if (((ulong)pcVar2 & 1) != 0) {
      local_60 = (cfstringStruct *)0x0;
      local_30[0] = (cfstringStruct *)PTR_s_getChatContact_0269d630;
      pcVar2 = &cf_GetCContact;
      _NSSelectorFromString();
      pcVar3 = &cf_GetContact;
      local_30[1] = pcVar2;
      _NSSelectorFromString();
      local_30[2] = pcVar3;
      for (local_68 = 0; local_68 < 3; local_68 = local_68 + 1) {
        local_70 = local_30[local_68];
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,local_70);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,local_70);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_60;
          local_60 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          if (local_60 != (cfstringStruct *)0x0) break;
        }
      }
      if (local_60 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = &::cf___;
        local_54 = 1;
      }
      else {
        pcVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar2;
        FUN_01b1fc40();
        _objc_retainAutoreleasedReturnValue();
        local_54 = 1;
        local_38 = pcVar2;
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_60,0);
      goto LAB_01b2e828;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &::cf___;
  local_54 = 1;
LAB_01b2e828:
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_38;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

