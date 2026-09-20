// FUN_00243b74 @ 00243b74

byte FUN_00243b74(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_50;
  ulong local_48;
  byte local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_1);
  uVar1 = local_48;
  FUN_00245428();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  uVar2 = local_50;
  if (uVar1 == 0) {
    local_39 = 0;
  }
  else {
    FUN_00244ef4();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) == 0) {
      local_38 = &cf_lS_gS;
      local_30 = &cf_I_vf_gS;
      local_28 = &cf_ForwardtoFriends;
      local_20 = &cf_Forward;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_39 = (byte)puVar4 & 1;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      local_39 = 1;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_39 & 1;
}

