// FUN_01562e38 @ 01562e38

void FUN_01562e38(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  uint local_54;
  undefined *local_48;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  FUN_01563370();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  if (param_1 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    local_30 = (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_inputToolView_0269d0e8);
    if (((ulong)param_1 & 1) != 0) {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_inputToolView_0269d0e8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_30 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (local_30 == (undefined *)0x0) {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_inputToolView_0269d0f0);
      if (((ulong)puVar2 & 1) != 0) {
        puVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_inputToolView_0269d0f0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_30;
        local_30 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
    }
    puVar2 = local_20;
    if (local_30 == (undefined *)0x0) {
      pcVar3 = "MMInputToolView";
      _objc_getClass("MMInputToolView");
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,pcVar3);
      if (((ulong)puVar2 & 1) != 0) {
        _objc_storeStrong(&local_30,local_20);
      }
    }
    local_39 = 0;
    local_54 = 0;
    if (local_30 == (undefined *)0x0) {
      puVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_38 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      local_54 = (uint)puVar2;
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if ((local_54 & 1) != 0) {
      puVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      FUN_01563634();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_30 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if (local_30 == (undefined *)0x0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar4 & 1) != 0) {
        puVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        FUN_01563634();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_30;
        local_30 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _objc_storeStrong(&local_48,0);
    }
    puVar2 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

