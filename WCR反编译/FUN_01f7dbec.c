// FUN_01f7dbec @ 01f7dbec

void FUN_01f7dbec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_38 = 0;
  local_48 = 0;
  puVar1 = PTR_WCRefineVoicePackStore_026cea20;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_exportDirectoryAsZip_zipName_err_026c9a98,
             *(undefined8 *)(param_1 + 0x20),&cf_W,&local_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38,local_48);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_40 = puVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_40;
  local_68 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_38;
  local_60 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar3;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

