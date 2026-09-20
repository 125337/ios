// FUN_00510b4c @ 00510b4c

void FUN_00510b4c(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  long local_68 [3];
  long local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = param_1 + 0x20;
  local_38 = param_1;
  local_30 = param_3;
  local_2c = param_2;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_40 = lVar2;
  if (lVar2 == 0) {
    local_44 = 1;
  }
  else {
    FUN_00511318();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_00510f60();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    (*(code *)PTR__objc_release_02578630)();
    lVar3 = local_50;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    FUN_0050e638();
    _objc_retainAutoreleasedReturnValue();
    FUN_005117f8(lVar3,uVar5);
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    lVar2 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_count_0269cfe0);
    puVar4 = PTR_WCRefineHelper_026ce000;
    if (lVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eVQlgSd_OvR_);
      local_44 = 1;
    }
    else if (*(long *)(param_1 + 0x28) == 3) {
      FUN_00511dc8();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_40;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_005123d4;
      local_88 = &DAT_0257d8c8;
      (*(code *)PTR__objc_retain_02578638)();
      lVar3 = local_68[0];
      local_80 = lVar1;
      local_70 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4058000000000000,puVar4,PTR_s_presentPageSheetSingleLineInputW_026a46e0,&cf___,
                 &cf___VQ_gvR_ST,lVar2,&local_a0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      local_44 = 1;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_80,0);
    }
    else {
      FUN_0051267c(local_40,*(undefined8 *)(param_1 + 0x28),local_68[0],0);
      local_44 = 0;
    }
    _objc_storeStrong(local_68);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

