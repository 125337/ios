// FUN_0085f0b0 @ 0085f0b0

void FUN_0085f0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_5;
  _objc_storeStrong(&local_30);
  lVar3 = local_30;
  local_38 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar3;
  if ((lVar3 != 0) && (lVar1 = lVar3 - *(long *)(param_5 + 0x20), lVar1 != 0)) {
    _objc_setAssociatedObject(lVar1,lVar3,&DAT_028cd4b6,0,1);
  }
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = lVar3 != *(long *)(param_5 + 0x20);
  (*(code *)PTR__objc_release_02578630)();
  if (bVar2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_5 + 0x20),PTR_s_insertSubview_atIndex__026ca748,local_30,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,param_2,param_3,param_4,local_30,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setUserInteractionEnabled__026caad8,1);
  if ((*(byte *)(param_5 + 0x38) & 1) != 0) {
    if (((bVar2) &&
        (uVar4 = DAT_028cd090,
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028cd090,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_5 + 0x28)),
        (uVar4 & 1) != 0)) &&
       (uVar4 = DAT_028cd0a0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (DAT_028cd0a0,PTR_s_isEqualToString__0269ccc8,*(undefined8 *)(param_5 + 0x28)),
       (uVar4 & 1) == 0)) {
      FUN_0080dd7c(local_30);
    }
    if (bVar2) {
      FUN_0080d7d0(local_30);
    }
  }
  if (DAT_028cd088 != 0) {
    uVar6 = DAT_028cd050;
    _WCRefineProfileBgSafePathComponent();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd088,PTR_s_setWorkId__026a8ec8);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cd088,PTR_s_setActiveWebView__026a8ed0,local_30);
  }
  if (DAT_028cd080 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cd080,PTR_s_setProfileCardView__026a8ed8,*(undefined8 *)(param_5 + 0x30));
  }
  _objc_setAssociatedObject(*(undefined8 *)(param_5 + 0x20),&DAT_028cd4b6,local_30,1);
  _objc_setAssociatedObject(*(undefined8 *)(param_5 + 0x20),&DAT_028cd4b3,DAT_028cd080,1);
  _objc_setAssociatedObject
            (*(undefined8 *)(param_5 + 0x20),&DAT_028cd0d1,*(undefined8 *)(param_5 + 0x28),3);
  uVar6 = *(undefined8 *)(param_5 + 0x20);
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
             *(byte *)(param_5 + 0x39) & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar6,&DAT_028cd4b5,puVar5,1);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setUIDelegate__026a8ee0,DAT_028cd080);
  FUN_0085f60c(local_30,*(undefined8 *)(param_5 + 0x30));
  if ((*(byte *)(param_5 + 0x38) & 1) != 0) {
    FUN_0085a484((*(byte *)(param_5 + 0x39) ^ 1) & 1);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return;
}

