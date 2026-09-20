// openGameWebsite @ 01a3a394

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::openGameWebsite(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  ID IVar3;
  char *local_38;
  char *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
             &cf_https___apt_25mao_com_wxgame_);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "MMWebViewController";
  local_28 = puVar1;
  _objc_getClass();
  local_30 = pcVar2;
  if (pcVar2 != (char *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar3 = local_18;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

