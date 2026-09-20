// FUN_008990b0 @ 008990b0

void FUN_008990b0(cfstringStruct *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  cfstringStruct *pcVar4;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_isEqualToString__0269ccc8,&cf_finder_friend_tab_high_entropy),
     (uVar2 & 1) != 0)) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_0088fb40();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_1;
      goto LAB_008992d0;
    }
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_0;
      goto LAB_008992d0;
    }
  }
  pcVar4 = local_20;
  (*DAT_028cdc20)(local_20,local_28,local_30,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar4;
LAB_008992d0:
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

