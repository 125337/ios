// FUN_00611f24 @ 00611f24

/* WARNING: Removing unreachable block (ram,0x00612160) */

byte FUN_00611f24(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_78;
  undefined1 *local_48;
  undefined1 *local_30;
  undefined4 local_24;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined1 *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (undefined1 *)0x0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      local_48 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_78;
    if (puVar2 == (undefined1 *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_userInterfaceStyle_026cabc8);
    local_11 = puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

