// FUN_00065bf0 @ 00065bf0

void FUN_00065bf0(byte param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined *local_58 [3];
  undefined *local_40;
  byte local_31;
  undefined8 local_30;
  byte local_21;
  
  local_30 = 0;
  local_21 = param_1;
  _objc_storeStrong(&local_30);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_31 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  if ((local_21 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_autoParseLinkContactEnabledIDs_0269dbe8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    bVar1 = local_31;
    puVar4 = local_40;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_00066598;
    local_b0 = &DAT_02579990;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = puVar4;
    FUN_00066250(puVar3,bVar1 & 1,uVar2,&local_c8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_31 & 1) == 0) {
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_autoParseLinkContactOutgoingAuto_0269dbd8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      puVar3 = local_40;
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_00066620;
      local_d8 = &DAT_02579990;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = puVar3;
      FUN_00066250(puVar4,0,uVar2,&local_f0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_d0,0);
    }
    _objc_storeStrong(&local_a8,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_autoParseLinkGroupEnabledIDs_0269dbe0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    bVar1 = local_31;
    puVar4 = local_40;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00066488;
    local_60 = &DAT_02579990;
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = puVar4;
    FUN_00066250(puVar3,bVar1 & 1,uVar2,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_31 & 1) == 0) {
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_autoParseLinkGroupOutgoingAutoID_0269dbd0);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      puVar3 = local_40;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_00066510;
      local_88 = &DAT_02579990;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = puVar3;
      FUN_00066250(puVar4,0,uVar2,&local_a0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return;
}

