// FUN_000668e8 @ 000668e8

void FUN_000668e8(byte param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined *puVar4;
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
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_31 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar4;
  if ((local_21 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_autoParseLinkContactOutgoingAuto_0269dbd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    bVar2 = local_31;
    puVar1 = local_40;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_00066c60;
    local_88 = &DAT_02579990;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = puVar1;
    FUN_00066250(puVar4,bVar2 & 1,uVar3,&local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_80,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_autoParseLinkGroupOutgoingAutoID_0269dbd0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    bVar2 = local_31;
    puVar1 = local_40;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00066bd8;
    local_60 = &DAT_02579990;
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = puVar1;
    FUN_00066250(puVar4,bVar2 & 1,uVar3,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return;
}

