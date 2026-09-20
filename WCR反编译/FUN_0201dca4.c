// FUN_0201dca4 @ 0201dca4

void FUN_0201dca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong local_f8;
  ulong local_d8;
  ulong local_88;
  ulong local_80;
  undefined4 local_74;
  long local_70;
  undefined8 local_68;
  ulong local_60;
  ulong local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_1;
  _objc_storeStrong(&local_58);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_3);
  uVar2 = local_58;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_70 = param_1;
  local_68 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar3 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
     uVar2 = local_60, uVar3 == 0)) {
    local_74 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      local_74 = 1;
    }
    else {
      uVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_60;
      local_80 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_right);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_80;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_48 = &cf_left;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_88 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar2 & 1) == 0) {
        local_d8 = 0;
      }
      else {
        local_d8 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_integerValue_026ca750);
      }
      FUN_0201d990(local_d8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithInteger__0269e080,local_d8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_88;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_40 = &cf_right;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar2 & 1) == 0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_integerValue_026ca750);
      }
      FUN_0201d990(local_f8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithInteger__0269e080,local_f8);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,
                 local_58);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      local_74 = 0;
    }
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

