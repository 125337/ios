// invalidateFolderStatsCacheForPath: @ 015b1fdc

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackStore::invalidateFolderStatsCacheForPath_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  uVar1 = DAT_028e3ac8;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    FUN_015b2118(local_28);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = DAT_028e3ad8;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    FUN_015b229c(local_28);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

