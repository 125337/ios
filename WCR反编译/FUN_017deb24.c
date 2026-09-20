// FUN_017deb24 @ 017deb24

void FUN_017deb24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_50;
  int local_44;
  long local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = param_1 + 0x28;
  local_38 = param_1;
  _objc_loadWeakRetained();
  local_40 = lVar1;
  if (lVar1 == 0) {
    local_44 = 1;
  }
  else {
    if (local_20 == (cfstringStruct *)0x0) {
      local_78 = &cf___;
    }
    else {
      local_78 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_78;
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,&cf_chatReplyPrompt)
    ;
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      puVar3 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resignFirstResponder_0269ea18);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcrOfferSaveAsPersona__026b5458,local_50);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (local_44 == 0) {
    local_44 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

