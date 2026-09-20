// _WCRThemeLifeDecodeXOR @ 01526bf4

void _WCRThemeLifeDecodeXOR(long param_1,ulong param_2,byte param_3)

{
  undefined *puVar1;
  ulong local_48;
  undefined *local_38;
  byte local_29;
  ulong local_28;
  long local_20;
  undefined *local_18;
  
  local_29 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableData_026ce660;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithLength__026a3368,param_2);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_mutableBytes_026a3370);
    for (local_48 = 0; local_48 < local_28; local_48 = local_48 + 1) {
      puVar1[local_48] = *(byte *)(local_20 + local_48) ^ local_29 ^ (char)local_48 * '\x11';
    }
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = puVar1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

