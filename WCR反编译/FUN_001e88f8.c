// FUN_001e88f8 @ 001e88f8

void FUN_001e88f8(byte param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_a8;
  undefined *local_90;
  undefined *local_78;
  undefined *local_68;
  undefined *local_58;
  undefined *local_48;
  undefined *local_40 [3];
  undefined1 local_21;
  undefined *local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_11 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  FUN_001d6008();
  local_21 = SUB81(puVar2,0);
  local_40[0] = (undefined *)0x0;
  if ((local_11 & 1) == 0) {
    bVar1 = ((ulong)puVar2 & 1) == 0;
    local_a8 = local_20;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_voiceTranslateColorOtherLight_026a0228);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_a8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_voiceTranslateColorOtherDark_026a0220);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_a8;
    }
    _objc_storeStrong(local_40,local_a8);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
  }
  else {
    bVar1 = ((ulong)puVar2 & 1) == 0;
    local_90 = local_20;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_voiceTranslateColorSelfLight_026a0218);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_90;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_voiceTranslateColorSelfDark_026a0210);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_90;
    }
    _objc_storeStrong(local_40,local_90);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
  }
  if (local_40[0] == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3fe0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_40[0];
    local_40[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_40[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

