// FUN_003aa17c @ 003aa17c

void FUN_003aa17c(long param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a8;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined1 auStack_48 [15];
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineGroupManager_026ce2b8;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_groupForId__026a27e0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_detailTemplate_026a2dc0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_39 = false;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_a8 = &cf__N__T;
  }
  else {
    local_a8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_detailTemplate_026a2dc0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_a8;
  }
  local_39 = pcVar3 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_a8;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_003aa7d8;
  local_58 = &DAT_0257c948;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar2;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  FUN_003aa428(&cf_9el,&cf__SMO___,pcVar1,0x40,&local_70);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

