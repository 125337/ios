// FUN_017a6c1c @ 017a6c1c

void FUN_017a6c1c(long param_1,undefined8 param_2)

{
  bool bVar1;
  char *pcVar2;
  char *local_38;
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _WCRefinePreferredPluginHubViewController();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 == 0) {
    local_2c = 1;
  }
  else {
    if (DAT_028e41d8 == (char *)0x0) {
      pcVar2 = "WCRefineHelper";
      _objc_getClass();
      DAT_028e41d8 = pcVar2;
    }
    pcVar2 = DAT_028e41d8;
    _objc_retainAutoreleaseReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    local_38 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = pcVar2 != (char *)0x0;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (bVar1) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

