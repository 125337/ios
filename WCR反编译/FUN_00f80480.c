// FUN_00f80480 @ 00f80480

byte FUN_00f80480(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  do {
    if (local_28 == 0) {
      local_11 = 0;
      break;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_containsString__0269d0b0,&cf_CommonMessageCellView);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_containsString__0269d0b0,&cf_MessageCellView), (uVar2 & 1) == 0)) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      local_28 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      bVar1 = false;
    }
    else {
      local_11 = 1;
      bVar1 = true;
    }
    _objc_storeStrong(&local_30,0);
  } while (!bVar1);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

