// FUN_00689588 @ 00689588

byte FUN_00689588(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  local_28 = param_2;
  if (param_2 == 200) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_errcode);
      _objc_retainAutoreleasedReturnValue();
      local_11 = true;
      local_40 = uVar2;
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_integerValue_026ca750);
        local_11 = uVar2 == 0;
      }
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
      goto LAB_00689714;
    }
  }
  local_11 = 0;
  local_38 = 1;
LAB_00689714:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

