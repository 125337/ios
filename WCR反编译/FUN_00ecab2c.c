// FUN_00ecab2c @ 00ecab2c

byte FUN_00ecab2c(undefined8 param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((uVar2 == 0) ||
     (uVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_native),
     (uVar2 & 1) != 0)) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_sel_);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_title_),
       (uVar2 & 1) == 0)) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,&cf_id_);
      if ((uVar2 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringFromIndex__0269d120,3);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        bVar1 = (byte)uVar3;
        FUN_00eca784();
        local_11 = (bVar1 ^ 1) & 1;
      }
    }
    else {
      local_11 = 1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_11 = 0;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

