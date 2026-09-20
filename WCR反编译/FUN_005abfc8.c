// FUN_005abfc8 @ 005abfc8

void FUN_005abfc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint local_b4;
  ulong local_78;
  ulong local_48;
  ulong local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  pcVar2 = "WCUploadTask";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_78 = 0;
  }
  else {
    local_78 = local_28;
    FUN_0059d260(local_28,&cf_dataItem);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  uVar3 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028cb638);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar3 = local_28;
  if ((((ulong)puVar6 & 1) != 0) || (local_b4 = 0, (uVar4 & 1) != 0)) {
    pcVar2 = "WCUploadTask";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
    local_b4 = (uint)uVar3;
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if ((local_b4 & 1) != 0) {
    FUN_005c8b90(local_28,0,(uint)uVar4 & 1);
    _objc_setAssociatedObject(local_30,&DAT_028cb638,0,1);
  }
  (*DAT_028cb698)(local_18,local_20,local_28);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

