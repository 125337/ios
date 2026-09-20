// FUN_004541e0 @ 004541e0

void FUN_004541e0(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48 [4];
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined *)0x0;
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_delegate);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if ((local_28 != (undefined *)0x0) &&
     (puVar3 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_GetCurrentViewController_0269d2d0)
     , ((ulong)puVar3 & 1) != 0)) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_GetCurrentViewController_0269d2d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_48[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    puVar3 = local_48[0];
    bVar1 = ((ulong)puVar2 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar3;
    }
    _objc_storeStrong(local_48,0);
    if (bVar1) goto LAB_00454428;
  }
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar3;
LAB_00454428:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

