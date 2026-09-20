// FUN_019f4648 @ 019f4648

byte FUN_019f4648(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  byte local_50;
  ulong local_48;
  ulong local_28;
  undefined8 local_20;
  byte local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_50 = 0;
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    local_48 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_from)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = (byte)uVar3;
  }
  local_11 = local_50 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

