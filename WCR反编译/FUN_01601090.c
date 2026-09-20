// FUN_01601090 @ 01601090

byte FUN_01601090(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  ulong local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_isEqualToString__0269ccc8,&cf_brandsessionholder);
    uVar3 = local_28;
    if ((uVar1 & 1) == 0) {
      pcVar2 = &cf_isBrandSessionHolder;
      _NSSelectorFromString(&cf_isBrandSessionHolder);
      FUN_016054b4(uVar3,pcVar2);
      local_11 = (byte)uVar3 & 1;
    }
    else {
      local_11 = 1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

