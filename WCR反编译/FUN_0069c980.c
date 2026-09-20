// FUN_0069c980 @ 0069c980

byte FUN_0069c980(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined *local_30;
  int local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_0069ccc0;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_cN);
  if (((uVar2 & 1) != 0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_cN6e_),
     (uVar2 & 1) != 0)) {
    local_11 = 1;
    local_24 = 1;
    goto LAB_0069ccc0;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_Plugin);
  if (((uVar2 & 1) != 0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_Plugins),
     (uVar2 & 1) != 0)) {
    local_11 = 1;
    local_24 = 1;
    goto LAB_0069ccc0;
  }
  uVar2 = local_20;
  _WCRPluginIconTitleMatches(local_20,&cf_more_plugin_hub);
  if ((uVar2 & 1) != 0) {
    local_11 = 1;
    local_24 = 1;
    goto LAB_0069ccc0;
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_myPageNameCustomEnabled_026a5d18);
  if (((ulong)puVar1 & 1) == 0) {
LAB_0069cc94:
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_customMenuNames_026a5d20);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((((ulong)puVar1 & 1) == 0) ||
        (puVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
        puVar1 == (undefined *)0x0)) ||
       (uVar2 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,local_38),
       (uVar2 & 1) == 0)) {
      local_24 = 0;
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_38,0);
    if (local_24 == 0) goto LAB_0069cc94;
  }
  _objc_storeStrong(&local_30,0);
LAB_0069ccc0:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

