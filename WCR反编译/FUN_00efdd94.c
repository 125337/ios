// FUN_00efdd94 @ 00efdd94

byte FUN_00efdd94(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  undefined8 local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00eee23c();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)uVar4 & 1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

