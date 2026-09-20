// FUN_017aae80 @ 017aae80

void FUN_017aae80(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if (DAT_028e41f0 == (char *)0x0) {
    pcVar1 = "ThemeExchangeViewController";
    _objc_getClass();
    DAT_028e41f0 = pcVar1;
  }
  pcVar1 = DAT_028e41f0;
  _objc_retainAutoreleaseReturnValue();
  _objc_alloc_init();
  uVar2 = local_18;
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

