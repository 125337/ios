// FUN_00efece4 @ 00efece4

void FUN_00efece4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_b8;
  cfstringStruct *local_90;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  int local_3c;
  ulong local_38;
  long local_30;
  cfstringStruct *local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  uVar4 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mutableCopy_0269d8a0);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_38 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar4 & 1) == 0) {
    local_3c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf__wcrEnabled);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_28 == (cfstringStruct *)0x0) {
      local_90 = &cf_lQcS;
    }
    else {
      local_90 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,&cf__wcrSource);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    FUN_00eee23c();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00eeec64();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = uVar4;
    if (uVar4 == 0) {
      local_58 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_58;
    }
    FUN_00eee23c();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_b8;
    if (uVar4 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if ((uVar4 == 0) ||
       (uVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
       uVar4 == 0)) {
      local_3c = 1;
    }
    else {
      uVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_chat_);
      if ((uVar4 & 1) == 0) {
        uVar4 = local_48;
        FUN_00eeeeb8(local_48,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = local_48;
          FUN_00eef088();
          if ((uVar4 & 1) == 0) {
            local_3c = 1;
          }
          else {
            uVar4 = *(ulong *)(param_1 + 0x20);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_containsObject__0269cbb8,local_48);
            if ((uVar4 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_48,&cf_action);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,&cf_title);
              (*(code *)PTR__objc_msgSend_02578628)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_48);
              (*(code *)PTR__objc_msgSend_02578628)
                        (*(undefined8 *)(param_1 + 0x28),PTR_s_addObject__0269d180,local_38);
              local_3c = 0;
            }
            else {
              local_3c = 1;
            }
          }
        }
        else {
          local_3c = 1;
        }
      }
      else {
        local_3c = 1;
      }
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  if (local_3c == 0) {
    local_3c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

