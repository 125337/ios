// FUN_002fca60 @ 002fca60

byte FUN_002fca60(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *local_20;
  bool local_11;
  
  local_20 = (char *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (char *)0x0) {
    local_11 = false;
  }
  else {
    pcVar2 = local_20;
    _object_getClassName();
    if (pcVar2 == (char *)0x0) {
      local_11 = false;
    }
    else {
      pcVar1 = _strstr(pcVar2,"VisualEffectSubview");
      if ((pcVar1 == (char *)0x0) &&
         (pcVar1 = _strstr(pcVar2,"VisualEffectContentView"), pcVar1 == (char *)0x0)) {
        local_11 = false;
      }
      else {
        pcVar2 = _strstr(pcVar2,"Backdrop");
        local_11 = pcVar2 == (char *)0x0;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

