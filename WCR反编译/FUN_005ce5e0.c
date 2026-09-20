// FUN_005ce5e0 @ 005ce5e0

void FUN_005ce5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_5 + 0x20;
  local_20 = param_5;
  local_18 = param_5;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              (0,param_2,param_3,param_4,local_28,PTR_s_setFrame__026ca960);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

