// FUN_0061abe0 @ 0061abe0

void FUN_0061abe0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50 [4];
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if (local_20 == 0) {
    local_18 = 0;
    local_2c = 1;
    goto LAB_0061ae4c;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionAt__026a0a78,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_2c = 1;
    local_18 = uVar1;
    goto LAB_0061ae4c;
  }
  uVar2 = local_20;
  FUN_0061b3c8(local_20,&cf_sections);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar1 = local_28;
  if ((uVar2 & 1) == 0) {
LAB_0061ae2c:
    local_18 = 0;
  }
  else {
    uVar2 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_count_0269cfe0);
    if (uVar2 <= uVar1) goto LAB_0061ae2c;
    uVar1 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  local_2c = 1;
  _objc_storeStrong(local_50,0);
LAB_0061ae4c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

