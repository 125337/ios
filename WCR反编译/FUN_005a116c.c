// FUN_005a116c @ 005a116c

void FUN_005a116c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  undefined *local_38;
  undefined4 local_30;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_18;
  FUN_005bfbc8();
  if ((uVar2 & 1) == 0) {
    if (local_20 != 0) {
      (**(code **)(local_20 + 0x10))(local_20,1);
    }
    local_30 = 1;
  }
  else {
    puVar3 = PTR_WCRefineMomentsMediaDownloader_026ce7a8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_initWithDataItem_cellView__026a56d0,local_18,0);
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setSilent__026a5988,1);
    FUN_005bfde4(local_38);
    lVar1 = local_20;
    puVar3 = local_38;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_005c0014;
    local_48 = &DAT_0257b208;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_startDownloadWithCompletion__026a56d8,&local_60);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_30 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

