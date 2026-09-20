// FUN_01556c38 @ 01556c38

void FUN_01556c38(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_01556d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRInvitedMemberListViewController_026ced88;
  local_28 = uVar1;
  _objc_alloc_init();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_setGroupContact__026b05a0,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_01528d34();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setRoomId__026b05a8);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setEntries__026a2ba8,local_28);
  FUN_01556938(local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

