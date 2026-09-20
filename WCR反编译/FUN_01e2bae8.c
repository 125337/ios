// FUN_01e2bae8 @ 01e2bae8

void FUN_01e2bae8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *local_48;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR_WCRSuperFloatProfileStore_026cee48;
  if (local_20 == (cfstringStruct *)0x0) {
    local_48 = &cf___;
  }
  else {
    local_48 = local_20;
  }
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setBallGestureAction_forKey__026b1950,local_48)
  ;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

