// FUN_018a46a0 @ 018a46a0

void FUN_018a46a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WYt_);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  _objc_initWeak(auStack_30,*(undefined8 *)(param_1 + 0x20));
  puVar1 = local_28;
  puVar2 = PTR_WCRefineChatRoomMuteHelper_026ce2f0;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_018a4850;
  local_50 = &DAT_02589ca8;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar3;
  _objc_copyWeak(auStack_38,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_applyAction_toUserNames_completi_026b76b0,uVar4,uVar5,&local_68);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

