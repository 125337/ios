// FUN_00f5061c @ 00f5061c

void FUN_00f5061c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_loadOAImageDataWithUrl_base64__026ac498,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_28 = uVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar1;
  local_30 = *(undefined8 *)(param_1 + 0x38);
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_40);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_28,0);
  return;
}

