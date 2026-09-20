// FUN_0215d518 @ 0215d518

void FUN_0215d518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = param_1;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_28;
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mutableCopy_0269d8a0);
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_customAvatarPath);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_50;
        FUN_0215d7e4();
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_removeObjectForKey__0269d700,&cf_customAvatarPath);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,
                     &cf_customAvatarPath);
        }
        _objc_storeStrong(&local_58,0);
      }
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
      if (uVar3 != 0) {
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,uVar3
                   ,local_20);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      local_3c = 0;
      goto LAB_0215d7bc;
    }
  }
  local_3c = 1;
LAB_0215d7bc:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

