// FUN_0081e920 @ 0081e920

void FUN_0081e920(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  double local_f8;
  long local_d0;
  long local_c8;
  long local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  double local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70 [3];
  double local_58;
  int local_4c;
  long local_48;
  long local_40;
  long local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_5;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  lVar2 = param_5 + 0x20;
  local_40 = param_5;
  _objc_loadWeakRetained();
  local_48 = lVar2;
  if ((lVar2 == 0) || (local_38 != 0)) {
    local_4c = 1;
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    if ((uVar3 & 1) == 0) {
      local_f8 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
      local_f8 = param_1;
    }
    local_58 = local_f8;
    if (local_f8 < 0.0) {
      dVar4 = _dispatch_time(0,80000000);
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_48;
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_0081edc4;
      local_78 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_70[0] = lVar2;
      _dispatch_after(dVar4,puVar5,&local_90);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_4c = 1;
      _objc_storeStrong(local_70,0);
    }
    else {
      lVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      uVar1 = (uint)lVar2;
      local_b8 = local_f8;
      local_b0 = param_2;
      local_a8 = param_3;
      local_a0 = param_4;
      _CGRectGetHeight(local_f8,param_2,param_3,param_4);
      local_98 = local_f8;
      if ((local_58 <= 1.0) || ((1.0 < local_f8 && (ABS(local_58 - local_f8) < 2.0)))) {
        local_4c = 1;
      }
      else {
        _WCRefineProfileBgHTMLNoteMeasuredHeight(local_58);
        if ((uVar1 & 1) == 0) {
          local_4c = 1;
        }
        else {
          lVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_c0 = lVar2;
          (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = lVar2;
          (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = lVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setNeedsLayout_0269deb8);
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setNeedsLayout_0269deb8);
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_layoutIfNeeded_026ca790);
          _objc_storeStrong(&local_d0);
          _objc_storeStrong(&local_c8,0);
          _objc_storeStrong(&local_c0,0);
          local_4c = 0;
        }
      }
    }
  }
  _objc_storeStrong(&local_48,0);
  if (local_4c == 0) {
    local_4c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

