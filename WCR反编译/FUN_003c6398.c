// FUN_003c6398 @ 003c6398

byte FUN_003c6398(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  ulong local_f8;
  ulong local_e0;
  ulong local_68;
  ulong local_60;
  bool local_51;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_40 = 0;
  local_38 = param_6;
  _objc_storeStrong(&local_40,param_7);
  uVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_30;
  if ((uVar3 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar4 & 1) != 0) && (uVar3 = local_30, FUN_003beb04(), (uVar3 & 1) != 0)) {
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
      local_51 = false;
      bVar1 = (uVar3 & 1) == 0;
      if (bVar1) {
        local_e0 = local_30;
      }
      else {
        local_e0 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_50 = local_e0;
      }
      local_51 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = local_e0;
      if ((local_51 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      uVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = uVar3;
      if (uVar3 == 0) {
        local_68 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = local_68;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_f8;
      if (uVar3 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_60 == 0) {
LAB_003c66e4:
        bVar1 = false;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_locationInView__026ca798,local_60);
        dVar5 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_bounds_026ca548);
        _CGRectGetWidth(dVar5,param_2,param_3,param_4);
        if ((dVar5 <= 0.0) || ((25.0 < param_1 && (param_1 < dVar5 - 25.0)))) goto LAB_003c66e4;
        local_21 = 0;
        bVar1 = true;
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_48,0);
      if (bVar1) goto LAB_003c6770;
    }
  }
  if (DAT_028ca280 == (code *)0x0) {
    local_21 = 1;
  }
  else {
    uVar3 = local_30;
    (*DAT_028ca280)(local_30,local_38,local_40);
    local_21 = (byte)uVar3 & 1;
  }
LAB_003c6770:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

