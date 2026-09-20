// FUN_00f0a084 @ 00f0a084

void FUN_00f0a084(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *local_118;
  ulong local_d8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  int local_78;
  byte local_71;
  ulong local_70;
  long local_68;
  bool local_59;
  ulong local_58;
  ulong local_50;
  long local_48;
  cfstringStruct *local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_38;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_59 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_d8 = 0;
  }
  else {
    local_d8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_d8;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_d8;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  lVar7 = *(long *)(param_1 + 0x28);
  uVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_raw_url);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_trimmed__026aba28);
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar7;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_71 = 0;
  bVar1 = true;
  if (local_30 == 200) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_code)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = true;
    if (uVar2 == 200) {
      lVar7 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      bVar1 = lVar7 == 0;
    }
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  lVar7 = local_68;
  puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
  if (bVar1) {
    if (local_40 == (cfstringStruct *)0x0) {
      local_118 = &cf_O;
    }
    else {
      local_118 = local_40;
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,local_118);
    local_78 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_normalizedURL_026aba48);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLWithString__026a16d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLWithString_relativeToURL__026abc50,lVar7);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    puVar3 = local_80;
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_00f0a5d8;
    local_a0 = &DAT_02582528;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    lVar7 = local_68;
    local_88 = *(undefined8 *)(param_1 + 0x28);
    local_90 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,PTR_s_performMethod_url_headers_body_k_026abb38,&cf_GET,puVar3,0,0,0,&local_b8)
    ;
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_80,0);
    local_78 = 0;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_50,0);
  if (local_78 == 0) {
    local_78 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

