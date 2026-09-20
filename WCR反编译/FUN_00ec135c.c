// FUN_00ec135c @ 00ec135c

void FUN_00ec135c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong local_150;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  bool local_b1;
  ulong local_b0;
  byte local_a1;
  ulong local_a0;
  undefined *local_98;
  ulong local_90;
  ulong local_88;
  undefined4 local_7c;
  ulong local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  _objc_storeStrong(&local_78,param_1);
  uVar2 = local_78;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_70 = (undefined *)0x0;
    local_7c = 1;
  }
  else {
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_70 = (undefined *)0x0;
      local_7c = 1;
    }
    else {
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_kind);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      uVar2 = local_88;
      if (uVar3 == 0) {
        pcVar4 = &cf_wcr_attach_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_wcr_attach_,PTR_s_stringByAppendingString__0269d398,&cf_plugin_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_hasPrefix__0269d320);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        uVar3 = local_88;
        if ((uVar2 & 1) == 0) {
          pcVar4 = &cf_wcr_attach_;
          (*(code *)PTR__objc_msgSend_02578628)
                    (&cf_wcr_attach_,PTR_s_stringByAppendingString__0269d398,&cf_toolbar_);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasPrefix__0269d320);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if ((uVar3 & 1) == 0) {
            uVar2 = local_88;
            FUN_00ec61c8();
            if ((uVar2 & 1) == 0) {
              _objc_storeStrong(&local_90,&cf_native);
            }
            else {
              _objc_storeStrong(&local_90,&cf_custom);
            }
          }
          else {
            _objc_storeStrong(&local_90,&cf_toolbar);
          }
        }
        else {
          _objc_storeStrong(&local_90,&cf_plugin);
        }
      }
      local_68 = &cf_id;
      local_48 = local_88;
      local_60 = &cf_title;
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a1 = 0;
      local_b1 = false;
      if (uVar5 == 0) {
        local_150 = local_88;
      }
      else {
        local_150 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        local_a1 = 1;
        local_a0 = local_150;
        FUN_00ebd790();
        _objc_retainAutoreleasedReturnValue();
        local_b0 = local_150;
      }
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_b1 = uVar5 != 0;
      local_40 = local_150;
      local_58 = &cf_enabled;
      uVar5 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithBool__0269ce60,uVar6);
      _objc_retainAutoreleasedReturnValue();
      local_50 = &cf_kind;
      local_30 = local_90;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_38 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_98 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      if ((local_b1 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      if ((local_a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_c0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_c0,&cf_icon);
      }
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_customTitle);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8,&cf_customTitle);
      }
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_customIcon);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_d0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_d0,&cf_customIcon);
      }
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_d8,&cf_action);
      }
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_customKind);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_e0,&cf_customKind);
      }
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_customPayload);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_e8,&cf_customPayload);
      }
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_sourceTitle);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_f0,&cf_sourceTitle);
      }
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_missing);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar3 & 1) != 0) {
        puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_missing);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      puVar1 = local_98;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = puVar1;
      local_7c = 1;
      _objc_storeStrong(&local_f0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

