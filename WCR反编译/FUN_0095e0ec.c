// FUN_0095e0ec @ 0095e0ec

byte FUN_0095e0ec(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_58;
  bool local_41;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_009463a8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_file);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_message);
    if ((uVar1 & 1) == 0) {
      local_11 = false;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgType);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_41 = (uVar2 & 1) == 0;
      if (local_41) {
        local_58 = 0;
      }
      else {
        local_40 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_msgType);
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      local_41 = !local_41;
      if (local_41) {
        (*(code *)PTR__objc_release_02578630)(local_40);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_11 = true;
      if ((((local_58 != 0x22) && (local_11 = true, local_58 != 0x2b)) &&
          (local_11 = true, local_58 != 0x2f)) && (local_11 = true, local_58 != 0x31)) {
        local_11 = local_58 == 0x3e;
      }
    }
  }
  else {
    local_11 = true;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

