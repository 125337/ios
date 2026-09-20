// isCloudHiddenFeatureID: @ 01c90a30

/* Function Stack Size: 0x18 bytes */

bool WCRefinePluginFeatureManagementViewController::isCloudHiddenFeatureID_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  byte local_40;
  ID local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_40 = 0;
  if (lVar1 != 0) {
    local_38 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cloudHiddenFeatureIDs_026c2ab0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = (byte)IVar2;
  }
  local_11 = local_40 & 1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

