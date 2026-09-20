// FUN_00684880 @ 00684880

void FUN_00684880(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *pcVar12;
  undefined *puVar13;
  cfstringStruct *local_240;
  cfstringStruct *local_200;
  cfstringStruct *local_1a0;
  bool local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_108;
  bool local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_e8;
  bool local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
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
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_stringForKey__026a33a0,&cf_wcr_payment_link_sjt_sid);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    FUN_00686a7c();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_b0;
    local_b0 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_setObject_forKey__026ca9e8,local_b0,&cf_wcr_payment_link_sjt_sid);
    }
  }
  pcVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_a0 = (undefined *)0x0;
  }
  else {
    local_98 = &cf_sid;
    local_60 = local_b0;
    local_90 = &cf_v;
    pcVar1 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_stringForKey__026a33a0,&cf_wcr_payment_link_sjt_version);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_0067d82c();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_1a0 = &cf_1_21_7;
    }
    else {
      local_c8 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_stringForKey__026a33a0,&cf_wcr_payment_link_sjt_version);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = local_c8;
      FUN_0067d82c();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_1a0;
    }
    local_d9 = pcVar3 != (cfstringStruct *)0x0;
    local_58 = local_1a0;
    local_88 = &cf_receipt_id;
    pcVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_stringForKey__026a33a0,&cf_wcr_payment_link_sjt_receipt_id);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_0067d82c();
    _objc_retainAutoreleasedReturnValue();
    local_80 = &cf_account_type;
    pcVar5 = local_a8;
    local_50 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_stringForKey__026a33a0,&cf_wcr_payment_link_sjt_account_type);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    FUN_0067d82c();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_200 = &cf_E_ACCOUNT_TYPE_F2F;
    }
    else {
      local_e8 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_stringForKey__026a33a0,&cf_wcr_payment_link_sjt_account_type);
      _objc_retainAutoreleasedReturnValue();
      local_200 = local_e8;
      FUN_0067d82c();
      _objc_retainAutoreleasedReturnValue();
      local_f8 = local_200;
    }
    local_f9 = pcVar7 != (cfstringStruct *)0x0;
    local_48 = local_200;
    local_78 = &cf_operator_role;
    pcVar7 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_stringForKey__026a33a0,&cf_wcr_payment_link_sjt_operator_role);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar7;
    FUN_0067d82c();
    _objc_retainAutoreleasedReturnValue();
    pcVar9 = pcVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar9 == (cfstringStruct *)0x0) {
      local_240 = &cf_E_LINK_QRCODE_OPERATOR_ROLE_MANAGER;
    }
    else {
      local_108 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_stringForKey__026a33a0,&cf_wcr_payment_link_sjt_operator_role);
      _objc_retainAutoreleasedReturnValue();
      local_240 = local_108;
      FUN_0067d82c();
      _objc_retainAutoreleasedReturnValue();
      local_118 = local_240;
    }
    local_119 = pcVar9 != (cfstringStruct *)0x0;
    local_40 = local_240;
    local_70 = &cf_merchant_identifier;
    pcVar9 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_stringForKey__026a33a0,&cf_wcr_payment_link_sjt_merchant_id);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar9;
    FUN_0067d82c();
    _objc_retainAutoreleasedReturnValue();
    local_68 = &cf_shop_name;
    pcVar11 = local_a8;
    local_38 = pcVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_stringForKey__026a33a0,&cf_wcr_payment_link_sjt_shop_name);
    _objc_retainAutoreleasedReturnValue();
    pcVar12 = pcVar11;
    FUN_0067d82c();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = pcVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar13;
    (*(code *)PTR__objc_release_02578630)(pcVar12);
    (*(code *)PTR__objc_release_02578630)(pcVar11);
    (*(code *)PTR__objc_release_02578630)(pcVar10);
    (*(code *)PTR__objc_release_02578630)(pcVar9);
    if (local_119) {
      (*(code *)PTR__objc_release_02578630)(local_118);
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    if (local_f9) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if (local_d9) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_a0);
  return;
}

