// FUN_0053be5c @ 0053be5c

void FUN_0053be5c(undefined *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined1 local_59;
  undefined *local_58;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  local_38 = param_1;
  if (param_1 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar3;
    while( true ) {
      local_59 = 0;
      bVar2 = false;
      uVar1 = local_40 != (undefined *)0x0;
      if ((bool)uVar1) {
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = puVar3 == (undefined *)0x0;
        local_59 = uVar1;
        local_58 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        uVar1 = local_59;
      }
      local_59 = uVar1;
      if (!bVar2) break;
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_presentingViewController_026a0db0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_40;
      local_40 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_40,0);
  }
  if (local_38 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_rootViewController_026ca820);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar3;
    while( true ) {
      puVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 == (undefined *)0x0) break;
      puVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_70;
      local_70 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_70;
    if (local_38 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((ulong)puVar3 & 1) != 0) {
        _objc_storeStrong(&local_38,local_70);
      }
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  if (local_38 != (undefined *)0x0) {
    puVar3 = PTR_WCRefineMomentsDraftListViewController_026ce738;
    _objc_alloc_init();
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_pushViewController_animated__0269d590,puVar3,1);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

