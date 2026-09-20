// FUN_003694c4 @ 003694c4

void FUN_003694c4(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long local_80;
  char *local_50;
  byte local_41;
  long local_40;
  byte local_31;
  long local_30;
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 0;
    local_41 = 0;
    local_80 = lVar1;
    if (lVar1 == 0) {
      local_80 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_session_0269d000);
      _objc_retainAutoreleasedReturnValue();
      local_31 = 1;
      local_30 = local_80;
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_80;
    }
    local_41 = lVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_80;
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if ((local_31 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_30);
    }
    (*(code *)PTR__objc_release_02578630)(lVar1);
    pcVar2 = "MainFrameCellDataManager";
    _objc_getClass();
    FUN_00392f1c();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_removeCellData_;
    local_50 = pcVar2;
    _NSSelectorFromString();
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if ((lVar1 != 0) &&
       (pcVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3),
       ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar3,local_28);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCellData__026a2818);
    puVar4 = PTR_WCRefineGroupDataProvider_026ce540;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_nativeCellDataForSession__026a2810);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCellData__026a2818);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

