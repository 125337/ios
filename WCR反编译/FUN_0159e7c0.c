// FUN_0159e7c0 @ 0159e7c0

void FUN_0159e7c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineRemoteUpdateManager_026ce600;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_0159e900;
  local_38 = &DAT_02586da8;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_28 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_postEncryptedAction_payload_comp_026b0ab8,&cf_voice_catalog,uVar4,
             &local_50);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

