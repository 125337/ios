// FUN_0168679c @ 0168679c

void FUN_0168679c(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_74;
  undefined *local_40;
  uint local_38;
  undefined1 local_31;
  undefined *local_30;
  byte local_21;
  undefined *local_20;
  undefined *local_18;
  
  if ((DAT_028e3d2a & 1) == 0) {
    return;
  }
  puVar3 = &DAT_028e3d20;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_18 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isViewLoaded_0269cde0);
    local_21 = 0;
    local_31 = 0;
    bVar2 = false;
    uVar1 = ((ulong)puVar3 & 1) != 0;
    if ((bool)uVar1) {
      puVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_21 = 1;
      local_20 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = puVar3 != (undefined *)0x0;
      local_31 = uVar1;
      local_30 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar1 = local_31;
    }
    local_31 = uVar1;
    if ((local_21 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_20);
    }
    if (bVar2) {
      local_38 = 1;
      goto LAB_01686aac;
    }
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar3 != (undefined *)0x0) {
      local_38 = 1;
      goto LAB_01686aac;
    }
    puVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_74 = 0;
    local_40 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_74 = (uint)puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_38 = (uint)((local_74 & 1) != 0);
    _objc_storeStrong(&local_40,0);
    if (local_38 != 0) goto LAB_01686aac;
  }
  DAT_028e3d2a = 0;
  _objc_storeWeak(&DAT_028e3d20,0);
  FUN_01685990();
  local_38 = 0;
LAB_01686aac:
  _objc_storeStrong(&local_18,0);
  return;
}

