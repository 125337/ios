// FUN_006df26c @ 006df26c

void FUN_006df26c(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *local_28;
  undefined8 local_20;
  undefined1 *local_18;
  
  local_28 = (undefined1 *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  FUN_006e0078();
  if (((param_1 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) &&
      (FUN_006e0174(0), ((ulong)param_1 & 1) != 0)) &&
     (puVar2 = local_18, FUN_006e0c70(), puVar2 != (undefined1 *)0x0)) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_nzzevgSU_);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_28 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if (local_28 == (undefined1 *)0x0) {
    puVar2 = local_18;
    (*DAT_028cc2f0)(local_18,local_20);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

