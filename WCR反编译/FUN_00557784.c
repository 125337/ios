// FUN_00557784 @ 00557784

void FUN_00557784(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_38 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_00557e20();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectForKeyedSubscript__0269d098,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) == 0) {
      local_18 = (undefined *)0x0;
      local_38 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,
                 PTR_s_unarchiveObjectWithData__026a4f98,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      local_18 = local_50;
      if (((ulong)puVar3 & 1) == 0) {
        local_18 = (undefined *)0x0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_38 = 1;
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

