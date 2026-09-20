// FUN_015de07c @ 015de07c

void FUN_015de07c(long param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  cfstringStruct *local_190;
  undefined *local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  ulong local_f0;
  undefined *local_e8;
  ulong local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined4 local_c4;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = param_1;
  local_a8 = param_1;
  local_a0 = param_1;
  _objc_autoreleasePoolPush();
  pcVar2 = DAT_028e3b90;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3b90,PTR_s_objectForKeyedSubscript__0269d098,&cf_iFontConvert);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = DAT_028e3b90;
  local_b0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3b90,PTR_s_objectForKeyedSubscript__0269d098,&cf_iFontConvertFileAt);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = DAT_028e3b90;
  local_b8 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3b90,PTR_s_objectForKeyedSubscript__0269d098,&cf_iFontConvertDiscard);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_b0;
  local_c0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isObject_026b1018);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isObject_026b1018),
     pcVar2 = local_b0, ((ulong)pcVar3 & 1) == 0)) {
    puVar5 = PTR__OBJC_CLASS___NSError_026ce470;
    local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
    local_30 = &cf_lbcQpe_g1__;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRiFont,6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = **(undefined8 **)(param_1 + 0x38);
    **(undefined8 **)(param_1 + 0x38) = puVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_c4 = 1;
  }
  else {
    local_50 = *(undefined8 *)(param_1 + 0x20);
    local_48 = *(undefined8 *)(param_1 + 0x28);
    local_40 = *(undefined8 *)(param_1 + 0x30);
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_callWithArguments__026b1078);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_isObject_026b1018);
    puVar5 = PTR__OBJC_CLASS___NSError_026ce470;
    if (((ulong)pcVar2 & 1) == 0) {
      local_60 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_58 = &cf_lbcVeHe;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRiFont,6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = **(undefined8 **)(param_1 + 0x38);
      **(undefined8 **)(param_1 + 0x38) = puVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      local_c4 = 1;
    }
    else {
      pcVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_ok)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_error);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        puVar5 = PTR__OBJC_CLASS___NSError_026ce470;
        local_70 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
        pcVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_190 = &cf_lbc1Y_;
        }
        else {
          local_190 = local_d8;
        }
        local_68 = local_190;
        puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_68,&local_70,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRiFont,7);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = **(undefined8 **)(param_1 + 0x38);
        **(undefined8 **)(param_1 + 0x38) = puVar5;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        pcVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isObject_026b1018);
        if (((ulong)pcVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_callWithArguments__026b1078,
                     *(undefined8 *)PTR____NSArray0___02578280);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        local_c4 = 1;
        _objc_storeStrong(&local_d8,0);
      }
      else {
        pcVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_fileCount);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        uVar8 = (ulong)pcVar3 & 0xffffffff;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        puVar5 = PTR__OBJC_CLASS___NSError_026ce470;
        local_e0 = uVar8;
        if (uVar8 == 0) {
          local_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
          local_78 = &cf__gubQeN;
          puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_78,&local_80,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRiFont,8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = **(undefined8 **)(param_1 + 0x38);
          **(undefined8 **)(param_1 + 0x38) = puVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          pcVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isObject_026b1018);
          if (((ulong)pcVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_callWithArguments__026b1078,
                       *(undefined8 *)PTR____NSArray0___02578280);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          local_c4 = 1;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,
                     uVar8);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = puVar5;
          for (local_f0 = 0; local_f0 < local_e0; local_f0 = local_f0 + 1) {
            _objc_autoreleasePoolPush(local_f0 - local_e0);
            pcVar2 = local_b8;
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,local_f0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_88 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_88,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_callWithArguments__026b1078);
            _objc_retainAutoreleasedReturnValue();
            local_f8 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            pcVar2 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_isObject_026b1018);
            if (((ulong)pcVar2 & 1) == 0) {
              local_c4 = 4;
            }
            else {
              pcVar2 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_100 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              pcVar2 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f8,PTR_s_objectForKeyedSubscript__0269d098,&cf_base64);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_108 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              pcVar2 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
              if ((pcVar2 == (cfstringStruct *)0x0) ||
                 (pcVar2 = local_108,
                 (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0),
                 pcVar2 == (cfstringStruct *)0x0)) {
                local_c4 = 4;
              }
              else {
                puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)();
                local_110 = puVar5;
                (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
                if (puVar5 == (undefined *)0x0) {
                  local_c4 = 4;
                }
                else {
                  puVar5 = PTR_WCRiFontConvertResult_026cee10;
                  _objc_alloc_init();
                  local_118 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar5,PTR_s_setFileName__026ac388,local_100);
                  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setData__026ac380,local_110)
                  ;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_addObject__0269d180,local_118);
                  _objc_storeStrong(&local_118,0);
                  local_c4 = 0;
                }
                _objc_storeStrong(&local_110,0);
              }
              _objc_storeStrong(&local_108);
              _objc_storeStrong(&local_100,0);
            }
            _objc_storeStrong(&local_f8,0);
            _objc_autoreleasePoolPop();
          }
          pcVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isObject_026b1018);
          if (((ulong)pcVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_callWithArguments__026b1078,
                       *(undefined8 *)PTR____NSArray0___02578280);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          puVar5 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_copy_0269d150);
          uVar4 = **(undefined8 **)(param_1 + 0x40);
          **(undefined8 **)(param_1 + 0x40) = puVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          lVar6 = **(long **)(param_1 + 0x40);
          (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_count_0269cfe0);
          puVar5 = PTR__OBJC_CLASS___NSError_026ce470;
          if (lVar6 == 0) {
            local_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
            local_90 = &cf_Qx1Y_;
            puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_90,&local_98,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRiFont,9);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = **(undefined8 **)(param_1 + 0x38);
            **(undefined8 **)(param_1 + 0x38) = puVar5;
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_release_02578630)(puVar7);
          }
          _objc_storeStrong(&local_e8,0);
          local_c4 = 0;
        }
      }
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_autoreleasePoolPop(lVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

