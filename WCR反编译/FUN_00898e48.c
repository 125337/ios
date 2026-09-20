// FUN_00898e48 @ 00898e48

byte FUN_00898e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_isEqualToString__0269ccc8,&cf_finder_friend_tab_high_entropy);
    if ((uVar2 & 1) != 0) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      FUN_0088fb40();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        local_11 = 1;
      }
      else if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        local_11 = 0;
      }
      else {
        uVar4 = local_20;
        (*DAT_028cdc18)(local_20,local_28,local_30,local_38);
        local_11 = (byte)uVar4 & 1;
      }
      goto LAB_00899078;
    }
  }
  uVar4 = local_20;
  (*DAT_028cdc18)(local_20,local_28,local_30,local_38);
  local_11 = (byte)uVar4 & 1;
LAB_00899078:
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

