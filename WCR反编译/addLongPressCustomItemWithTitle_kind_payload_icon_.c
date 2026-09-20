// addLongPressCustomItemWithTitle:kind:payload:icon: @ 011019d4

/* Function Stack Size: 0x30 bytes */

void WCRefinePluginIconCatalog::addLongPressCustomItemWithTitle_kind_payload_icon_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  undefined *local_120;
  undefined *local_e0;
  byte local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined4 local_ac;
  long local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  SEL local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  long local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  local_88 = param_2;
  local_80 = (undefined *)param_1;
  _objc_storeStrong(&local_90,param_3);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_4);
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_5);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_6);
  lVar1 = local_90;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_90;
  local_90 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  uVar2 = local_98;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_98;
  local_98 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  lVar1 = local_a0;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_a0;
  local_a0 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar1 = local_a8;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_a8;
  local_a8 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if (((lVar3 == 0) ||
      (uVar4 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
      uVar4 == 0)) ||
     (lVar3 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_ac = 1;
  }
  else {
    lVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      uVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_isEqualToString__0269ccc8,&cf_miniprogram);
      if ((uVar4 & 1) == 0) {
        uVar4 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_url);
        if ((uVar4 & 1) == 0) {
          _objc_storeStrong(&local_a8,&cf_icons_outlined_more_circle);
        }
        else {
          _objc_storeStrong(&local_a8,&cf_icons_outlined_link);
        }
      }
      else {
        _objc_storeStrong(&local_a8,&cf_icons_outlined_miniprogram);
      }
    }
    puVar5 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = &cf_lp_custom_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_lp_custom_,PTR_s_stringByAppendingString__0269d398);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_78 = &cf_id;
    local_50 = local_b8;
    local_70 = &cf_title;
    local_48 = local_90;
    local_68 = &cf_icon;
    local_40 = local_a8;
    local_60 = &cf_customKind;
    local_38 = local_98;
    local_58 = &cf_customPayload;
    local_30 = local_a0;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_80;
    local_c0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rawLongPressCustomItems_026aed90);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d1 = 0;
    local_120 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_120 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = local_120;
    }
    local_d1 = puVar5 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_120;
    if ((local_d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_c0);
    puVar5 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_copy_0269d150);
    puVar6 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_resolvedLongPressOrder_026aed60);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e0 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_containsObject__0269cbb8,local_b8);
    if (((ulong)puVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_b8);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setLongPressOrder__026aee18,local_e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_notifyLongPressMenuChanged_026aedf0);
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    local_ac = 0;
  }
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

