// FUN_00055568 @ 00055568

void FUN_00055568(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_60;
  undefined4 local_58;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "CContactMgr";
  _objc_getClass();
  local_40 = (cfstringStruct *)pcVar1;
  FUN_0004ea88();
  _objc_retainAutoreleasedReturnValue();
  local_48 = (cfstringStruct *)pcVar1;
  if (((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60),
     ((ulong)pcVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = &cf___;
    local_58 = 1;
  }
  else {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getSelfContact_0269da60);
    _objc_retainAutoreleasedReturnValue();
    local_30 = &cf_m_nsUsrName;
    local_28 = &cf_m_nsUserName;
    local_20 = &cf_username;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_60 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_0004f1c4();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_58 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

