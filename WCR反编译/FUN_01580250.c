// FUN_01580250 @ 01580250

void FUN_01580250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long local_60;
  undefined4 local_54;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  local_40 = 0;
  local_38 = param_2;
  uStack_30 = param_3;
  local_28 = param_4;
  uStack_20 = param_5;
  _objc_storeStrong(&local_40,param_6);
  uVar2 = local_40;
  local_48 = param_1;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar2;
  if (((DAT_028e3898 == 0) ||
      ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0), uVar2 == 0)) ||
     (uVar2 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,DAT_028e38a0),
     lVar1 = DAT_028e3898, (uVar2 & 1) == 0)) {
    local_18 = 0;
    local_54 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar1;
    _objc_storeStrong(&DAT_028e3898);
    _objc_storeStrong(&DAT_028e38a0,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,uStack_30,local_28,uStack_20,local_60,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,local_60,PTR_s_setAlpha__026ca860);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAutoresizingMask__026ca878,0x12);
    FUN_01551e44(local_60);
    lVar1 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

