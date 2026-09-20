// FUN_0018f434 @ 0018f434

void FUN_0018f434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_integerValue_026ca750);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
  FUN_0018c110(uVar3,uVar1,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

