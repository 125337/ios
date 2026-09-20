// FUN_019993d0 @ 019993d0

void FUN_019993d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte local_30;
  byte local_29;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_uniqueDestinationForPath__026ba378,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_pasteOneItemFrom_to_mode_replace_026ba670,*(undefined8 *)(param_1 + 0x30),
             uVar1,*(undefined8 *)(param_1 + 0x48),0);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_29 = (byte)uVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_60 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  local_58 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = *(undefined8 *)(param_1 + 0x50);
  local_38 = *(undefined8 *)(param_1 + 0x58);
  local_30 = local_29 & 1;
  local_50 = uVar1;
  _dispatch_async(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_28,0);
  return;
}

