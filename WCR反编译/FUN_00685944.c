// FUN_00685944 @ 00685944

void FUN_00685944(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  long local_160;
  long local_158;
  undefined *local_150;
  undefined *local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined4 local_128;
  long local_118;
  long local_110;
  long local_108;
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
  long local_70;
  long local_68;
  long local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = 0;
  _objc_storeStrong(&local_108,param_1);
  local_110 = 0;
  _objc_storeStrong(&local_110,param_2);
  lVar1 = local_108;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_118 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_110 != 0) {
      (**(code **)(local_110 + 0x10))(local_110,0,&cf_6e>keHh_Nzz);
    }
    local_128 = 1;
    goto LAB_00686234;
  }
  if ((DAT_028cbd49 & 1) != 0) {
    if (local_110 != 0) {
      (**(code **)(local_110 + 0x10))(local_110,0,&cf_ck_W_vN);
    }
    local_128 = 1;
    goto LAB_00686234;
  }
  FUN_00684880();
  _objc_retainAutoreleasedReturnValue();
  local_130 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_sid);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_0067d980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar3 == 0) {
    if (local_110 != 0) {
      (**(code **)(local_110 + 0x10))(local_110,0,&cf_lTek0R___gO0p0MRS0Sb);
    }
    local_128 = 1;
  }
  else {
    DAT_028cbd49 = 1;
    lVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_receipt_id);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_0067d980();
    _objc_retainAutoreleasedReturnValue();
    local_138 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_130;
    FUN_0068732c();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_138;
    local_140 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
LAB_00685d4c:
      local_b8 = &cf_account_type;
      lVar1 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = &cf_operator_role;
      lVar2 = local_130;
      local_70 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = &cf_merchant_identifier;
      lVar3 = local_130;
      local_68 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = &cf_state;
      local_58 = &cf_E_LINK_QRCODE_STATE_CREATED;
      local_98 = &cf_start_time;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_60 = lVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
      _objc_retainAutoreleasedReturnValue();
      local_90 = &cf_page_size;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_50 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,10);
      _objc_retainAutoreleasedReturnValue();
      local_88 = &cf_need_count;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_48 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_80 = &cf_check_created;
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_40 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_78 = &cf_enable_update_time_sort;
      puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_b8,9);
      _objc_retainAutoreleasedReturnValue();
      local_148 = puVar9;
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      local_100 = &cf_account_type;
      local_f8 = &cf_operator_role;
      local_f0 = &cf_merchant_identifier;
      local_e8 = &cf_state;
      local_e0 = &cf_start_time;
      local_d8 = &cf_page_size;
      local_d0 = &cf_need_count;
      local_c8 = &cf_check_created;
      local_c0 = &cf_enable_update_time_sort;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_100,9);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_110;
      puVar4 = local_148;
      local_180 = PTR___NSConcreteStackBlock_02578660;
      local_178 = 0xc2000000;
      local_174 = 0;
      local_170 = FUN_00688d60;
      local_168 = &DAT_0257e968;
      local_150 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_118;
      local_158 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_160 = lVar1;
      FUN_00687b38(&cf_linkqrcode_list,&cf_GET,puVar5,puVar4,&local_180);
      _objc_storeStrong(&local_160);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_150,0);
      _objc_storeStrong(&local_148,0);
      local_128 = 0;
    }
    else {
      lVar1 = local_140;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
      if (lVar1 == 0) goto LAB_00685d4c;
      FUN_0068758c(lVar1,local_138,local_118,local_110);
      local_128 = 1;
    }
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_138,0);
  }
  _objc_storeStrong(&local_130,0);
LAB_00686234:
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

