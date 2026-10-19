// ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke @0x1e1d0

void ___53__WCMVideoController_prepareVideoPaths_index_offset___block_invoke(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR___dispatch_main_q_00110528;
  local_20 = param_1;
  local_18 = param_1;
  _objc_retainAutoreleaseReturnValue();
  uVar2 = _objc_retainAutoreleasedReturnValue(puVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  local_50 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  local_48 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_28 = *(undefined8 *)(param_1 + 0x48);
  local_40 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x30));
  _dispatch_async(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_destroyWeak(auStack_38);
  return;
}

