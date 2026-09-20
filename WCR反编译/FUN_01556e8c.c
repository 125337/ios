// FUN_01556e8c @ 01556e8c

void FUN_01556e8c(undefined8 param_1)

{
  undefined1 uVar1;
  cfstringStruct *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  dispatch_time_t dVar7;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined **local_50;
  undefined *local_48;
  byte local_39;
  undefined4 local_38;
  undefined1 local_31;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar5 = local_28;
  local_31 = 0;
  bVar3 = true;
  uVar1 = local_28 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = puVar5 == puVar4;
    local_31 = uVar1;
    local_30 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (bVar3) {
    local_38 = 1;
  }
  else {
    puVar5 = PTR_WCRefineTopBarProfileCardPresenter_026ce228;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
               PTR_s_refreshGroupGenderDisplayForCont_026a3a70,local_28);
    local_39 = (byte)puVar5;
    pcVar2 = &cf__fe____R;
    if (((ulong)puVar5 & 1) == 0) {
      pcVar2 = &cf_fe1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar2);
    if ((local_39 & 1) == 0) {
      local_38 = 1;
    }
    else {
      FUN_01555510();
      puVar4 = local_28;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &local_80;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_0158a93c;
      local_68 = &DAT_0257a7a0;
      local_48 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_28;
      local_60 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = puVar5;
      _objc_retainBlock();
      local_50 = ppuVar6;
      dVar7 = _dispatch_time(0,1600000000);
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      puVar4 = puVar5;
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar7,puVar4,local_50);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      dVar7 = _dispatch_time(0,4000000000);
      _objc_retainAutoreleaseReturnValue(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar7,puVar5,local_50);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_48,0);
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

