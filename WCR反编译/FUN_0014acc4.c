// FUN_0014acc4 @ 0014acc4

void FUN_0014acc4(undefined8 param_1)

{
  ulong uVar1;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c87e0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  if (uVar1 == 0) {
    local_30 = 1;
    goto LAB_0014ae98;
  }
  uVar1 = local_18;
  FUN_0014aee8();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  if (uVar1 == 0) {
LAB_0014adec:
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_removeFromSuperview_026ca800);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setInputToolView__0269f1b0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setAttachmentController__0269f1b8,0);
    _objc_storeStrong(&DAT_028c8690,local_20);
    _objc_setAssociatedObject(local_18,&DAT_028c87e0,0,1);
    local_30 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isMovingFromParentViewController_0269f458);
    if ((uVar1 & 1) != 0) goto LAB_0014adec;
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isBeingDismissed_0269f460);
    if ((uVar1 & 1) != 0) goto LAB_0014adec;
    local_30 = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_0014ae98:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

