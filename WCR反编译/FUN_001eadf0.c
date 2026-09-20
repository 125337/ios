// FUN_001eadf0 @ 001eadf0

byte FUN_001eadf0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_38;
  ulong local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_18 = &DAT_028c90e0;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ad98);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  local_38 = 0;
  do {
    if (1 < local_38) {
      local_21 = 0;
LAB_001eaf2c:
      _objc_storeStrong(&local_30,0);
      return local_21 & 1;
    }
    if (((&DAT_028c90d0)[local_38] != 0) &&
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_isKindOfClass__0269cd68,(&DAT_028c90d0)[local_38]),
       (uVar1 & 1) != 0)) {
      local_21 = 1;
      goto LAB_001eaf2c;
    }
    local_38 = local_38 + 1;
  } while( true );
}

