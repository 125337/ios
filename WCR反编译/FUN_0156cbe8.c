// FUN_0156cbe8 @ 0156cbe8

void FUN_0156cbe8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = &DAT_028e38f0;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  puVar2 = local_20;
  if (((ulong)puVar1 & 1) == 0) {
    FUN_01563370();
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

