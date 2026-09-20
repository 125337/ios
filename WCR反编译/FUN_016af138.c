// FUN_016af138 @ 016af138

void FUN_016af138(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_54;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_016af464();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_54 = 0;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_54 = (uint)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if ((local_54 & 1) == 0) {
    FUN_016af7cc(local_18,&cf_ck_WN_eN_,&PTR___NSConcreteGlobalBlock_02588020);
  }
  else {
    FUN_016abf68(&cf_eN_N_);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

