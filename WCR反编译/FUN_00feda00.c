// FUN_00feda00 @ 00feda00

void FUN_00feda00(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long local_40;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  FUN_00fed98c();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  while (local_20 = param_1 + -1, -1 < local_20) {
    lVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_grow_026ad580);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = false;
    bVar1 = false;
    bVar3 = false;
    if (lVar4 == 0) {
      local_30 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tool_026ad588);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      bVar3 = false;
      if (local_30 == 0) {
        local_40 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inner_026ad590);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        bVar3 = local_40 == 0;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    (*(code *)PTR__objc_release_02578630)(lVar4);
    if (bVar3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObjectAtIndex__0269d530,local_20);
    }
    _objc_storeStrong(&local_28,0);
    param_1 = local_20;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

