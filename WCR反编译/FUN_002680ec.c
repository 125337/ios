// FUN_002680ec @ 002680ec

void FUN_002680ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long local_40 [3];
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = local_20;
    (*DAT_028c9508)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar3;
  }
  else {
    lVar3 = local_20;
    _objc_getAssociatedObject(local_20,&DAT_028c9530);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = lVar3;
    if (lVar3 == 0) {
      lVar3 = local_20;
      (*DAT_028c9508)(local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar3;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar3;
    }
    _objc_storeStrong(local_40,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

