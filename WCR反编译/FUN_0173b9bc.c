// FUN_0173b9bc @ 0173b9bc

long FUN_0173b9bc(long param_1)

{
  long lVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  FUN_017444fc();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_20;
  local_28 = param_1;
  if ((local_20 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0), param_1 <= lVar1)) {
    local_18 = 0;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectAtIndexedSubscript__0269cc78,local_20);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_28,0);
  return local_18;
}

