// FUN_01f6f0c0 @ 01f6f0c0

void FUN_01f6f0c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_28 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_presentFolderPickerFrom_completi_026c9868,uVar4)
  ;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

