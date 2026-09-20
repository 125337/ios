// FUN_00751c18 @ 00751c18

void FUN_00751c18(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_88;
  ulong local_80;
  cfstringStruct *local_78 [3];
  char *local_60;
  uint local_54;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  if (local_50 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
    local_54 = 1;
  }
  else {
    pcVar2 = "BaseMsgContentViewController";
    _objc_getClass();
    local_60 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       (pcVar3 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,pcVar2),
       ((ulong)pcVar3 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = &cf___;
      local_54 = 1;
    }
    else {
      local_78[0] = (cfstringStruct *)0x0;
      local_40[0] = (cfstringStruct *)PTR_s_getChatContact_0269d630;
      pcVar3 = &cf_GetCContact;
      _NSSelectorFromString();
      pcVar4 = &cf_GetContact;
      local_40[1] = pcVar3;
      _NSSelectorFromString();
      local_40[2] = pcVar4;
      for (local_80 = 0; pcVar3 = (cfstringStruct *)(local_80 - 3), local_80 < 3;
          local_80 = local_80 + 1) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,local_40[local_80]);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar4 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,local_40[local_80]);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_78[0];
          local_78[0] = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_78[0];
          if (local_78[0] != (cfstringStruct *)0x0) break;
        }
      }
      pcVar4 = local_78[0];
      FUN_0074c5f8(pcVar3,local_78[0],&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar4 = local_78[0];
        FUN_0074c5f8(local_78[0],&cf_m_nsUsername);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        FUN_00743f78();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_88;
        local_88 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      pcVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      pcVar3 = local_88;
      bVar1 = pcVar4 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = pcVar3;
      }
      local_54 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_88);
      _objc_storeStrong(local_78,0);
      if (local_54 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = &cf___;
        local_54 = 1;
      }
    }
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

