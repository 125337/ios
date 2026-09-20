// FUN_00790a08 @ 00790a08

char * FUN_00790a08(long param_1)

{
  char *local_28;
  
  local_28 = "CommonMessageCellView";
  _objc_getClass();
  if ((local_28 == (char *)0x0) || (param_1 == 0)) {
    local_28 = (char *)0x0;
  }
  else {
    _class_getInstanceMethod(local_28,param_1);
  }
  return local_28;
}

