// FUN_006a7ef8 @ 006a7ef8

void FUN_006a7ef8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = &DAT_028cbe30;
  _objc_loadWeakRetained();
  local_20 = puVar1;
  FUN_006a8bf8();
  puVar2 = local_20;
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = &DAT_028cbe38;
    _objc_loadWeakRetained();
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      local_18 = (undefined *)0x0;
      local_24 = 1;
    }
    else {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar2 = local_38;
      FUN_006a8bf8();
      puVar1 = local_38;
      if (((ulong)puVar2 & 1) == 0) {
        puVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        FUN_006a8c7c();
        _objc_retainAutoreleasedReturnValue();
        local_18 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar1;
      }
      local_24 = 1;
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_24 = 1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

