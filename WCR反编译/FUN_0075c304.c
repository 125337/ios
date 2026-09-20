// FUN_0075c304 @ 0075c304

byte FUN_0075c304(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    _class_getInstanceMethod(local_20,local_28);
    if (uVar1 == 0) {
      local_11 = 0;
    }
    else {
      uVar2 = uVar1;
      _method_getTypeEncoding();
      _method_getImplementation();
      if (uVar1 - local_30 == 0) {
        local_11 = 1;
      }
      else {
        uVar3 = local_38;
        _NSSelectorFromString(uVar1 - local_30);
        uVar4 = local_20;
        _class_addMethod(local_20,uVar3,uVar1,uVar2);
        if ((uVar4 & 1) == 0) {
          local_11 = 0;
        }
        else {
          _class_replaceMethod(local_20,local_28,local_30,uVar2);
          local_11 = 1;
        }
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

