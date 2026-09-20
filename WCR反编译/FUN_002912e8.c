// FUN_002912e8 @ 002912e8

void FUN_002912e8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_98;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50 [3];
  undefined *local_38;
  undefined *local_30;
  undefined8 *local_28;
  
  puVar1 = DAT_028c95a8;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c95a8,PTR_s_copy_0269d150);
  local_30 = puVar1;
  FUN_00291af4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_navigationContrioller_0269d628);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 0;
    local_98 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_98 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_98;
    }
    local_61 = puVar1 == (undefined *)0x0;
    FUN_00291da0();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_98;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_58 == (undefined *)0x0) {
      puVar1 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar1;
      while (local_70 != (undefined *)0x0 && local_58 == (undefined *)0x0) {
        puVar2 = local_70;
        FUN_00291da0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_58;
        local_58 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_parentViewController_0269e500);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_70;
        local_70 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _objc_storeStrong(&local_70,0);
    }
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_contactFromMsgViewController__0269d468,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if ((puVar1 == (undefined *)0x0) &&
       (puVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638),
       ((ulong)puVar1 & 1) != 0)) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsUsrName_0269d638);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_30;
      local_30 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if ((puVar1 == (undefined *)0x0) && (local_38 == (undefined *)0x0)) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_currentChatContactFromTopViewCon_026a1800);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_38;
      local_38 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
      if (((ulong)puVar1 & 1) != 0) {
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_30;
        local_30 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(local_50,0);
  }
  puVar1 = local_30;
  if (local_28 != (undefined8 *)0x0) {
    _objc_retainAutorelease();
    *local_28 = puVar1;
  }
  puVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

