// FUN_0061a9b4 @ 0061a9b4

ulong FUN_0061a9b4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_80;
  ulong local_38 [3];
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70),
     (uVar1 & 1) == 0)) {
    uVar1 = local_20;
    FUN_0061b3c8(local_20,&cf_sections);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_38[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_80 = 0;
    }
    else {
      local_80 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_count_0269cfe0);
    }
    local_18 = local_80;
    _objc_storeStrong(local_38,0);
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getSectionCount_026a0b70);
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

