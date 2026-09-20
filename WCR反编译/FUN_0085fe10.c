// FUN_0085fe10 @ 0085fe10

void FUN_0085fe10(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_18;
  
  uVar2 = DAT_028cd070;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = uVar2;
  _objc_storeStrong(&DAT_028cd070);
  _objc_storeStrong(&DAT_028cd078,0);
  _objc_storeStrong(&DAT_028cd080,0);
  _objc_storeStrong(&DAT_028cd088,0);
  DAT_028cd0d0 = 0;
  FUN_008601f8();
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_configuration_026a1de8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_configuration_026a1de8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stopLoading_026a8e68);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeFromSuperview_026ca800);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

