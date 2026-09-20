// FUN_0063b8ac @ 0063b8ac

void FUN_0063b8ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_64;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_0063d7a8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_64 = 1;
  if (lVar1 != 0) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_0063d4ec();
    local_64 = (uint)lVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  if ((local_64 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_18 = local_28;
    if (((ulong)puVar4 & 1) == 0) {
      local_18 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

