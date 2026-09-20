// isBetaPluginVersion @ 00fc1538

/* Function Stack Size: 0x10 bytes */

bool WCRefineHelper::isBetaPluginVersion(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     puVar1 == (undefined *)0x0)) {
    local_11 = 0;
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)puVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

