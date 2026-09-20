// FUN_003fe8ac @ 003fe8ac

void FUN_003fe8ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  long local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_2);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  puVar2 = local_38;
  if (puVar1 == (undefined *)0x0) {
    if (local_30 == 0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = puVar2;
    }
    else {
      local_20 = local_30;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_28 = puVar2;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_28);
  return;
}

