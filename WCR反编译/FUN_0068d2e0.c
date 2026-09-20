// FUN_0068d2e0 @ 0068d2e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0068d2e0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_260;
  ulong local_250;
  ulong local_240;
  undefined *local_230;
  undefined *local_220;
  undefined *local_210;
  ulong local_200;
  ulong local_1f0;
  ulong local_1e8;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  ulong local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  ulong local_170;
  ulong local_168;
  undefined *local_160;
  ulong local_158;
  undefined4 local_150;
  ulong local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
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
  local_140 = 0;
  _objc_storeStrong(&local_140,param_1);
  uVar9 = local_140;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar8);
  if ((uVar9 & 1) == 0) {
    local_150 = 1;
  }
  else {
    uVar9 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_mutableCopy_0269d8a0);
    local_b8 = &cf_shopname;
    local_70 = &cf_shop_name;
    local_b0 = &cf_shopName;
    local_68 = &cf_shop_name;
    local_a8 = &cf_merchant_id;
    local_60 = &cf_merchant_identifier;
    local_a0 = &cf_merchantId;
    local_58 = &cf_merchant_identifier;
    local_98 = &cf_link_number;
    local_50 = &cf_number;
    local_90 = &cf_qrcode_index;
    local_48 = &cf_number;
    local_88 = &cf_link_index;
    local_40 = &cf_number;
    local_80 = &cf_seq;
    local_38 = &cf_number;
    local_78 = &cf_index;
    local_30 = &cf_number;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_158 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_b8,9);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = local_158;
    local_190 = PTR___NSConcreteGlobalBlock_02578658;
    local_188 = 0xd0800000;
    local_184 = 0;
    local_180 = FUN_0068edb0;
    local_178 = &DAT_0257e9f8;
    local_160 = puVar8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar11 = local_140;
    local_170 = uVar9;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar8,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_190);
    puVar8 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    local_138 = &cf_sid;
    local_f8 = &cf_wcr_payment_link_sjt_sid;
    local_130 = &cf_v;
    local_f0 = &cf_wcr_payment_link_sjt_version;
    local_128 = &cf_version;
    local_e8 = &cf_wcr_payment_link_sjt_version;
    local_120 = &cf_receipt_id;
    local_e0 = &cf_wcr_payment_link_sjt_receipt_id;
    local_118 = &cf_account_type;
    local_d8 = &cf_wcr_payment_link_sjt_account_type;
    local_110 = &cf_operator_role;
    local_d0 = &cf_wcr_payment_link_sjt_operator_role;
    local_108 = &cf_merchant_identifier;
    local_c8 = &cf_wcr_payment_link_sjt_merchant_id;
    local_100 = &cf_shop_name;
    local_c0 = &cf_wcr_payment_link_sjt_shop_name;
    puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_198 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f8,&local_138,8);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1a0 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = local_158;
    puVar10 = local_1a0;
    local_1e0 = PTR___NSConcreteGlobalBlock_02578658;
    local_1d8 = 0xd0800000;
    local_1d4 = 0;
    local_1d0 = FUN_0068f0b4;
    local_1c8 = &DAT_0257ea18;
    local_1a8 = puVar8;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_198;
    local_1c0 = uVar9;
    (*(code *)PTR__objc_retain_02578638)();
    puVar8 = local_1a8;
    local_1b8 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar10,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_1e0);
    uVar9 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_number);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    FUN_0067de38();
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = uVar11;
    (*(code *)PTR__objc_release_02578630)(uVar9);
    FUN_00680c80(local_1e8);
    bVar4 = false;
    bVar7 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    uVar9 = local_1e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_length_0269cca0);
    bVar6 = false;
    if (uVar9 != 0) {
      local_1f0 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_receipt_id);
      _objc_retainAutoreleasedReturnValue();
      bVar4 = true;
      local_200 = local_1f0;
      FUN_0068b784();
      _objc_retainAutoreleasedReturnValue();
      bVar7 = true;
      uVar9 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar6 = false;
      if (uVar9 != 0) {
        local_210 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        local_220 = local_210;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_230 = local_220;
        FUN_0067de38();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        puVar8 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar6 = puVar8 == (undefined *)0x0;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_230);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_220);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_210);
    }
    if (bVar7) {
      (*(code *)PTR__objc_release_02578630)(local_200);
    }
    if (bVar4) {
      (*(code *)PTR__objc_release_02578630)(local_1f0);
    }
    if (bVar6) {
      puVar8 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar8);
    }
    uVar9 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
    _objc_retainAutoreleasedReturnValue();
    FUN_00680df8();
    (*(code *)PTR__objc_release_02578630)(uVar9);
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    uVar9 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_receipt_id);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    FUN_0068b784();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar7 = false;
    if (uVar12 != 0) {
      local_240 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      bVar7 = true;
      if (local_240 == 0) {
        local_250 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_theme_type);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar7 = true;
        if (local_250 == 0) {
          local_260 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,&cf_theme_id);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          bVar7 = local_260 != 0;
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_260);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_250);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_240);
    }
    (*(code *)PTR__objc_release_02578630)(uVar11);
    (*(code *)PTR__objc_release_02578630)(uVar9);
    if (bVar7) {
      FUN_0068f7c8(local_158);
    }
    puVar8 = local_1a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_count_0269cfe0);
    _objc_storeStrong(puVar8,&local_1e8);
    _objc_storeStrong(&local_1b0,0);
    _objc_storeStrong(&local_1b8,0);
    _objc_storeStrong(&local_1c0,0);
    _objc_storeStrong(&local_1a8,0);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    local_150 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

