// showCachedWebSnapshotForSignature:evenWhenReady: @ 01e887dc

/* Function Stack Size: 0x1c bytes */

void __thiscall
WCRefineToDoCardView::showCachedWebSnapshotForSignature_evenWhenReady_
          (WCRefineToDoCardView *this,ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 in_d0;
  undefined8 uVar8;
  undefined *local_148;
  undefined *local_98;
  undefined *local_90;
  bool local_81;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined1 local_61;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  long local_48;
  uint local_40;
  byte local_39;
  long local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hideCachedWebSnapshotAnimated__026c7278,0);
    local_40 = 1;
    goto LAB_01e891bc;
  }
  if ((((local_39 & 1) == 0) &&
      (uVar4 = DAT_028e47e0,
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47e0,PTR_s_isEqualToString__0269ccc8,local_38),
      (uVar4 & 1) != 0)) &&
     (uVar4 = DAT_028e47f8,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47f8,PTR_s_isEqualToString__0269ccc8,local_38),
     (uVar4 & 1) != 0)) {
    local_40 = 1;
    goto LAB_01e891bc;
  }
  lVar3 = local_38;
  FUN_01e891d8();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_28;
  local_48 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_attemptedWebSnapshotSignature_026c7280);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
LAB_01e88be8:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setAttemptedWebSnapshotSignature_026c70c0,local_48);
    puVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    FUN_01e892e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_dictionaryWithContentsOfFile__026a3348);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_signature);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    puVar7 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    local_81 = false;
    bVar2 = ((ulong)puVar7 & 1) == 0;
    if (bVar2) {
      local_148 = (undefined *)0x0;
    }
    else {
      local_148 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_signature);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_148;
    }
    local_81 = !bVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_148;
    if ((local_81 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_style);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar7 = local_78;
    local_90 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,local_48);
    puVar5 = local_90;
    if ((((ulong)puVar7 & 1) == 0) ||
       (puVar7 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotInterfaceStyle_026c7290),
       puVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0, puVar5 != puVar7)) {
      local_40 = 1;
    }
    else {
      FUN_01e89350();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_imageWithContentsOfFile__0269e0e0);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      bVar2 = local_98 != (undefined *)0x0;
      if (bVar2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setWebSnapshotSignature__026c70b8,local_48);
        puVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar6 = local_70;
        uVar8 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        FUN_01e75160();
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,uVar8,local_28,PTR_s_setWebSnapshotViewportSize__026c7298);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardContainer_026be658);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_bringSubviewToFront__026ca550);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      local_40 = (uint)!bVar2;
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  else {
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotSignature_026c7288);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = 0;
    local_61 = 0;
    bVar2 = false;
    uVar1 = ((ulong)puVar6 & 1) != 0;
    if ((bool)uVar1) {
      puVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = puVar6 != (undefined *)0x0;
      local_61 = uVar1;
      local_60 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      uVar1 = local_61;
    }
    local_61 = uVar1;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (bVar2) {
      puVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardContainer_026be658);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webSnapshotImageView_026c6ec0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_bringSubviewToFront__026ca550);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_40 = 1;
    }
    else {
      if ((local_39 & 1) != 0) goto LAB_01e88be8;
      local_40 = 1;
    }
  }
  _objc_storeStrong(&local_48,0);
LAB_01e891bc:
  _objc_storeStrong(&local_38,0);
  return;
}

