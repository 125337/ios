// FUN_00f638e8 @ 00f638e8

byte FUN_00f638e8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong local_88 [5];
  char *local_60;
  undefined4 local_54;
  char *local_50;
  ulong local_48;
  undefined8 local_40;
  byte local_31;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  pcVar1 = "ContactInfoViewController";
  _objc_getClass();
  local_50 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
    local_31 = 0;
    local_54 = 1;
  }
  else {
    _objc_alloc_init();
    local_60 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_31 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,local_40,&cf_m_contact);
      pcVar1 = local_60;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_m_uiFromScene);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (uVar3 != 0) {
        FUN_00f62910(uVar3);
        _objc_retainAutoreleasedReturnValue();
        local_88[0] = uVar3;
        if (uVar3 != 0) {
          pcVar4 = &cf_getContactsFromServer_;
          _NSSelectorFromString();
          uVar5 = local_88[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88[0],PTR_s_respondsToSelector__026ca818,pcVar4);
          uVar3 = local_88[0];
          if ((uVar5 & 1) != 0) {
            local_30 = local_48;
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_30,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar4);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          pcVar4 = &cf_updateContactFromServer;
          _NSSelectorFromString();
          pcVar1 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_respondsToSelector__026ca818,pcVar4);
          if (((ulong)pcVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,pcVar4);
          }
        }
        _objc_storeStrong(local_88,0);
      }
      pcVar1 = local_60;
      FUN_00f63dc8();
      local_31 = (byte)pcVar1 & 1;
    }
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_31 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

