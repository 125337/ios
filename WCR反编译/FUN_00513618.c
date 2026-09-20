// FUN_00513618 @ 00513618

byte FUN_00513618(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = false;
  }
  else {
    puVar1 = PTR_WCRefineMomentsMonitor_026ce718;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_isDataItemFromCache__026a4718,local_20);
    if ((((ulong)puVar1 & 1) == 0) &&
       (puVar1 = PTR_WCRefineMomentsMonitor_026ce718,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_isDataItemMarkedDeleted__026a4720,
                  local_20), ((ulong)puVar1 & 1) == 0)) {
      puVar1 = PTR_WCRefineMomentsMonitor_026ce718;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_11 = true;
      if ((puVar2 != (undefined1 *)((long)&MACH_HEADER.magic + 3)) &&
         (local_11 = true, (dword *)puVar2 != &MACH_HEADER.cputype)) {
        local_11 = puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
      }
    }
    else {
      local_11 = true;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

