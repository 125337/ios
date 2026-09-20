// FUN_00772df8 @ 00772df8

void FUN_00772df8(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  double local_d8;
  double local_88;
  undefined *local_68;
  undefined *local_60 [3];
  double local_48;
  undefined **local_40;
  double local_38;
  long local_30;
  long local_28;
  
  DAT_028cc960 = 0;
  if (DAT_028cc950 <= 0.0) {
    local_88 = *(double *)(param_1 + 0x20);
  }
  else {
    local_88 = DAT_028cc950;
  }
  local_38 = local_88;
  local_d8 = 0.0;
  DAT_028cc950 = 0.0;
  ppuVar1 = &PTR___NSConcreteGlobalBlock_0257fc28;
  local_30 = param_1;
  local_28 = param_1;
  _objc_retainBlock();
  local_40 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_sponsorGateThresholdYuan_026a7e88);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
  _objc_retainAutoreleasedReturnValue();
  local_68 = (undefined *)0x0;
  local_60[0] = puVar2;
  FUN_00771954();
  if (local_d8 + DAT_02323db0 < local_48) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_performWCRefineConfigBackupToSan_026a7e90);
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (((local_38 <= 0.0) || (local_d8 <= 0.0)) || (ABS(local_38 - local_d8) <= DAT_02323d38)) {
    if (0.0 < local_38) {
      local_d8 = local_38;
    }
    ppuVar1 = local_40;
    (*(code *)local_40[2])(local_d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_bRbU_);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_68;
    local_68 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
  }
  else {
    ppuVar1 = local_40;
    (*(code *)local_40[2])(local_38);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = local_40;
    (*(code *)local_40[2])(local_d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__g_kbU);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_68;
    local_68 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(ppuVar3);
    (*(code *)PTR__objc_release_02578630)(ppuVar1);
  }
  puVar4 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_stringByAppendingString__0269d398,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_68;
  local_68 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_a_bU,
             local_68,&cf_bwSN,&PTR___NSConcreteGlobalBlock_0257fc48);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(local_60,0);
  _objc_storeStrong(&local_40,0);
  return;
}

