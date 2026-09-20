// scheduleThumbnailRebuild @ 0198d24c

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::scheduleThumbnailRebuild(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  dispatch_time_t dVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_thumbRebuildScheduled_026ba520);
  if ((param_1 & 1) == 0) {
    puVar1 = PTR_WCRFileManagerState_026cf1c8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar2 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setThumbRebuildScheduled__026ba528,1);
      _objc_initWeak(auStack_28,local_18);
      dVar3 = _dispatch_time(0,250000000);
      puVar1 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_50 = PTR___NSConcreteStackBlock_02578660;
      local_48 = 0xc2000000;
      local_44 = 0;
      local_40 = FUN_0198d3d8;
      local_38 = &DAT_0257be28;
      _objc_copyWeak(auStack_30,auStack_28);
      _dispatch_after(dVar3,puVar1,&local_50);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
    }
  }
  return;
}

