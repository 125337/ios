// FUN_003431b0 @ 003431b0

byte FUN_003431b0(undefined8 param_1)

{
  uint uVar1;
  long local_20;
  byte local_11;
  long *plVar2;
  
  plVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  if ((local_20 == 0) || (FUN_0033a150(), (uVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

