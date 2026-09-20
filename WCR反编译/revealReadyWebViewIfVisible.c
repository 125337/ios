// revealReadyWebViewIfVisible @ 01e8b294

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::revealReadyWebViewIfVisible(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setReadyWebRevealScheduled__026c72d8,0);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar3 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar4 != 0) &&
       (uVar5 = DAT_028e47e0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (DAT_028e47e0,PTR_s_isEqualToString__0269ccc8,DAT_028e47d8), (uVar5 & 1) != 0)) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webSnapshotImageView_026c6ec0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_18;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_48 = PTR___NSConcreteGlobalBlock_02578658;
      local_40 = 0xd0800000;
      local_3c = 0;
      local_38 = FUN_01e8b4e0;
      local_30 = &DAT_0257a9d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_performWithoutAnimation__0269e7e0,&local_48);
      uVar6 = DAT_028e47d8;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47d8,PTR_s_copy_0269d150);
      uVar2 = DAT_028e47f8;
      DAT_028e47f8 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_storeStrong(&local_28,0);
    }
  }
  return;
}

