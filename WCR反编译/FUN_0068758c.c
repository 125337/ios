// FUN_0068758c @ 0068758c

void FUN_0068758c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 *local_d0;
  uint local_c8;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_1);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_2);
  puVar3 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar3,param_3);
  FUN_00684880();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_00689ab4(0,&cf____gO_1YHe0p0MRS0Sb,local_b0);
    local_c8 = 1;
  }
  else {
    FUN_0068732c();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    if (puVar3 != (undefined8 *)0x0) {
      local_98 = &cf_account_type;
      puVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_90 = &cf_operator_role;
      puVar5 = local_b8;
      local_60 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_88 = &cf_merchant_identifier;
      puVar6 = local_b8;
      local_58 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_80 = &cf_shop_name;
      local_48 = local_d0;
      local_78 = &cf_remark;
      local_40 = local_a8;
      local_70 = &cf_check_type;
      local_38 = &cf_E_CHECK_OCCUPATION_CHECK_TYPE_MODIFY;
      local_68 = &cf_receipt_id;
      local_30 = local_a0;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_50 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = puVar7;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar2 = local_a8;
      puVar7 = local_d8;
      local_118 = PTR___NSConcreteStackBlock_02578660;
      local_110 = 0xc2000000;
      local_10c = 0;
      local_108 = FUN_00689d6c;
      local_100 = &DAT_0257e998;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_b0;
      local_f8 = uVar2;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_b8;
      local_e0 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_a0;
      local_f0 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = uVar1;
      FUN_00689c84(&cf_payshortlink_checkoccupation,puVar7,&local_118);
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_d8,0);
    }
    else {
      FUN_00689ab4(0,&cf_lggHe_0p0MRS0Sb,local_b0);
    }
    local_c8 = (uint)(puVar3 == (undefined8 *)0x0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

