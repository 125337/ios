// FUN_00519a64 @ 00519a64

void FUN_00519a64(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  FUN_0051a2a8();
  if (((((uVar1 & 1) != 0) &&
       (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
       uVar1 != 0)) && (local_18 != 0)) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,
                PTR_s_unfoldTimelineFromUsername__026a4890), (uVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_unfoldTimelineFromUsername__026a4890,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

