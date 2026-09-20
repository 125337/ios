// FUN_00535bb0 @ 00535bb0

void FUN_00535bb0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  uint local_dc;
  cfstringStruct *local_c8;
  cfstringStruct *local_98;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [3];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  if (local_30 == (cfstringStruct *)0x0) {
    local_28 = (cfstringStruct *)0x0;
    local_3c = 1;
  }
  else {
    if (local_38 == (cfstringStruct *)0x0) {
      local_98 = &cf___;
    }
    else {
      local_98 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_98;
    pcVar1 = local_30;
    _objc_getAssociatedObject(local_30,DAT_026f4340);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)pcVar1 & 1) == 0) {
      local_c8 = &cf___;
    }
    else {
      local_c8 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68[0] = local_c8;
    pcVar1 = local_30;
    _objc_getAssociatedObject(local_30,DAT_026f4348);
    _objc_retainAutoreleasedReturnValue();
    local_dc = 1;
    local_70 = pcVar1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar1 = local_68[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_isEqualToString__0269ccc8,local_48);
      local_dc = (uint)pcVar1 ^ 1;
    }
    if ((local_dc & 1) != 0) {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_70;
      local_70 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      _objc_setAssociatedObject(local_30,DAT_026f4348,local_70,1);
      _objc_setAssociatedObject(local_30,DAT_026f4340,local_48,3);
    }
    pcVar1 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar1;
    local_3c = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(local_68,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

