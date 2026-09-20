// FUN_007652e8 @ 007652e8

void FUN_007652e8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint local_ac;
  uint local_84;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = _WCRefineTextStyleHomeFold;
  local_28 = param_2;
  FUN_0075ede8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = _WCRefineTextStyleHomeCount;
  local_30 = uVar1;
  FUN_0075ede8();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_20;
  local_48 = uVar2;
  FUN_00764ec4();
  uVar1 = _WCRefineTextStyleHomeFold;
  if ((uVar3 & 1) == 0) {
    uVar2 = local_20;
    FUN_00762ca8(local_20,0);
    uVar1 = _WCRefineTextStyleHomeCount;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar1 = local_40;
      local_84 = 0;
      if ((uVar3 & 1) != 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_84 = 0;
        if ((uVar1 & 1) != 0) {
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          local_84 = 0;
          if (uVar1 != 0) {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,local_40)
            ;
            local_84 = (uint)uVar1;
          }
        }
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar1 = _WCRefineTextStyleHomeFold;
      if ((local_84 & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_ac = 0;
        if ((uVar2 & 1) != 0) {
          uVar2 = local_20;
          FUN_00764fb0(local_20,local_48);
          local_ac = (uint)uVar2;
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        local_18 = _WCRefineTextStyleHomeNoteLine1;
        uVar1 = _WCRefineTextStyleHomeCount;
        if ((local_ac & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

