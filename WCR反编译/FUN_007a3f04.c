// FUN_007a3f04 @ 007a3f04

undefined8 FUN_007a3f04(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
  }
  else {
    uVar3 = 0;
    local_30 = 0;
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_getRed_green_blue_alpha__026ca660,&local_30,&local_38,&local_40,
               &local_48);
    if (((uVar1 & 1) == 0) &&
       (uVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_getWhite_alpha__026ca668,&local_50,&local_48), uVar1 = local_20,
       (uVar2 & 1) == 0)) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_CGColor_026ca470);
      _CGColorGetAlpha(uVar1);
      local_18 = uVar3;
    }
    else {
      local_18 = local_48;
    }
  }
  local_24 = 1;
  _objc_storeStrong(&local_20,0);
  return local_18;
}

