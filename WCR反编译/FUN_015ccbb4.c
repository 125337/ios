// FUN_015ccbb4 @ 015ccbb4

void FUN_015ccbb4(undefined8 param_1,byte param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_90;
  long local_80;
  undefined *local_68;
  undefined4 local_60;
  bool local_59;
  undefined *local_58;
  bool local_49;
  long local_48;
  long local_40;
  byte local_31;
  long local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_49 = false;
  bVar1 = (param_2 & 1) == 0;
  local_31 = param_2;
  if (bVar1) {
    local_80 = 0;
  }
  else {
    local_80 = local_30;
    FUN_015d3c44();
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_80;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_80;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  if (lVar2 == 0) {
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_59 = false;
    if (lVar2 == 0) {
      local_90 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_20 = local_30;
      local_90 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_90;
    }
    local_59 = lVar2 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_90;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    local_60 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540,local_40);
    puVar3 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar3;
    local_60 = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_28);
  return;
}

