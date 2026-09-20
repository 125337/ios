// FUN_015dce2c @ 015dce2c

void FUN_015dce2c(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  uint local_5c;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_1;
  local_40 = param_1;
  if (DAT_028e3b90 == 0) {
    lVar6 = param_1;
    _WCRiFontEmbeddedTemplatesJS();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar6;
    _WCRiFontEmbeddedBridgeJS();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_50;
    local_58 = lVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if ((lVar2 == 0) ||
       (lVar6 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
       lVar6 == 0)) {
      puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
      local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_20 = &cf_QL_lbc_g_g1__;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRiFont,1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      uVar3 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar4;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_5c = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___JSContext_026cee00;
      _objc_alloc_init();
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_015dd24c;
      local_78 = &DAT_02587488;
      local_70 = *(undefined8 *)(param_1 + 0x20);
      local_68 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setExceptionHandler__026b1008,&local_90);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_evaluateScript__026b1010,local_50);
      _objc_unsafeClaimAutoreleasedReturnValue();
      if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_evaluateScript__026b1010,local_58);
        _objc_unsafeClaimAutoreleasedReturnValue();
        if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) == 0) {
          puVar5 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_iFontConvert);
          _objc_retainAutoreleasedReturnValue();
          local_98 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isObject_026b1018);
          puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
          bVar1 = ((ulong)puVar5 & 1) != 0;
          if (bVar1) {
            _objc_storeStrong(&DAT_028e3b90,local_68);
            **(undefined1 **)(param_1 + 0x28) = 1;
          }
          else {
            local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
            local_30 = &cf_lbcQpe_g1__;
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRiFont,3);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
            uVar3 = *(undefined8 *)(lVar6 + 0x28);
            *(undefined **)(lVar6 + 0x28) = puVar4;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            (*(code *)PTR__objc_release_02578630)(puVar5);
          }
          local_5c = (uint)!bVar1;
          _objc_storeStrong(&local_98,0);
        }
        else {
          local_5c = 1;
        }
      }
      else {
        local_5c = 1;
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  else {
    **(undefined1 **)(param_1 + 0x28) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

