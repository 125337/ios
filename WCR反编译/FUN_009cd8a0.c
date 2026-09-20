// FUN_009cd8a0 @ 009cd8a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009cd8a0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_148;
  cfstringStruct *local_128;
  cfstringStruct *local_110;
  cfstringStruct *local_f8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  pcVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_28 = (undefined *)0x0;
    local_3c = 1;
  }
  else {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_data)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_51 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_f8 = (cfstringStruct *)0x0;
    }
    else {
      local_f8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_f8;
    }
    local_51 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_f8;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_deepseek);
    if ((uVar5 & 1) == 0) {
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_kimi);
      if ((uVar5 & 1) == 0) {
        uVar5 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_isEqualToString__0269ccc8,&cf_openrouter);
        if ((uVar5 & 1) == 0) {
          local_28 = (undefined *)0x0;
          local_3c = 1;
        }
        else if (local_48 == (cfstringStruct *)0x0) {
          local_28 = (undefined *)0x0;
          local_3c = 1;
        }
        else {
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_limit_remaining);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          FUN_009d381c();
          _objc_retainAutoreleasedReturnValue();
          local_b8 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          pcVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
          if (pcVar3 != (cfstringStruct *)0x0) {
            local_c0 = &cf__;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&cf__,PTR_s_stringByAppendingString__0269d398,local_b8);
            _objc_retainAutoreleasedReturnValue();
          }
          pcVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_usage);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = pcVar4;
          FUN_009d381c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_iRYO_);
          _objc_retainAutoreleasedReturnValue();
          local_28 = puVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if (pcVar3 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_release_02578630)(local_c0);
          }
          local_3c = 1;
          _objc_storeStrong(&local_b8,0);
        }
      }
      else {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_available_balance);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_009d381c();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
        local_28 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_28 = (undefined *)0x0;
        }
        else {
          pcVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_voucher_balance);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          FUN_009d381c();
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_cash_balance);
          _objc_retainAutoreleasedReturnValue();
          pcVar7 = pcVar8;
          FUN_009d381c();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stringWithFormat__0269cca8,&cf_S_uYO)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        local_3c = 1;
        _objc_storeStrong(&local_b0,0);
      }
    }
    else {
      pcVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_balance_infos);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_69 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_110 = (cfstringStruct *)0x0;
      }
      else {
        local_110 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_balance_infos);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_110;
      }
      local_69 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_110;
      if ((local_69 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_81 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_128 = (cfstringStruct *)0x0;
      }
      else {
        local_128 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_128;
      }
      local_81 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_78 = local_128;
      if ((local_81 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_total_balance);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      FUN_009d381c();
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_28 = (undefined *)0x0;
        local_3c = 1;
      }
      else {
        pcVar3 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_currency);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar4 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_a1 = false;
        bVar1 = ((ulong)pcVar4 & 1) == 0;
        if (bVar1) {
          local_148 = &cf___;
        }
        else {
          local_148 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_currency);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = local_148;
        }
        local_a1 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_148;
        if ((local_a1 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        pcVar3 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_granted_balance);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_009d381c();
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_topped_up_balance);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = pcVar8;
        FUN_009d381c();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_is_available);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf___YO);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        local_3c = 1;
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

