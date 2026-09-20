// FUN_00688d60 @ 00688d60

void FUN_00688d60(cfstringStruct *param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  qword qVar7;
  qword qVar8;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1a8;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  qword local_e0;
  qword local_d8;
  undefined *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  int local_b4;
  undefined *local_b0 [3];
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined8 local_88;
  ulong local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  local_78 = param_1;
  _objc_storeStrong(&local_80);
  pcVar1 = param_1;
  local_90 = param_1;
  local_88 = param_3;
  FUN_00684880();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_0067d980();
  _objc_retainAutoreleasedReturnValue();
  local_98 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  uVar4 = local_80;
  FUN_00689588(local_80,local_88);
  if (((uVar4 & 1) == 0) ||
     (pcVar1 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
     pcVar1 == (cfstringStruct *)0x0)) {
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    pcVar1 = &cf_list;
    FUN_0068974c(&cf_list,local_80,local_88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_stringWithFormat__0269cca8,&cf__gS0R___g6e>kc0p0MRS0Sb);
    _objc_retainAutoreleasedReturnValue();
    local_b0[0] = puVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    FUN_00689ab4(0,local_b0[0],param_1[1].field1_0x8);
    local_b4 = 1;
    _objc_storeStrong(local_b0,0);
  }
  else {
    FUN_00684880();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar1;
    FUN_0068732c();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_58 = &cf_account_type;
      pcVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_1a8 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_1a8 = &cf___;
      }
      local_40 = local_1a8;
      local_50 = &cf_operator_role;
      pcVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_1c0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1c0 = &cf___;
      }
      local_38 = local_1c0;
      local_48 = &cf_merchant_identifier;
      pcVar3 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_1d8 = &cf___;
      }
      local_30 = local_1d8;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      local_70 = &cf_account_type;
      local_68 = &cf_operator_role;
      local_60 = &cf_merchant_identifier;
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_98;
      puVar5 = local_c8;
      local_108 = PTR___NSConcreteStackBlock_02578660;
      local_100 = 0xc2000000;
      local_fc = 0;
      local_f8 = FUN_00689bfc;
      local_f0 = &DAT_0257e938;
      local_d0 = puVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = pcVar1;
      qVar7 = param_1[1].field0_0x0;
      (*(code *)PTR__objc_retain_02578638)();
      qVar8 = param_1[1].field1_0x8;
      local_e0 = qVar7;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = qVar8;
      FUN_00687b38(&cf_linkqrcodesource_getshopinfo,&cf_GET,puVar6,puVar5,&local_108);
      local_b4 = 1;
      _objc_storeStrong(&local_d8);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
    }
    else {
      FUN_0068758c(local_98,param_1[1].field0_0x0,param_1[1].field1_0x8);
      local_b4 = 0;
    }
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_98,0);
  if (local_b4 == 0) {
    local_b4 = 0;
  }
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

