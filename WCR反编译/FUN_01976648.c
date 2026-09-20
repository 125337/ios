// FUN_01976648 @ 01976648

void FUN_01976648(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_60;
  undefined *local_58;
  ulong local_50;
  cfstringStruct *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  ulong local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    _objc_storeStrong(&local_50,&cf___);
  }
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
  local_20 = local_50;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_dataWithJSONObject_options_error_026a64a8,puVar3,0,0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_60 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
  pcVar5 = local_60;
  if (pcVar4 < (cfstringStruct *)((long)&MACH_HEADER.magic + 2)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
  }
  else {
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    local_40 = (undefined1 *)((long)&pcVar4[-1].field3_0x18 + 6);
    local_38 = 1;
    local_30 = 1;
    local_28 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_substringWithRange__0269d138,1,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar5;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_48);
  return;
}

