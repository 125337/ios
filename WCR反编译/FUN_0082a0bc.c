// FUN_0082a0bc @ 0082a0bc

void FUN_0082a0bc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint local_ec;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  char *local_50;
  undefined4 local_48;
  ulong local_38;
  undefined *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (undefined *)0x0;
  uVar1 = local_28;
  FUN_0082fb1c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  while (local_38 != 0) {
    uVar1 = local_38;
    _objc_getAssociatedObject(local_38,&DAT_028cd0e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar1 != 0) {
      _objc_storeStrong(&local_30,local_38);
      break;
    }
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_parentViewController_0269e500);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  local_48 = 2;
  _objc_storeStrong(&local_38,0);
  if (local_30 == (undefined *)0x0) {
    local_48 = 1;
    goto LAB_0082a8d4;
  }
  pcVar3 = "WCCommentDetailViewControllerFB";
  _objc_getClass();
  local_50 = pcVar3;
  if ((pcVar3 != (char *)0x0) &&
     (puVar4 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar3),
     ((ulong)puVar4 & 1) != 0)) {
    local_48 = 1;
    goto LAB_0082a8d4;
  }
  puVar4 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028cd0e0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_30;
  local_58 = puVar4;
  FUN_00826364();
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  puVar4 = local_58;
  local_60 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  if (puVar4 == puVar5) {
LAB_0082a398:
    puVar6 = local_58;
    FUN_00814d40(uVar9);
    local_ec = (uint)puVar6 ^ 1;
  }
  else {
    puVar6 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    uVar9 = 1;
    local_ec = 1;
    local_68 = puVar6;
    if (puVar6 == local_60) goto LAB_0082a398;
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((local_ec & 1) == 0) {
    puVar4 = local_58;
    _objc_getAssociatedObject(local_58,&DAT_028cd1d3);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSMapTable_026ce9c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMapTable_026ce9c0,
                 PTR_s_mapTableWithKeyOptions_valueOpti_026a8c58,5,0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_78;
      local_78 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_setAssociatedObject(local_58,&DAT_028cd1d3,local_78,1);
    }
    uVar1 = local_28;
    FUN_0083141c(local_28,local_58,local_78);
    if ((uVar1 != 0) && (FUN_0082d7bc(), (uVar1 & 1) != 0)) {
      puVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _NSLog(&
             cf__wcr__page_bg_event_moments_recursivevc___id__proot___changed__lumediaParent___z__lu
            );
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    _objc_storeStrong(&local_78,0);
    local_48 = 0;
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
LAB_0082a8d4:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

