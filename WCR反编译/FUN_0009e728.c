// FUN_0009e728 @ 0009e728

byte FUN_0009e728(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_7c;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_0009e9c4;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_accessibilityLabel_0269e1c8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
LAB_0009e834:
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_7c = 0;
    bVar1 = uVar2 != 0;
    local_48[0] = uVar2;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_7c = (byte)uVar3;
      local_50 = uVar2;
    }
    local_11 = local_7c & 1;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_24 = 1;
    _objc_storeStrong(local_48,0);
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_4YP);
    if ((uVar2 & 1) == 0) goto LAB_0009e834;
    local_11 = 1;
    local_24 = 1;
  }
  _objc_storeStrong(&local_30,0);
LAB_0009e9c4:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

