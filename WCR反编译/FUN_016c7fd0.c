// FUN_016c7fd0 @ 016c7fd0

void FUN_016c7fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_b8;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_20 = (cfstringStruct *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (local_18 < 1) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b8 = &cf__g_R0RS_uW_SO;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_b8);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    if (local_20 == (cfstringStruct *)0x0) {
      local_70 = &cf___;
    }
    else {
      local_70 = local_20;
    }
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setFontBeautifyFontPath__026b2da0,local_70);
    if (local_28 == (cfstringStruct *)0x0) {
      local_80 = &cf___;
    }
    else {
      local_80 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setFontBeautifyPostScriptName__026b2da8,local_80);
    FUN_016cb00c();
    puVar1 = PTR_WCRefineHelper_026ce000;
    if (local_18 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_W_SO__eQv__O_u);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__eQbR);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

