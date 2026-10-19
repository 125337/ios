// ___Install_block_invoke_6 @0x62218

void ___Install_block_invoke_6(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  uint local_40;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = param_1;
  (**(code **)(param_1 + 0x20))(local_20,"viewDidLayoutSubviews");
  _objc_getAssociatedObject(local_20,&_PanelKey);
  local_30 = _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  if (local_30 != 0) {
    _objc_msgSend_view(local_30,local_58);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_40 = _objc_msgSend_isHidden(uVar1,local_58);
    local_40 = local_40 ^ 1;
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  if ((local_40 & 1) != 0) {
    _objc_msgSend_view(local_20,local_58);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_view(local_30,local_58);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_bringSubviewToFront_(uVar1,local_58);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_ensureTabBarVisible(local_30,local_58);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

