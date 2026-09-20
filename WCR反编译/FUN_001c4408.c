// FUN_001c4408 @ 001c4408

void FUN_001c4408(double param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                 undefined8 param_6,byte param_7,byte param_8)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  double dVar5;
  undefined *local_88;
  undefined1 local_79;
  long local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined *local_40;
  byte local_32;
  byte local_31;
  undefined8 local_30;
  long local_28;
  
  local_32 = param_8;
  local_31 = param_7;
  local_30 = param_6;
  local_28 = param_5;
  if ((param_7 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_menuSizeEnabled_026a0468);
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_menuMaxCountPerLine_026a0488);
      if (0 < (long)puVar3) {
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_menuMaxCountPerLine_026a0488);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMaxCountPerLine__026a05b8,puVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_menuWidth_026a0470);
      if (0.0 < param_1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_menuWidth_026a0470);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMenuMinWidth__026a05c0);
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_menuMaxCountPerLine_026a0488);
        if (0 < (long)puVar3) {
          local_58 = 16.0;
          param_3 = 4.0;
          local_60 = 4.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_menuWidth_026a0470);
          param_3 = param_3 - local_58;
          puVar3 = local_40;
          local_68 = param_3;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_menuMaxCountPerLine_026a0488);
          dVar5 = param_3 - local_60 * (double)(long)(puVar3 + -1);
          puVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_menuMaxCountPerLine_026a0488);
          local_70 = dVar5 / (double)(long)puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,local_28,PTR_s_setMenuItemWidth__026a0498);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMenuItemInnerGap__026a05b0);
        }
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  (*DAT_028c8c58)(local_28,local_30,local_31 & 1,local_32 & 1);
  local_79 = 0;
  bVar2 = false;
  uVar1 = (local_31 & 1) == 0;
  if ((bool)uVar1) {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuView_026a05c8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar4 != 0;
    local_79 = uVar1;
    local_78 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    uVar1 = local_79;
  }
  local_79 = uVar1;
  if (bVar2) {
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuView_026a05c8);
    _objc_retainAutoreleasedReturnValue();
    FUN_00202e70();
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  if ((local_31 & 1) != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_menuSizeEnabled_026a0468);
    if (((ulong)puVar3 & 1) != 0) {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuView_026a05c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar4 != 0) {
        lVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_menuView_026a05c8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_menuWidth_026a0470);
        if ((0.0 < param_4) &&
           (dVar5 = param_3,
           (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_menuWidth_026a0470),
           puVar3 = PTR___dispatch_main_q_02578680, param_3 != dVar5)) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          _dispatch_async();
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
      }
    }
    _objc_storeStrong(&local_88,0);
  }
  return;
}

