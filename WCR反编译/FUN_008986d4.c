// FUN_008986d4 @ 008986d4

undefined8 FUN_008986d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  FUN_008a28c0();
  uVar1 = (uint)uVar2;
  if (((uVar2 & 1) != 0) && (FUN_0089ccc0(), (uVar1 & 1) != 0)) {
    local_18 = 0;
    goto LAB_00898904;
  }
  uVar2 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_isEqualToString__0269ccc8,&cf_clicfg_voicetrans_translate_entry),
     (uVar2 & 1) != 0)) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_0088fb40();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_18 = 1;
      goto LAB_00898904;
    }
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_18 = 0;
      goto LAB_00898904;
    }
  }
  uVar5 = local_20;
  (*DAT_028cdbf8)(local_20,local_28,local_30,param_4);
  local_18 = uVar5;
LAB_00898904:
  _objc_storeStrong(&local_30,0);
  return local_18;
}

