// FUN_00506428 @ 00506428

void FUN_00506428(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long local_60;
  long local_58;
  undefined1 local_49;
  long local_48;
  long local_40;
  uint local_38;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_38 = 1;
  }
  else {
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 0;
    bVar2 = true;
    uVar1 = lVar3 != 0;
    local_40 = lVar3;
    if ((bool)uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_navigationBar_0269ea30);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar3 == 0;
      local_49 = uVar1;
      local_48 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      uVar1 = local_49;
    }
    local_49 = uVar1;
    if (bVar2) {
      local_38 = 1;
    }
    else {
      local_58 = 0;
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleView_0269ea50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      lVar3 = local_18;
      if (lVar4 == 0) {
        lVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationBar_0269ea30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_wcrefine_findTitleLabelInView__026a4608);
        _objc_retainAutoreleasedReturnValue();
        local_60 = lVar3;
        (*(code *)PTR__objc_release_02578630)(lVar4);
        if (local_60 != 0) {
          lVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar3 == 0) {
            _objc_storeStrong(&local_58,local_60);
          }
          else {
            lVar4 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            lVar3 = local_58;
            local_58 = lVar4;
            (*(code *)PTR__objc_release_02578630)(lVar3);
          }
        }
        _objc_storeStrong(&local_60,0);
      }
      else {
        lVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleView_0269ea50);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = local_58;
        local_58 = lVar4;
        (*(code *)PTR__objc_release_02578630)(lVar3);
      }
      bVar2 = local_58 != 0;
      if (bVar2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setUserInteractionEnabled__026caad8,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_wcrefine_addGestureToView__026a4600,local_58);
      }
      local_38 = (uint)!bVar2;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

