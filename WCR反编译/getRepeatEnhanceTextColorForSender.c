// getRepeatEnhanceTextColorForSender @ 0169a928

/* getRepeatEnhanceTextColorForSender(bool) */

void getRepeatEnhanceTextColorForSender(bool param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_178;
  undefined *local_128;
  undefined *local_100;
  undefined *local_d8;
  undefined *local_c8;
  undefined *local_b8;
  undefined *local_a8;
  undefined *local_98;
  undefined *local_88;
  undefined *local_78;
  undefined *local_68;
  undefined *local_58;
  undefined *local_48;
  undefined *local_30;
  byte local_22;
  byte local_21;
  
  local_21 = param_1;
  local_22 = param_1;
  FUN_0169b20c();
  local_30 = (undefined *)0x0;
  if ((local_21 & 1) == 0) {
    bVar1 = (local_22 & 1) == 0;
    if (bVar1) {
      local_a8 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_128 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_128;
    }
    else {
      local_88 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_128 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_128;
    }
    _objc_storeStrong(&local_30,local_128);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_98);
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
  }
  else {
    bVar1 = (local_22 & 1) == 0;
    if (bVar1) {
      local_68 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_100;
    }
    else {
      local_48 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_100;
    }
    _objc_storeStrong(&local_30,local_100);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_58);
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
  }
  if ((local_30 == (undefined *)0x0) && ((local_22 & 1) != 0)) {
    if ((local_21 & 1) == 0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_30 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_30 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  if (local_30 == (undefined *)0x0) {
    bVar1 = (local_22 & 1) == 0;
    local_178 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_178;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_178;
    }
    _objc_storeStrong(&local_30,local_178);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
  }
  puVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

