// FUN_002b6bb8 @ 002b6bb8

void FUN_002b6bb8(double param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  ulong uVar1;
  double local_88;
  double local_80;
  ulong local_40;
  undefined4 local_38;
  byte local_21;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  local_21 = param_4;
  if ((local_18 == 0) || (uVar1 = local_18, FUN_002b83f8(), (uVar1 & 1) == 0)) {
    local_38 = 1;
  }
  else {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c9808);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if ((local_21 & 1) != 0) {
      if (uVar1 == 0) {
        local_80 = 1.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_doubleValue_026ca608);
        local_80 = param_1;
      }
      if (local_80 <= DAT_02323d38) {
        local_88 = 1.0;
      }
      else {
        local_88 = local_80;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_88,local_18,PTR_s_setAlpha__026ca860);
      _objc_getAssociatedObject(local_18,&DAT_028c9805);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
    }
    _objc_setAssociatedObject(local_18,&DAT_028c9804,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c9808,0,1);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

