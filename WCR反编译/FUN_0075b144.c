// FUN_0075b144 @ 0075b144

byte FUN_0075b144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_110;
  ulong local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined4 local_70;
  undefined8 local_60;
  long local_58;
  long local_50;
  byte local_41;
  cfstringStruct *local_40 [3];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  local_60 = param_3;
  if ((local_50 == 0) ||
     (lVar3 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_41 = 0;
    local_70 = 1;
  }
  else {
    pcVar4 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 0;
    local_110 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_110 = (cfstringStruct *)PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_110;
    }
    local_89 = pcVar4 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_110;
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (local_80 == (cfstringStruct *)0x0) {
      local_41 = 0;
      local_70 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = &cf___;
      local_a0 = (cfstringStruct *)0x0;
      local_40[0] = (cfstringStruct *)PTR_s_getChatContact_0269d630;
      pcVar4 = &cf_GetCContact;
      _NSSelectorFromString();
      pcVar5 = &cf_GetContact;
      local_40[1] = pcVar4;
      _NSSelectorFromString();
      local_40[2] = pcVar5;
      for (local_a8 = 0; local_a8 < 3; local_a8 = local_a8 + 1) {
        pcVar4 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,local_40[local_a8]);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar5 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,local_40[local_a8]);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_a0;
          local_a0 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if (local_a0 != (cfstringStruct *)0x0) break;
        }
      }
      if (local_a0 != (cfstringStruct *)0x0) {
        pcVar5 = local_a0;
        FUN_0074c5f8(local_a0,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        FUN_00743f78();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_98;
        local_98 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      _objc_storeStrong(&local_a0,0);
      pcVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      if ((pcVar4 == (cfstringStruct *)0x0) ||
         (pcVar4 = local_98,
         (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,local_58),
         puVar1 = PTR_s_returnToOriginalMsg__0269d600, ((ulong)pcVar4 & 1) == 0)) {
        local_41 = 0;
      }
      else {
        pcVar4 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_returnToOriginalMsg__0269d600);
        puVar2 = PTR_s_locateToMsg__0269d608;
        if (((ulong)pcVar4 & 1) == 0) {
          pcVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_locateToMsg__0269d608);
          if (((ulong)pcVar4 & 1) == 0) {
            local_41 = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_80,puVar2,local_50);
            local_41 = 1;
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_80,puVar1,local_50);
          local_41 = 1;
        }
      }
      local_70 = 1;
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_41 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

