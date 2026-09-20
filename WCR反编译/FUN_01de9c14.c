// FUN_01de9c14 @ 01de9c14

void FUN_01de9c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *local_70;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_30;
  local_28 = local_38;
  if (local_40 == (cfstringStruct *)0x0) {
    local_70 = &cf___;
  }
  else {
    local_70 = local_40;
  }
  local_20 = local_70;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_20,&local_28,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_01decc7c(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

