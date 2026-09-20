// FUN_005bb648 @ 005bb648

undefined4 FUN_005bb648(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong local_90;
  ulong local_50;
  ulong local_38;
  long local_30;
  long local_28;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  local_30 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_90 = 0;
  }
  else {
    local_90 = local_20;
    FUN_0059d260(lVar1,local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_90;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
  if ((uVar2 & 1) == 0) {
    if ((local_20 != 0) && (local_30 != 0)) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_30);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
        local_14 = (undefined4)uVar2;
        goto LAB_005bb8bc;
      }
    }
    local_14 = 0;
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_unsignedIntValue_0269db10);
    local_14 = (undefined4)uVar2;
  }
LAB_005bb8bc:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

