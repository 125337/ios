// FUN_00fc31ec @ 00fc31ec

void FUN_00fc31ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (local_18 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showWithAnimated__0269e5a8,1);
    if (local_28 != 0) {
      (**(code **)(local_28 + 0x10))();
    }
    if ((local_20 != 0) &&
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108),
       (uVar1 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_becomeFirstResponder_0269d108);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

