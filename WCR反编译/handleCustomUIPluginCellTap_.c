// handleCustomUIPluginCellTap: @ 014ca1d0

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchManager::handleCustomUIPluginCellTap_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_58 [3];
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_userInfo_0269f138);
  if ((uVar1 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_userInfo);
    _objc_retainAutoreleasedReturnValue();
    local_58[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_vcClass)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar2 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_targetTitle);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar2 = local_58[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_sectionTitle);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_40 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(local_58,0);
  }
  if (local_30 == 0) {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,"vcClass");
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_38 == 0) {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,"targetTitle");
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_40 == 0) {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,"sectionTitle");
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_40 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if ((local_30 == 0) ||
     (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showAlertWithTitle_message__026af680,&::cf_format_s_,&cf_elnx_Sb);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcRefineOpenPlugin_targetTitle_s_026af688,local_30,local_38,local_40);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

