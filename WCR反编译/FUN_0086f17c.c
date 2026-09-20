// FUN_0086f17c @ 0086f17c

void FUN_0086f17c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_5;
  local_18 = param_4;
  _objc_storeStrong(&local_28,param_6);
  (*DAT_028cd750)(local_18,local_20,local_28);
  uVar1 = local_18;
  if ((DAT_028cd85b & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_40[0] = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setHidden__026ca970,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,0,local_40[0],PTR_s_setFrame__026ca960);
    _objc_storeStrong(local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

