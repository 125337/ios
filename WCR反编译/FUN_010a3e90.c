// FUN_010a3e90 @ 010a3e90

void FUN_010a3e90(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_010a2838();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  uVar1 = local_28;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_2c = 1;
    goto LAB_010a4094;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_010a2838();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
LAB_010a4008:
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_type)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_010a2838();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_010a40c0();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    uVar1 = local_38;
    if (0x4f < uVar2) goto LAB_010a4008;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  local_2c = 1;
  _objc_storeStrong(&local_38,0);
LAB_010a4094:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

