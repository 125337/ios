// maskOfInfoPlist @0x8affc

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMYBIBScreenRotationHandler::maskOfInfoPlist(ID param_1,SEL param_2)

{
  undefined *local_38;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &_maskOfInfoPlist_onceToken;
  local_20 = 0;
  _objc_storeStrong(&local_20,&___block_literal_global_33);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (_maskOfInfoPlist_mask == (undefined *)0x0) {
    local_38 = &DAT_00002710;
  }
  else {
    local_38 = _maskOfInfoPlist_mask;
  }
  return (unsigned_long_long)local_38;
}

