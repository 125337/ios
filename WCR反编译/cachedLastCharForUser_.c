// cachedLastCharForUser: @ 00eaa26c

/* Function Stack Size: 0x18 bytes */

ID WCRefineAuthNameHelper::cachedLastCharForUser_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_00eaa404();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_3c = 1;
  }
  else {
    _os_unfair_lock_lock();
    FUN_00eaa548();
    pcVar2 = DAT_028e2930;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e2930,PTR_s_objectForKeyedSubscript__0269d098,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    _os_unfair_lock_unlock(&DAT_028e2950);
    pcVar2 = local_48;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar2 & 1) == 0) {
      local_68 = &::cf___;
    }
    else {
      local_68 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

