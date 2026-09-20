// FUN_01868548 @ 01868548

void FUN_01868548(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_68;
  ulong local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_1);
  uVar2 = local_68;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_60 = local_68;
  if ((uVar2 & 1) == 0) {
    local_58 = &cf_m_nsUsrName;
    local_50 = &cf_getUsrName;
    local_48 = &cf_m_nsUserName;
    local_40 = &cf_userName;
    local_38 = &cf_username;
    local_30 = &cf_m_nsMemberName;
    local_28 = &cf_m_nsEncodeUserName;
    local_20 = &cf_getEncodeUserName;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,8
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_018688d0();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    uVar2 = local_68;
    FUN_01860804();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar2;
  }
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_60);
  return;
}

