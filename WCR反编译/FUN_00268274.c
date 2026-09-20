// FUN_00268274 @ 00268274

void FUN_00268274(ulong param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *local_50;
  ulong local_48;
  uint local_40;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9510)(param_1,param_2,param_3 & 1);
  uVar4 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar4;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_40 = 1;
    goto LAB_00268670;
  }
  uVar4 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c9531);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar4 != 0) {
    local_40 = 1;
    goto LAB_00268670;
  }
  uVar4 = local_18;
  FUN_00269660(local_18,"m_tableView");
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar4;
  if (uVar4 == 0) {
LAB_0026844c:
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_002697bc();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_48;
    local_48 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) == 0) goto LAB_0026844c;
  }
  bVar1 = local_48 != 0;
  if (bVar1) {
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithTarget_action__026ca718,local_18,
               PTR_s_WCRefineFavoritesLP_onLongPress__026a1388);
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c78,puVar2,PTR_s_setMinimumPressDuration__026ca9c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCancelsTouchesInView__026ca8b8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setDelegate__026ca910,local_18);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_addGestureRecognizer__026ca4a8,local_50);
    uVar4 = local_18;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar4,&DAT_028c9531,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_50,0);
  }
  local_40 = (uint)!bVar1;
  _objc_storeStrong(&local_48,0);
LAB_00268670:
  _objc_storeStrong(&local_30,0);
  return;
}

