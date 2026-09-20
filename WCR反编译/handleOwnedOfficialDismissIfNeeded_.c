// handleOwnedOfficialDismissIfNeeded: @ 0112fc04

/* Function Stack Size: 0x18 bytes */

bool WCRefineQuickRemarkEditor::handleOwnedOfficialDismissIfNeeded_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  dispatch_time_t dVar7;
  byte local_cc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  undefined **local_60;
  byte local_51;
  ulong local_50;
  byte local_45;
  undefined4 local_44;
  ulong local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isOwnedOfficialController__026af2a0,local_40)
  ;
  if ((IVar2 & 1) == 0) {
    local_21 = 0;
    local_44 = 1;
  }
  else {
    uVar3 = local_40;
    _objc_getAssociatedObject(local_40,&DAT_028e357d);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_40;
    if ((uVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar3,&DAT_028e357d,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      uVar3 = local_40;
      _objc_getAssociatedObject(local_40,&DAT_028e357c);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_51 = 0;
      local_cc = 1;
      if ((uVar4 & 1) == 0) {
        uVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = uVar4;
        FUN_0112f2fc();
        local_cc = (byte)uVar4;
      }
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      local_45 = local_cc & 1;
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_hideKeyboard_026af230);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hideKeyboard_026af230);
      }
      uVar3 = local_40;
      ppuVar6 = &local_88;
      local_88 = PTR___NSConcreteStackBlock_02578660;
      local_80 = 0xc2000000;
      local_7c = 0;
      local_78 = FUN_011301b0;
      local_70 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = uVar3;
      _objc_retainBlock();
      local_60 = ppuVar6;
      if ((local_45 & 1) == 0) {
        (*(code *)ppuVar6[2])();
        local_21 = 1;
        local_44 = 1;
      }
      else {
        puVar5 = PTR_WCRQuickRemarkDismissOnce_026ced00;
        _objc_alloc_init();
        local_90 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setAction__026a17d0,local_60);
        _objc_setAssociatedObject(local_40,&DAT_028e3580,local_90,1);
        puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar5);
        dVar7 = _dispatch_time(0,350000000);
        puVar5 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_90;
        local_b8 = PTR___NSConcreteStackBlock_02578660;
        local_b0 = 0xc2000000;
        local_ac = 0;
        local_a8 = FUN_01130448;
        local_a0 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = puVar1;
        _dispatch_after(dVar7,puVar5,&local_b8);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        local_21 = 1;
        local_44 = 1;
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_68,0);
    }
    else {
      local_21 = 1;
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

