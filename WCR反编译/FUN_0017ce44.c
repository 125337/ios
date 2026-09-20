// FUN_0017ce44 @ 0017ce44

void FUN_0017ce44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_160;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  ulong local_60;
  ulong local_58;
  int local_4c;
  undefined4 local_48;
  cfstringStruct *local_38;
  ulong local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  uVar5 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar5 & 1) != 0) {
    uVar5 = local_30;
    FUN_0017972c();
    pcVar3 = local_38;
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
      local_48 = 1;
      goto LAB_0017d4b8;
    }
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar3 = local_38;
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar3;
    local_48 = 1;
  }
  else {
    if (local_38 != (cfstringStruct *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      pcVar6 = local_38;
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar6;
        local_48 = 1;
        goto LAB_0017d4b8;
      }
    }
    uVar5 = local_30;
    FUN_0017a038();
    pcVar3 = local_38;
    local_4c = (int)uVar5;
    if (local_4c == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
      local_48 = 1;
    }
    else {
      uVar4 = local_30;
      FUN_0017d778();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar5 & 0xffffffff;
      FUN_0017a184();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      pcVar3 = local_38;
      if (uVar5 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
        local_48 = 1;
      }
      else {
        uVar5 = local_58;
        FUN_0017b8cc();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
        pcVar3 = local_38;
        if (uVar5 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar3;
          local_48 = 1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((ulong)pcVar3 & 1) == 0) {
            local_160 = &cf___;
          }
          else {
            local_160 = local_38;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = local_160;
          FUN_0017b4e0(local_160,local_60);
          _objc_retainAutoreleasedReturnValue();
          local_70 = local_160;
          FUN_0017b8cc();
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_160;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(local_160);
          pcVar3 = local_38;
          if (pcVar6 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar3;
            local_48 = 1;
          }
          else {
            pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____
                      );
            _objc_retainAutoreleasedReturnValue();
            local_78 = pcVar3;
            (*(code *)PTR__objc_retain_02578638)();
            local_48 = 1;
            local_28 = pcVar3;
            _objc_storeStrong(&local_78,0);
          }
          _objc_storeStrong(&local_70);
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
  }
LAB_0017d4b8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

