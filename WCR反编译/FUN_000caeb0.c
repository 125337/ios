// FUN_000caeb0 @ 000caeb0

void FUN_000caeb0(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *local_b8;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028c8291);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar5 = (ulong)pcVar1 & 0xffffffff;
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    pcVar1 = local_28;
    uVar5 = 0;
    if (pcVar3 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_38 = 1;
      goto LAB_000cb1b0;
    }
  }
  pcVar1 = local_20;
  FUN_000cb204(uVar5);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_cellView_0269e7e8);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cellView_0269e7e8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_000cb204();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar1 != (cfstringStruct *)0x0) {
    _objc_setAssociatedObject(pcVar1,local_20,&DAT_028c8291,local_40,3);
  }
  if (local_40 == (cfstringStruct *)0x0) {
    local_b8 = &cf___;
  }
  else {
    local_b8 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_b8;
  local_38 = 1;
  _objc_storeStrong(&local_40,0);
LAB_000cb1b0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

