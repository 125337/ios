// FUN_01998fdc @ 01998fdc

void FUN_01998fdc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  byte local_28;
  byte local_21;
  long local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_pasteOneItemFrom_to_mode_replace_026ba670,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48),1);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_21 = (byte)uVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  local_58 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  local_50 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = *(undefined8 *)(param_1 + 0x50);
  local_30 = *(undefined8 *)(param_1 + 0x58);
  local_28 = local_21 & 1;
  local_48 = uVar1;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  return;
}

