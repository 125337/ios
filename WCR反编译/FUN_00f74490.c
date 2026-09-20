// FUN_00f74490 @ 00f74490

void FUN_00f74490(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c0;
  cfstringStruct *local_80;
  cfstringStruct *local_78 [4];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct local_48;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = &local_48;
  local_48.field0_0x0 = 0;
  _objc_storeStrong(pcVar2,param_1);
  FUN_00f75634();
  _objc_retainAutoreleasedReturnValue();
  local_58 = (cfstringStruct *)0x0;
  local_50 = pcVar2;
  if ((pcVar2 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_getContactByName__0269d178,local_48.field0_0x0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_58;
    local_58 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_58;
  local_48.field2_0x10 = (undefined *)&cf_getContactDisplayName;
  local_48.field3_0x18 = (long)&cf_getDisplayName;
  local_28 = &cf_m_nsRemark;
  local_20 = &cf_m_nsNickName;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
             &local_48.field2_0x10,4);
  _objc_retainAutoreleasedReturnValue();
  FUN_00f79848();
  _objc_retainAutoreleasedReturnValue();
  local_78[0] = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar2 = local_78[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_length_0269cca0);
  bVar1 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_80 = (cfstringStruct *)local_48.field0_0x0;
    FUN_00f73814(0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_d0 = local_80;
    if (local_80 == (cfstringStruct *)0x0) {
      local_d0 = &cf__gw_YS;
    }
    local_c0 = local_d0;
  }
  else {
    local_c0 = local_78[0];
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48.field1_0x8 = (qword)local_c0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  _objc_storeStrong(local_78);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_48.field1_0x8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

