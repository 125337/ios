// FUN_01ad4648 @ 01ad4648

void FUN_01ad4648(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  
  puVar2 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_class_0269cd60);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  bVar1 = *(long *)(param_1 + 0x20) == DAT_028e4550;
  _objc_sync_exit(!bVar1,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (bVar1) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

