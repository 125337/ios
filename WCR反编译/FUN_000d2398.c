// FUN_000d2398 @ 000d2398

undefined1  [16] FUN_000d2398(double param_1,double param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_a0;
  ulong local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_48 = 0;
  local_40 = param_1;
  dStack_38 = param_2;
  _objc_storeStrong(&local_48,param_3);
  FUN_000cbbac(local_48);
  if ((local_48 == 0) || (param_1 <= 0.0)) {
    dStack_28 = dStack_38;
    local_30 = local_40;
  }
  else {
    uVar2 = local_48;
    _objc_getAssociatedObject(local_48,&DAT_028c829b);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == 0) {
      uVar2 = local_48;
      _objc_getAssociatedObject(local_48,&DAT_028c829d);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar2 == 0) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isTracking_0269ddf0);
        if ((((uVar2 & 1) == 0) &&
            (uVar2 = local_48,
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDragging_0269ddf8),
            (uVar2 & 1) == 0)) &&
           (uVar2 = local_48,
           (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDecelerating_0269e888),
           dVar5 = dStack_38, (uVar2 & 1) == 0)) {
          dVar3 = dStack_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentOffset_0269dd18);
          local_a0 = ABS(dVar5 - param_2);
          if (0.5 <= local_a0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_adjustedContentInset_0269dcd0);
            dVar4 = -local_a0;
            dVar5 = dVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_contentSize_026ca5a0);
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
            local_a0 = (dVar5 + dVar3) - local_a0;
            if (local_a0 < dVar4) {
              local_a0 = dVar4;
            }
            local_1d0 = dVar4;
            if (dVar4 < local_a0 - param_1) {
              local_1d0 = local_a0 - param_1;
            }
            if (local_1d0 - 24.0 <= dStack_38) {
              local_30 = local_40;
              local_1d8 = dStack_38 + param_1;
              if (local_1d8 < dVar4) {
                local_1d8 = dVar4;
              }
              if (local_a0 <= local_1d8) {
                local_1e0 = local_a0;
              }
              else {
                local_1e0 = local_1d8;
              }
              dStack_28 = local_1e0;
            }
            else {
              dStack_28 = dStack_38;
              local_30 = local_40;
            }
          }
          else {
            dStack_28 = dStack_38;
            local_30 = local_40;
          }
        }
        else {
          dStack_28 = dStack_38;
          local_30 = local_40;
        }
      }
      else {
        dStack_28 = dStack_38;
        local_30 = local_40;
      }
    }
    else {
      dStack_28 = dStack_38;
      local_30 = local_40;
    }
  }
  local_40 = local_30;
  _objc_storeStrong(&local_48,0);
  auVar1._8_8_ = dStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}

