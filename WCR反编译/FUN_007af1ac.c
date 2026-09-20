// FUN_007af1ac @ 007af1ac

byte FUN_007af1ac(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_50;
  undefined4 local_48;
  char local_41;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = local_28;
  local_41 = '\0';
  bVar1 = true;
  if ((local_20 != 0) && (bVar1 = true, local_28 != 0)) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_panGestureRecognizer_0269dd98);
    _objc_retainAutoreleasedReturnValue();
    local_41 = '\x01';
    bVar1 = uVar3 == uVar2;
    local_40 = uVar2;
  }
  if (local_41 != '\0') {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar1) {
    local_11 = 0;
    local_48 = 1;
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    if (uVar3 == local_20) {
      local_11 = 1;
    }
    else {
      while (uVar3 = local_50, local_50 != 0) {
        puVar4 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((uVar3 & 1) != 0) {
          local_11 = 1;
          goto LAB_007af438;
        }
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_50;
        local_50 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_11 = 0;
    }
LAB_007af438:
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

