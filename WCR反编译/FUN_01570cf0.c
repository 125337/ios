// FUN_01570cf0 @ 01570cf0

void FUN_01570cf0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_48;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = ((ulong)puVar3 & 1) == 0;
  if (bVar1) {
    local_48 = (undefined *)0x0;
  }
  else {
    local_48 = local_20;
    _objc_getAssociatedObject(local_20,DAT_028c5f78);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_48;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  puVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  puVar2 = local_28;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = &DAT_028e3910;
    _objc_loadWeakRetained();
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_18 = (undefined *)((ulong)puVar4 & 0xffffffff);
    if (((ulong)puVar4 & 1) == 0) {
      FUN_01565438();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = &DAT_028e3910;
      _objc_loadWeakRetained();
      local_18 = puVar3;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

