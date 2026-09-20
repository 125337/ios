// FUN_00689d6c @ 00689d6c

void FUN_00689d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  long local_a8;
  undefined8 local_a0;
  ulong local_98;
  long local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = 0;
  local_90 = param_1;
  _objc_storeStrong(&local_98);
  uVar1 = local_98;
  local_a8 = param_1;
  local_a0 = param_3;
  FUN_00689588(local_98,param_3);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_98;
    FUN_0068a42c();
    if ((uVar1 & 1) == 0) {
      pcVar2 = &cf_checkoccupation;
      FUN_0068a554(&cf_checkoccupation,local_98,local_a0);
      _objc_retainAutoreleasedReturnValue();
      FUN_00689ab4(0,pcVar2,*(undefined8 *)(param_1 + 0x38));
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_b8 = 1;
    }
    else {
      FUN_00680df8(*(undefined8 *)(param_1 + 0x20));
      FUN_00689ab4(1,&cf___,*(undefined8 *)(param_1 + 0x38));
      local_b8 = 1;
    }
  }
  else {
    local_88 = &cf_account_type;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_80 = &cf_operator_role;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_merchant_identifier;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_50 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_70 = &cf_receipt_id;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    local_48 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_longLongValue_0269d5e0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithLongLong__0269d808,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_68 = &cf_modify_sequence;
    puVar8 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_40 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_stringWithFormat__0269cca8,&cf_modify___0f);
    _objc_retainAutoreleasedReturnValue();
    local_60 = &cf_modify_link_qrcode;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    local_38 = puVar9;
    FUN_0068ae70();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_88,6);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar10;
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar9 = local_c0;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_0068b310;
    local_d8 = &DAT_0257e968;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    local_d0 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = uVar4;
    FUN_00689c84(&cf_linkqrcode_modify,puVar9,&local_f0);
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c0,0);
    local_b8 = 0;
  }
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

