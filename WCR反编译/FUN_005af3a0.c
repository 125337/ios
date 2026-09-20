// FUN_005af3a0 @ 005af3a0

void FUN_005af3a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined *local_48 [3];
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cb782);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_cancelDownload_026a5698);
    _objc_setAssociatedObject(local_18,&DAT_028cb782,0,1);
  }
  puVar3 = PTR_WCRefineMomentsMediaDownloader_026ce7a8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_initWithDataItem_cellView__026a56d0,local_28,local_18);
  local_48[0] = puVar3;
  _objc_setAssociatedObject(local_18,&DAT_028cb782,puVar3,1);
  _objc_initWeak(auStack_50,local_18);
  puVar3 = local_48[0];
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_005cf2f8;
  local_68 = &DAT_0257e348;
  _objc_copyWeak(auStack_58,auStack_50);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_startDownloadWithCompletion__026a56d8,&local_80);
  _objc_storeStrong(&local_60);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

