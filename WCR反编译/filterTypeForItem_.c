// filterTypeForItem: @ 011343cc

/* Function Stack Size: 0x18 bytes */

ID WCRefineQuickReplyStore::filterTypeForItem_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_text);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_invite);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_repository)
      ;
      if (((ulong)pcVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf_other;
        local_4c = 1;
      }
      else {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_repoType);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar1;
        FUN_01130f58();
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
        local_18 = &DAT_028e35a0;
        local_20 = 0;
        _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025859e0);
        if (*local_18 + 1 != 0) {
          _dispatch_once(*local_18 + 1,local_18,local_20);
        }
        _objc_storeStrong(&local_20,0);
        uVar3 = DAT_028e3598;
        (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3598,PTR_s_containsObject__0269cbb8,local_58);
        pcVar1 = local_58;
        if ((uVar3 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf_other;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
        }
        local_4c = 1;
        _objc_storeStrong(&local_58,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_other;
      local_4c = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_text;
    local_4c = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

