// FUN_010db958 @ 010db958

byte FUN_010db958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint local_64;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (lVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___Enabled);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_20;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,puVar1);
    _objc_retainAutoreleasedReturnValue();
    local_64 = 0;
    if (uVar2 != 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,local_38);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_64 = (uint)uVar5 ^ 1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_64 & 1) == 0) {
      uVar2 = local_20;
      FUN_010da158();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = (byte)uVar4 & 1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    else {
      local_11 = 0;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

