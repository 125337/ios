// FUN_0019e234 @ 0019e234

void FUN_0019e234(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long local_68;
  undefined1 local_59;
  long local_58;
  long local_50;
  undefined1 local_41;
  long local_40;
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x24f6e4);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 0;
    bVar2 = false;
    uVar1 = lVar3 != 0;
    local_28 = lVar3;
    if ((bool)uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar3 != 0;
      local_41 = uVar1;
      local_40 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      uVar1 = local_41;
    }
    local_41 = uVar1;
    if (bVar2) {
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x24f6e5);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 0;
    bVar2 = false;
    uVar1 = lVar3 != 0;
    local_50 = lVar3;
    if ((bool)uVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar3 != 0;
      local_59 = uVar1;
      local_58 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      uVar1 = local_59;
    }
    local_59 = uVar1;
    if (bVar2) {
      lVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    if (local_28 != 0) {
      lVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f6e5);
      _objc_retainAutoreleasedReturnValue();
      local_68 = lVar3;
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bringSubviewToFront__026ca550,lVar3);
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

