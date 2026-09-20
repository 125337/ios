// FUN_002fa5e0 @ 002fa5e0

/* WARNING: Removing unreachable block (ram,0x002fa72c) */

byte FUN_002fa5e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_48;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined1 *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    local_30 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_48;
  if (puVar1 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInterfaceStyle_026cabc8);
  local_11 = puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

