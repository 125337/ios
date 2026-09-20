// FUN_0157fb3c @ 0157fb3c

void FUN_0157fb3c(undefined8 param_1,undefined8 param_2)

{
  u_int32_t uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0),
     uVar3 == 0)) {
    uVar3 = local_28;
    FUN_01551c04(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
    uVar1 = _arc4random_uniform((u_int32_t)uVar3);
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_01551c04(0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

