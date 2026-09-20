// FUN_00338de4 @ 00338de4

void FUN_00338de4(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_28 = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_count_0269cfe0);
    local_30 = uVar1;
    while (local_30 = local_30 - 1, -1 < (long)local_30) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_38;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_38;
        FUN_003382f8();
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_removeObjectAtIndex__0269d530,local_30);
        }
      }
      _objc_storeStrong(&local_38,0);
    }
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

