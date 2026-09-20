// FUN_00f4d350 @ 00f4d350

void FUN_00f4d350(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_38;
  byte local_30;
  byte local_29;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_loadOAImageDataWithUrl_base64__026ac498,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_importOAImageDataToLocalReposito_026ac490,uVar1)
  ;
  puVar3 = PTR___dispatch_main_q_02578680;
  local_29 = (byte)uVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  local_30 = local_29 & 1;
  _dispatch_async(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

