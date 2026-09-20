// FUN_00f7f2b8 @ 00f7f2b8

byte FUN_00f7f2b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte local_4c;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_retcode);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_28 = puVar2;
  if (((puVar2 == &DAT_0000270f) || (puVar2 == (undefined *)0xfffffffffffffffe)) ||
     (puVar2 == (undefined *)0xfffffffffffffffd)) {
    local_11 = 1;
    local_2c = 1;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_retmsg);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    FUN_00f7e630();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_Q__O);
    local_4c = 1;
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_Q___8_);
      local_4c = 1;
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_e);
        local_4c = 1;
        if (((ulong)puVar1 & 1) == 0) {
          puVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_containsString__0269d0b0,&cf__eN_jWWNS_u);
          local_4c = (byte)puVar1;
        }
      }
    }
    local_11 = local_4c & 1;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

