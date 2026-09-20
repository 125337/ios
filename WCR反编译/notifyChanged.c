// notifyChanged @ 01e2dbdc

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatURLSchemeViewController::notifyChanged(ID param_1,SEL param_2)

{
  _WCRSuperFloatRefreshActions();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _WCRSuperFloatNotifySettingsChanged();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadTableData_0269dca8);
  return;
}

