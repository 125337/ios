// FUN_00f0d060 @ 00f0d060

/* WARNING: Type propagation algorithm not settling */

void FUN_00f0d060(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_c0;
  ulong local_58;
  undefined *local_50;
  ulong local_48;
  long local_40;
  ulong local_38 [4];
  long local_18;
  
  local_38[2] = 0;
  local_38[3] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_38 + 2,param_3);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_4);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_5);
  local_48 = 0;
  uVar2 = local_38[2];
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38[2],PTR_s_length_0269cca0);
  if (uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_38[2],0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)puVar3 & 1) != 0) {
      _objc_storeStrong(&local_48,local_50);
    }
    _objc_storeStrong(&local_50,0);
  }
  local_58 = 0;
  if (local_38[0] == 0) {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar6 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    bVar1 = false;
    if ((uVar6 & 1) != 0) {
      uVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_code);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar5 != 200;
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (bVar1) {
      uVar6 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_58;
      local_58 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    else if (((local_38[3] != 200) && (local_38[3] != 0xc9)) && (local_38[3] != 0xcc)) {
      uVar6 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_describeHTTPError_status_body__026abba0,0,local_38[3],local_38[2]);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_58;
      local_58 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  else {
    uVar6 = local_38[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_58;
    local_58 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (local_48 == 0) {
      local_c0 = *(ulong *)PTR____NSDictionary0___02578288;
    }
    else {
      local_c0 = local_48;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
              (*(long *)(param_1 + 0x20),local_38[3],local_c0,local_58);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

