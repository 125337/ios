// FUN_0079fe64 @ 0079fe64

void FUN_0079fe64(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    uVar1 = local_18;
    FUN_007a01dc();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 == local_20) {
      _objc_storeStrong(0,&local_30,0);
    }
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_18;
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 == uVar1) {
      if (local_30 == 0) {
        local_24 = 1;
      }
      else {
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if ((uVar3 != 0x7fffffffffffffff) && (uVar3 < uVar2)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_insertSubview_belowSubview__0269e078,local_20,local_30);
        }
        local_24 = 0;
      }
    }
    else {
      if (local_30 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_insertSubview_atIndex__026ca748,local_20,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_insertSubview_belowSubview__0269e078,local_20,local_30);
      }
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

