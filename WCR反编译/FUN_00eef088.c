// FUN_00eef088 @ 00eef088

byte FUN_00eef088(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_00eeec64();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    FUN_00eeeeb8(local_28,0);
    if ((uVar1 & 1) == 0) {
      pcVar3 = "MMInputToolView";
      _objc_getClass();
      if (pcVar3 == (char *)0x0) {
        local_11 = 0;
      }
      else {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rangeOfString__0269d838,&cf__);
        if (((uVar1 == 0x7fffffffffffffff) &&
            (uVar1 = local_28, _NSSelectorFromString(0), uVar1 != 0)) &&
           (pcVar4 = pcVar3, _class_getInstanceMethod(pcVar3,uVar1), pcVar4 != (char *)0x0)) {
          local_11 = 1;
        }
        else {
          _class_getInstanceMethod(pcVar3,PTR_s_onClickItemAction__026ab978);
          if (pcVar3 == (char *)0x0) {
            local_11 = 0;
          }
          else {
            local_11 = 1;
          }
        }
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

