// FUN_0066b094 @ 0066b094

double FUN_0066b094(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined *local_50;
  undefined4 local_48;
  long local_38;
  double local_30;
  undefined8 local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_30 = 0.0;
    local_48 = 1;
  }
  else {
    dVar4 = 14.0;
    puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    local_28 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_50 = puVar2;
    local_20 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_sizeWithAttributes__026cab08);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_30 = (double)(long)dVar4 + 4.0;
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_30;
}

