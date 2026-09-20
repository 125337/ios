// FUN_0085a28c @ 0085a28c

/* WARNING: Removing unreachable block (ram,0x0085a440) */

byte FUN_0085a28c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *local_28;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined1 *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (undefined1 *)0x0;
  if (local_20 != (undefined1 *)0x0) {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    local_28 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (local_28 == (undefined1 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    local_28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInterfaceStyle_026cabc8);
  local_11 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

