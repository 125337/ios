// FUN_006668c8 @ 006668c8

void FUN_006668c8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_98;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  undefined4 local_1c;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_1c = 1;
  }
  else {
    pcVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cbc80);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)pcVar1 & 1) == 0) ||
       (pcVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
       pcVar1 == (cfstringStruct *)0x0)) {
      local_1c = 1;
    }
    else {
      pcVar1 = local_18;
      FUN_00662d08();
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = pcVar1;
      FUN_00663124(pcVar1,local_18);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_98 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_98;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028cbc81);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar1 & 1) == 0) {
        _objc_storeStrong(&local_50,&cf___);
      }
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (((pcVar1 == (cfstringStruct *)0x0) ||
          (pcVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
          pcVar1 == (cfstringStruct *)0x0)) ||
         (pcVar1 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_48),
         ((ulong)pcVar1 & 1) == 0)) {
        FUN_00663f60(local_18);
        local_1c = 1;
      }
      else {
        pcVar1 = local_28;
        FUN_00666cb0();
        if (((ulong)pcVar1 & 1) == 0) {
          FUN_00663f60(local_18);
        }
        local_1c = 0;
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(local_40,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

