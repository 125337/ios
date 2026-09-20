// FUN_00115208 @ 00115208

void FUN_00115208(long param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  cfstringStruct *local_f0;
  cfstringStruct *local_e0;
  cfstringStruct *local_88 [3];
  cfstringStruct *local_70;
  long local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = (cfstringStruct *)0x0;
  local_50 = param_1;
  _objc_storeStrong(&local_58);
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,param_3);
  pcVar1 = local_58;
  local_68 = param_1;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_60;
  local_70 = pcVar1;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_70;
  local_88[0] = pcVar2;
  FUN_00115578();
  if (((ulong)pcVar1 & 1) != 0) {
    _objc_storeStrong(&local_70,&cf___);
  }
  pcVar1 = local_88[0];
  FUN_00115578();
  if (((ulong)pcVar1 & 1) != 0) {
    _objc_storeStrong(local_88,&cf___);
  }
  pcVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if ((pcVar1 != (cfstringStruct *)0x0) ||
     (pcVar1 = local_88[0], (*(code *)PTR__objc_msgSend_02578628)(local_88[0],PTR_s_length_0269cca0)
     , pcVar1 != (cfstringStruct *)0x0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_48 = &cf_userId;
    if (local_70 == (cfstringStruct *)0x0) {
      local_e0 = &cf___;
    }
    else {
      local_e0 = local_70;
    }
    local_38 = local_e0;
    local_40 = &cf_nickname;
    if (local_88[0] == (cfstringStruct *)0x0) {
      local_f0 = &cf___;
    }
    else {
      local_f0 = local_88[0];
    }
    local_30 = local_f0;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(local_88);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

