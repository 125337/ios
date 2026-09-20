// FUN_00682068 @ 00682068

void FUN_00682068(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *local_168;
  undefined *local_f8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  byte local_61;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  long local_40;
  undefined *local_38;
  long local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_2);
  lVar1 = local_30;
  FUN_006816d8();
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_50 = 1;
  }
  else {
    local_61 = 0;
    local_71 = 0;
    local_81 = 0;
    puVar2 = local_38;
    FUN_0067e48c();
    if (((ulong)puVar2 & 1) == 0) {
      local_f8 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_f8;
      FUN_0067d82c();
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_f8;
    }
    else {
      local_f8 = local_38;
    }
    puVar2 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_f8;
    if ((local_81 & 1) != 0) {
      puVar2 = local_80;
      (*(code *)PTR__objc_release_02578630)();
    }
    if ((local_71 & 1) != 0) {
      puVar2 = local_70;
      (*(code *)PTR__objc_release_02578630)();
    }
    if ((local_61 & 1) != 0) {
      puVar2 = local_60;
      (*(code *)PTR__objc_release_02578630)();
    }
    FUN_00683b78();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_58;
    local_90 = puVar2;
    FUN_0067e48c();
    if (((ulong)puVar3 & 1) != 0) {
      puVar2 = local_58;
      FUN_0067d82c();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      if (puVar2 != (undefined *)0x0) {
        local_a1 = 0;
        puVar2 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_hasSuffix__0269d018,&cf__);
        if (((ulong)puVar2 & 1) == 0) {
          local_168 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_stringByAppendingString__0269d398,&cf__);
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 1;
          local_a0 = local_168;
        }
        else {
          local_168 = local_98;
        }
        _objc_storeStrong(&local_90,local_168);
        if ((local_a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
      }
      _objc_storeStrong(&local_98,0);
    }
    puVar2 = local_58;
    FUN_0067da68();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_50 = 1;
    }
    else {
      pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = pcVar5;
      FUN_00683dec(pcVar5,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = 1;
      local_28 = pcVar5;
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

