// FUN_00f0c1f8 @ 00f0c1f8

void FUN_00f0c1f8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  cfstringStruct *local_c8;
  ulong local_88;
  ulong local_60;
  long local_58;
  bool local_49;
  ulong local_48;
  ulong local_40;
  long local_38;
  cfstringStruct *local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  uVar3 = local_28;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar5 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_49 = false;
  bVar2 = (uVar5 & 1) == 0;
  if (bVar2) {
    local_88 = 0;
  }
  else {
    local_88 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_88;
  }
  local_49 = !bVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_88;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  lVar6 = *(long *)(param_1 + 0x30);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_token);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_trimmed__026aba28);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar6;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  bVar1 = false;
  bVar2 = false;
  if (local_20 == 200) {
    local_60 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_code)
    ;
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = false;
    if (uVar3 == 200) {
      lVar6 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      bVar2 = lVar6 != 0;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar2) {
    _objc_storeStrong(&DAT_028e2b20,local_58);
    _objc_storeStrong(&DAT_028e2b28,*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_58,0);
  }
  else {
    if (local_30 == (cfstringStruct *)0x0) {
      local_c8 = &cf_O;
    }
    else {
      local_c8 = local_30;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,local_c8);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

