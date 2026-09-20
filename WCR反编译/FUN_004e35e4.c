// FUN_004e35e4 @ 004e35e4

byte FUN_004e35e4(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,
             PTR_s_performRepeatEnhanceGestureActio_026a4360);
  local_11 = (uVar1 & 1) != 0;
  if ((bool)local_11) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_performRepeatEnhanceGestureActio_026a4360,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

