// FUN_00664010 @ 00664010

void FUN_00664010(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_78;
  cfstringStruct *local_40 [3];
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
    goto LAB_006641cc;
  }
  FUN_006668c8(local_20);
  pcVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028cbc80);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar1 & 1) == 0) {
LAB_00664190:
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar1 = local_40[0];
    FUN_00666cb0();
    if (((ulong)pcVar1 & 1) == 0) goto LAB_00664190;
    if (local_40[0] == (cfstringStruct *)0x0) {
      local_78 = &cf___;
    }
    else {
      local_78 = local_40[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
  }
  local_24 = 1;
  _objc_storeStrong(local_40,0);
LAB_006641cc:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

