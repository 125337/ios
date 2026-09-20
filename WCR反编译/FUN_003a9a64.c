// FUN_003a9a64 @ 003a9a64

void FUN_003a9a64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_b8;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined1 auStack_58 [15];
  byte local_49;
  undefined *local_48;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineGroupManager_026ce2b8;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_groupForId__026a27e0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_39 = 0;
  local_49 = 0;
  if (puVar3 == (undefined *)0x0) {
    local_b8 = *(undefined **)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_b8;
  }
  else {
    local_b8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_b8;
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_003a9e14;
  local_68 = &DAT_0257c948;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = uVar2;
  _objc_copyWeak(auStack_58,param_1 + 0x28);
  FUN_003a9d68(puVar1,&cf_S_u_SMO___,&local_80);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

