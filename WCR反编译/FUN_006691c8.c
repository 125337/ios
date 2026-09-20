// FUN_006691c8 @ 006691c8

void FUN_006691c8(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_20;
  double local_18;
  
  _CFAbsoluteTimeGetCurrent();
  if (((0.3 < param_1 - DAT_028cbc88) || (DAT_028cbab0 == (undefined *)0x0)) ||
     (DAT_028cbab8 == (undefined *)0x0)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_20 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_quoteMeMessageTipRedStrongCustom_026a6370);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_00668c90();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028cbab0;
    DAT_028cbab0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_newFileMessageTipRedStrongCustom_026a6368);
    puVar3 = puVar2;
    FUN_00668c90(puVar2,&cf_eeN);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028cbab8;
    DAT_028cbab8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    DAT_028cbc88 = local_18;
    _objc_storeStrong(&local_20,0);
  }
  return;
}

