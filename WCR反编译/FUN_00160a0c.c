// FUN_00160a0c @ 00160a0c

void FUN_00160a0c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_c0;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  local_28 = param_2;
  if ((local_20 != 0) && (param_2 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_28);
      if ((uVar2 & 1) == 0) {
        local_18 = 0;
        local_38 = 1;
      }
      else {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_40 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar2 = local_40;
        if ((uVar3 & 1) == 0) {
          local_18 = 0;
          local_38 = 1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_48 = uVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
          if (uVar2 == 0) {
            local_c0 = 0;
          }
          else {
            local_c0 = local_48;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_c0;
          local_38 = 1;
          _objc_storeStrong(&local_48,0);
        }
        _objc_storeStrong(&local_40,0);
      }
      goto LAB_00160d18;
    }
  }
  local_18 = 0;
  local_38 = 1;
LAB_00160d18:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

