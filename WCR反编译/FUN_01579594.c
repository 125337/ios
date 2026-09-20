// FUN_01579594 @ 01579594

void FUN_01579594(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = param_1;
  FUN_015794bc();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_sync_enter();
  FUN_015794bc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_sync_exit(uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar3 & 1) != 0) {
    _WCRPatSendBypassConfirmBegin();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_sendPatToUser_inGroup_scene__026a63d8,
               *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x40));
    _WCRPatSendBypassConfirmEnd();
    lVar5 = *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_count_0269cfe0);
    if (lVar5 == lVar4 + -1) {
      FUN_015794bc(0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      _objc_sync_enter();
      FUN_015794bc();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar5);
      _objc_sync_exit(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar4);
    }
  }
  return;
}

