// FUN_006f1bf8 @ 006f1bf8

void FUN_006f1bf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined **local_70 [3];
  byte local_55;
  int local_54;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = param_1 + 0x38;
  local_48 = param_1;
  _objc_loadWeakRetained();
  local_50 = lVar1;
  if (lVar1 == 0) {
    local_54 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_55 = (byte)puVar3;
    ppuVar6 = &local_a8;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_006f1f5c;
    local_90 = &DAT_0257eff8;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    local_80 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_40;
    local_88 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = uVar4;
    _objc_retainBlock();
    local_70[0] = ppuVar6;
    if ((local_55 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_wcr_exportWatermarkFromAsset_aud_026a70b8,local_30,local_38,
                 *(undefined8 *)(param_1 + 0x28),ppuVar6);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_wcr_legacyExportWatermarkFromAss_026a70b0,local_30,local_38,
                 *(undefined8 *)(param_1 + 0x28),ppuVar6);
    }
    _objc_storeStrong(local_70);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50,0);
  if (local_54 == 0) {
    local_54 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

