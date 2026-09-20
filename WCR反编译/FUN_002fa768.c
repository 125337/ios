// FUN_002fa768 @ 002fa768

void FUN_002fa768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 local_a0;
  int local_8c;
  long local_58;
  long local_50;
  int local_44;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  uVar1 = local_20;
  local_38 = param_2;
  local_30 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nonretainedObjectValue_026a1f98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_44 = 1;
  }
  else {
    FUN_002fa9a0(local_40,0);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_hidden);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_28;
    local_50 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_alpha);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_58 = lVar4;
    if (local_50 == 0) {
      local_8c = 0;
    }
    else {
      lVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_boolValue_026ca540);
      local_8c = (int)lVar3;
    }
    FUN_002fad14(local_8c,uVar1,local_8c != 0);
    uVar1 = local_40;
    if (local_58 == 0) {
      local_a0 = 0x3ff0000000000000;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_doubleValue_026ca608);
      local_a0 = param_1;
    }
    FUN_002fade8(local_a0,uVar1);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (local_44 == 0) {
    local_44 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

