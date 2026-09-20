// configureMultiSelect:preselect: @ 01ac1154

/* Function Stack Size: 0x20 bytes */

bool WCRGroupListViewController::configureMultiSelect_preselect_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar2 = local_30;
  pcVar1 = &cf_beginMultiSelect;
  _NSSelectorFromString(&cf_beginMultiSelect);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
  uVar3 = local_30;
  if ((uVar2 & 1) == 0) {
    pcVar1 = &cf_onShowMultiSelect_;
    _NSSelectorFromString(&cf_onShowMultiSelect_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar1);
    uVar2 = local_30;
    if ((uVar3 & 1) != 0) {
      pcVar1 = &cf_onShowMultiSelect_;
      _NSSelectorFromString(&cf_onShowMultiSelect_);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,pcVar1,0);
    }
  }
  else {
    pcVar1 = &cf_beginMultiSelect;
    _NSSelectorFromString(&cf_beginMultiSelect);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,pcVar1);
  }
  uVar2 = local_30;
  FUN_01a9c574(local_30,&cf_m_selectView);
  _objc_retainAutoreleasedReturnValue();
  local_11 = uVar2 != 0;
  local_40 = uVar2;
  if ((bool)local_11) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_preselectMembers_inSessionSelect_026bdf28,local_38,local_30);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

