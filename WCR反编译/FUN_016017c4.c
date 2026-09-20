// FUN_016017c4 @ 016017c4

void FUN_016017c4(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if ((*(byte *)(param_1 + 0x41) & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    bVar1 = *(byte *)(param_1 + 0x42);
    lVar3 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_quickChatBallFollowAvatarSeconds_026b1478);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_quickChatBallAvatarTapAction_026b1448);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    FUN_01601904(uVar4,*(undefined8 *)(param_1 + 0x38));
    _WCRSuperFloatQuickChatIncoming((double)lVar3,uVar5,bVar1 & 1,uVar2,uVar4);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setNeedsSessionListRefresh_026b17b8);
  return;
}

