// FUN_0082bb10 @ 0082bb10

void FUN_0082bb10(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint local_124;
  long local_a0;
  byte local_91;
  ulong local_90;
  long local_88;
  ulong local_80;
  undefined1 local_71;
  ulong local_70 [3];
  byte local_51;
  double local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_6);
  local_51 = param_7;
  local_50 = param_1;
  FUN_0082af08(local_30);
  FUN_0082e1c0(local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setImage__026ca978,local_38);
  _objc_setAssociatedObject(local_30,&DAT_028cd0e1,local_40,3);
  _objc_setAssociatedObject(local_30,&DAT_028cd1d7,0,1);
  uVar3 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028cd1d1);
  _objc_retainAutoreleasedReturnValue();
  local_70[0] = uVar3;
  FUN_008248f4(uVar3,local_30);
  uVar5 = local_70[0];
  if ((uVar3 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar3 = local_70[0];
    local_71 = (undefined1)uVar5;
    if ((uVar5 & 1) == 0) {
      FUN_008259f8(local_28,local_70[0],local_30);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = uVar3;
      FUN_00827904(uVar3,local_30);
      lVar6 = local_30;
      _objc_getAssociatedObject(local_30,&DAT_028cd1d3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_80;
      local_91 = 0;
      local_124 = 0;
      local_88 = lVar6;
      if (lVar6 != 0) {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = uVar3;
        FUN_00827aa4();
        local_124 = (uint)uVar5;
      }
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      if ((local_124 & 1) != 0) {
        uVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        FUN_00827dfc();
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      uVar5 = local_28;
      FUN_00823390();
      if ((uVar5 & 1) == 0) {
        FUN_0082552c(local_80,local_30);
      }
      else {
        FUN_00828294(local_28,local_80,local_30);
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
  }
  lVar7 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028cd1d4);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = lVar7;
  (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = local_30;
  (*(code *)PTR__objc_release_02578630)();
  if (lVar7 == lVar6) {
    lVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bringSubviewToFront__026ca550,local_a0);
  }
  uVar2 = (uint)lVar7;
  FUN_0082baac();
  uVar1 = uVar2;
  FUN_0082d7bc();
  if ((((uVar2 & 1) != 0) || ((uVar1 & 1) != 0)) && (local_28 != 0)) {
    uVar2 = uVar1;
    _CFAbsoluteTimeGetCurrent();
    if ((((uVar1 & 1) != 0) || ((local_51 & 1) == 0)) ||
       ((16.0 < (param_1 - local_50) * 1000.0 || (FUN_0082bab8(), (uVar2 & 1) != 0)))) {
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      _getpid();
      FUN_0082baf4();
      _NSLog(&
             cf__wcr__page_bg_event_media_commitvc___trigger___cached__delapsedMs___1fpid__dmemAvailKB__llu
            );
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

