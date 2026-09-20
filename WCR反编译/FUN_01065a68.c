// FUN_01065a68 @ 01065a68

void FUN_01065a68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_30 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_40 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = *(undefined8 *)(param_1 + 0x40);
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_fetchInstagramOEmbedForURL_compl_026ae108,uVar4)
  ;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

