// FUN_00f7d78c @ 00f7d78c

void FUN_00f7d78c(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_80;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "ChatBoxMgr";
  _objc_getClass();
  FUN_00f7cea4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = (cfstringStruct *)pcVar1;
  if ((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &cf___;
    local_44 = 1;
  }
  else {
    FUN_00f7c19c(pcVar1,&cf_getChatBoxSession);
    _objc_retainAutoreleasedReturnValue();
    local_50 = (cfstringStruct *)pcVar1;
    if ((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) {
      pcVar2 = local_40;
      FUN_00f7c19c(local_40,&cf_chatBoxSession);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_50;
      local_50 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar2 = local_50;
    FUN_00f75654();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    pcVar4 = local_50;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_30 = &cf_m_nsUserName;
      local_28 = &cf_m_nsUsrName;
      local_20 = &cf_m_nsSessionUserName;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      FUN_00f79848();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      local_58 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (local_58 == (cfstringStruct *)0x0) {
      local_80 = &cf___;
    }
    else {
      local_80 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_80;
    local_44 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_38);
  return;
}

