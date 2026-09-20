// FUN_01abfe70 @ 01abfe70

void FUN_01abfe70(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineChatRoomPicker_026cef60;
  lVar2 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_members_0269ea98);
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01abffdc;
  local_38 = &DAT_025887c8;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentFromViewController_title__026ab898,lVar2,&cf_mR_J,uVar3,&local_50);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_28);
  return;
}

