// FUN_00034bdc @ 00034bdc

void FUN_00034bdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *local_28 [3];
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar2 != (undefined *)0x0) {
      pcVar3 = "NewSyncService";
      _objc_getClass();
      FUN_000323ec();
      _objc_retainAutoreleasedReturnValue();
      local_28[0] = pcVar3;
      if (pcVar3 != (char *)0x0) {
        pcVar4 = &cf_BackGroundFetchToSync;
        _NSSelectorFromString();
        if ((pcVar4 == (cfstringStruct *)0x0) ||
           (pcVar3 = local_28[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_28[0],PTR_s_respondsToSelector__026ca818,pcVar4),
           ((ulong)pcVar3 & 1) == 0)) {
          pcVar4 = &cf_NotifyToSync;
          _NSSelectorFromString();
          if ((pcVar4 != (cfstringStruct *)0x0) &&
             (pcVar3 = local_28[0],
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_28[0],PTR_s_respondsToSelector__026ca818,pcVar4),
             ((ulong)pcVar3 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28[0],pcVar4);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_28[0],pcVar4);
        }
      }
      _objc_storeStrong(local_28,0);
    }
  }
  return;
}

