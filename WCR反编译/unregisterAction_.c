// unregisterAction: @ 0160880c

/* Function Stack Size: 0x18 bytes */

void WCRSuperFloatMgr::unregisterAction_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_38 = &::cf___;
  }
  else {
    local_38 = local_28;
  }
  _WCRSuperFloatUnregisterAction(local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

