// FUN_017b64ac @ 017b64ac

void FUN_017b64ac(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined1 local_49;
  long local_48;
  long local_30;
  long local_28;
  
  lVar3 = *(long *)(param_1 + 0x20);
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_nicknameLabel_026b4ac0);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  bVar2 = true;
  uVar1 = lVar3 != 0;
  if ((bool)uVar1) {
    lVar4 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_versionLabel_026b4ac8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar4 == 0;
    local_49 = uVar1;
    local_48 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    uVar1 = local_49;
  }
  local_49 = uVar1;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if (!bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = &cf_WCRefine;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = &cf_Version_;
    uVar5 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_nicknameLabel_026b4ac0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar8 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_versionLabel_026b4ac8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar8);
    if (((uVar7 & 1) == 0) || ((uVar5 & 1) == 0)) {
      puVar9 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar9);
      puVar9 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_format_s_,&cf_R_9ecN_OXf,&cf__Nw,&PTR___NSConcreteGlobalBlock_02588ee0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar9);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  return;
}

