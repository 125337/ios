// FUN_0003e71c @ 0003e71c

void FUN_0003e71c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  cfstringStruct *local_210;
  cfstringStruct *local_e8;
  bool local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_50;
  cfstringStruct *local_40;
  ulong local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_e8 = &cf___;
  }
  else {
    local_e8 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
  uVar3 = local_38;
  if (local_e8 != (cfstringStruct *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__n,&cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      FUN_0003102c();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_payerUser);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      FUN_0003102c();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_currentUser);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      FUN_0003102c();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        FUN_0003c2b0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_68;
        local_68 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      uVar3 = local_58;
      FUN_00040398(local_58,local_60);
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        uVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_payerName);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        FUN_0003102c();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_70;
        local_70 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      uVar3 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        _objc_storeStrong(&local_70,&cf__e);
      }
      uVar3 = local_58;
      FUN_00040398(local_58,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_78 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if (uVar3 == 0) {
        _objc_storeStrong(&local_78,&cf_b);
      }
      uVar3 = local_60;
      FUN_0004069c();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_60;
      local_80 = uVar3;
      FUN_000408b8();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_58;
      local_88 = uVar5;
      FUN_00040ac4(local_58,local_60);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      uVar5 = local_38;
      local_90 = uVar3;
      FUN_00040d14();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_40;
      local_40 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_autoAcceptTransferBalanceEnabled_0269d738);
      local_a9 = ((ulong)pcVar2 & 1) == 0;
      if (local_a9) {
        local_210 = &cf___;
      }
      else {
        local_210 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_autoAcceptTransferBalanceDisplay_0269d740);
        _objc_retainAutoreleasedReturnValue();
        local_a8 = local_210;
      }
      local_a9 = !local_a9;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_210;
      if (local_a9) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_a0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_70);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_78);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_80);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_88);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,local_90);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_40;
      uVar3 = local_38;
      FUN_00041104();
      _objc_retainAutoreleasedReturnValue();
      FUN_00041048();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_40;
      local_40 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      pcVar2 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar2;
      local_50 = 1;
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      goto LAB_0003f328;
    }
  }
  pcVar2 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = pcVar2;
  local_50 = 1;
LAB_0003f328:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

