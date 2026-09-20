// FUN_007a8c8c @ 007a8c8c

void FUN_007a8c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_4);
  uVar1 = (uint)puVar2;
  FUN_007a8e48();
  if (((((uVar1 & 1) != 0) && (local_28 != 0)) &&
      (uVar3 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_isSightCamera_026a8128),
      (uVar3 & 1) != 0)) &&
     ((uVar3 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setIsSightCamera__026a8130),
      (uVar3 & 1) != 0 &&
      (uVar3 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isSightCamera_026a8128), (uVar3 & 1) != 0
      )))) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setIsSightCamera__026a8130,0);
  }
  uVar4 = local_18;
  (*DAT_028ccb68)(local_18,local_20,local_28,local_30);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

