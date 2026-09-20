// wcrGrouping_tableView:willDisplayCell:forRowAtIndexPath: @ 003a70d4

/* Function Stack Size: 0x28 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *local_f0;
  undefined1 local_e1;
  long local_e0;
  undefined *local_d8;
  undefined1 local_c9;
  long local_c8;
  undefined *local_c0;
  undefined1 local_b1;
  long local_b0;
  ID local_a8;
  ulong local_a0;
  undefined *local_98;
  int local_8c;
  undefined *local_88;
  undefined1 local_79;
  long local_78;
  undefined *local_70;
  ulong local_68;
  ID local_60;
  undefined1 local_51;
  ID local_50;
  ulong local_48;
  long local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  uVar2 = DAT_02323c98;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_active_026a2a40);
  IVar5 = local_38;
  local_51 = 0;
  bVar3 = false;
  uVar1 = (IVar4 & 1) != 0;
  if ((bool)uVar1) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = IVar5 == IVar4;
    local_51 = uVar1;
    local_50 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    uVar1 = local_51;
  }
  local_51 = uVar1;
  if (bVar3) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcrGrouping_snapshotForTableView_026a2a50,local_38);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_48;
    local_60 = IVar5;
    FUN_0039d120(local_48,IVar5);
    if ((uVar6 & 1) == 0) {
      uVar6 = local_48;
      FUN_0039d4e0(local_48,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar6;
      if (uVar6 == 0) {
        uVar6 = local_48;
        FUN_0039d550(local_48,local_60);
        if ((uVar6 & 1) == 0) {
          uVar6 = local_48;
          FUN_0039d6b4(local_48,local_60);
          IVar4 = local_28;
          IVar5 = local_38;
          lVar9 = local_40;
          if ((uVar6 & 1) == 0) {
            local_8c = 0;
          }
          else {
            uVar6 = local_48;
            FUN_0039d7f0(local_48,local_60);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar4,PTR_s_wcrGrouping_tableView_willDispla_026a29a0,IVar5,lVar9);
            (*(code *)PTR__objc_release_02578630)(uVar6);
            puVar7 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_c9 = 0;
            bVar3 = false;
            uVar1 = ((ulong)puVar8 & 1) != 0;
            if ((bool)uVar1) {
              lVar9 = local_40;
              _objc_getAssociatedObject(local_40,&DAT_028ca0ea);
              _objc_retainAutoreleasedReturnValue();
              bVar3 = lVar9 == 0;
              local_c9 = uVar1;
              local_c8 = lVar9;
              (*(code *)PTR__objc_release_02578630)(lVar9);
              uVar1 = local_c9;
            }
            local_c9 = uVar1;
            (*(code *)PTR__objc_release_02578630)(puVar7);
            if (bVar3) {
              puVar7 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
              _objc_alloc();
              (*(code *)PTR__objc_msgSend_02578628)();
              local_d8 = puVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,puVar7,PTR_s_setMinimumPressDuration__026ca9c8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_addGestureRecognizer__026ca4a8,local_d8);
              lVar9 = local_40;
              puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
              _objc_retainAutoreleasedReturnValue();
              _objc_setAssociatedObject(lVar9,&DAT_028ca0ea,puVar7,1);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              _objc_storeStrong(&local_d8,0);
            }
            local_8c = 1;
          }
        }
        else {
          local_8c = 1;
        }
      }
      else {
        IVar5 = local_28;
        FUN_003a7d64(local_28,uVar6);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = IVar5;
        if (IVar5 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_wcrGrouping_tableView_willDispla_026a29a0,local_38,local_40,
                     IVar5);
        }
        puVar7 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_b1 = 0;
        bVar3 = false;
        uVar1 = ((ulong)puVar8 & 1) != 0;
        if ((bool)uVar1) {
          lVar9 = local_40;
          _objc_getAssociatedObject(local_40,&DAT_028ca0ea);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = lVar9 == 0;
          local_b1 = uVar1;
          local_b0 = lVar9;
          (*(code *)PTR__objc_release_02578630)(lVar9);
          uVar1 = local_b1;
        }
        local_b1 = uVar1;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        if (bVar3) {
          puVar7 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_c0 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,puVar7,PTR_s_setMinimumPressDuration__026ca9c8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_addGestureRecognizer__026ca4a8,local_c0);
          lVar9 = local_40;
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(lVar9,&DAT_028ca0ea,puVar7,1);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          _objc_storeStrong(&local_c0,0);
        }
        local_8c = 1;
        _objc_storeStrong(&local_a8,0);
      }
      _objc_storeStrong(&local_a0,0);
    }
    else {
      uVar6 = local_48;
      FUN_0039d35c(local_48,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar6;
      if (uVar6 == 0) {
        lVar9 = local_40;
        _objc_getAssociatedObject(local_40,&DAT_028ca120);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (lVar9 == 0) {
          puVar7 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_98 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,puVar7,PTR_s_setMinimumPressDuration__026ca9c8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_addGestureRecognizer__026ca4a8,local_98);
          lVar9 = local_40;
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(lVar9,&DAT_028ca120,puVar7,1);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          _objc_storeStrong(&local_98,0);
        }
      }
      else {
        lVar9 = local_40;
        _objc_getAssociatedObject(local_40,&DAT_028ca120);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (lVar9 == 0) {
          puVar7 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_70 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,puVar7,PTR_s_setMinimumPressDuration__026ca9c8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_addGestureRecognizer__026ca4a8,local_70);
          lVar9 = local_40;
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(lVar9,&DAT_028ca120,puVar7,1);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          _objc_storeStrong(&local_70,0);
        }
        puVar7 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_79 = 0;
        bVar3 = false;
        uVar1 = ((ulong)puVar8 & 1) != 0;
        if ((bool)uVar1) {
          lVar9 = local_40;
          _objc_getAssociatedObject(local_40,&DAT_028ca0ea);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = lVar9 == 0;
          local_79 = uVar1;
          local_78 = lVar9;
          (*(code *)PTR__objc_release_02578630)(lVar9);
          uVar1 = local_79;
        }
        local_79 = uVar1;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        if (bVar3) {
          puVar7 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_88 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,puVar7,PTR_s_setMinimumPressDuration__026ca9c8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_addGestureRecognizer__026ca4a8,local_88);
          lVar9 = local_40;
          puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(lVar9,&DAT_028ca0ea,puVar7,1);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          _objc_storeStrong(&local_88,0);
        }
      }
      local_8c = 1;
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
    if (local_8c != 0) goto LAB_003a7d2c;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_wcrGrouping_tableView_willDispla_026a29a0,local_38,local_40,local_48);
  puVar7 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e1 = 0;
  bVar3 = false;
  uVar1 = ((ulong)puVar8 & 1) != 0;
  if ((bool)uVar1) {
    lVar9 = local_40;
    _objc_getAssociatedObject(local_40,&DAT_028ca0ea);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = lVar9 == 0;
    local_e1 = uVar1;
    local_e0 = lVar9;
    (*(code *)PTR__objc_release_02578630)(lVar9);
    uVar1 = local_e1;
  }
  local_e1 = uVar1;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  if (bVar3) {
    puVar7 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f0 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,puVar7,PTR_s_setMinimumPressDuration__026ca9c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addGestureRecognizer__026ca4a8,local_f0);
    lVar9 = local_40;
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar9,&DAT_028ca0ea,puVar7,1);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _objc_storeStrong(&local_f0,0);
  }
  local_8c = 0;
LAB_003a7d2c:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

