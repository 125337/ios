// systemGroupWithId: @ 01ab5324

/* Function Stack Size: 0x18 bytes */

ID WCRGroupListViewController::systemGroupWithId_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_40;
  undefined1 *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_kind_026a27e8);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_40 = local_30;
  }
  else {
    local_40 = (undefined1 *)0x0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_40;
}

