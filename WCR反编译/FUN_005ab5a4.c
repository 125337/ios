// FUN_005ab5a4 @ 005ab5a4

void FUN_005ab5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_48;
  uint local_3c;
  byte local_35;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cb658)(local_18,local_20,local_28);
  uVar3 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cb651);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_35 = (byte)uVar4;
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar2 = 0;
  if (((ulong)puVar6 & 1) == 0) {
    bVar2 = local_35 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  bVar1 = (bVar2 & 1) == 0;
  if (bVar1) {
    uVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cb650);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    FUN_005c8b90(local_28,uVar3,local_35 & 1);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

