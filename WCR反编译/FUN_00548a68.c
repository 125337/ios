// FUN_00548a68 @ 00548a68

/* WARNING: Removing unreachable block (ram,0x005491b0) */
/* WARNING: Removing unreachable block (ram,0x00548ffc) */
/* WARNING: Removing unreachable block (ram,0x00549318) */

void FUN_00548a68(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *local_d8;
  undefined *local_b0;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  ulong local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028cb444);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar3;
  _objc_setAssociatedObject(local_28,&DAT_028cb444,0,1);
  if (local_40 == 0) {
    local_50 = 1;
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_momentsFakeLikeCount_026a4e70);
    puVar5 = local_58;
    local_60 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsFakeCommentCount_026a4e78);
    local_68 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = &cf___;
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_78 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(&local_70,local_78);
      }
      _objc_storeStrong(&local_78,0);
    }
    pcVar6 = local_70;
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar6 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,&cf_0);
    if (((ulong)pcVar6 & 1) == 0) {
      pcVar6 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      if (pcVar6 != (cfstringStruct *)0x0) {
        pcVar6 = local_80;
        puVar4 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeOfString__0269d838,&cf__);
        local_90 = pcVar6;
        local_88 = puVar4;
        if (pcVar6 == (cfstringStruct *)0x7fffffffffffffff) {
          puVar4 = PTR__OBJC_CLASS___NSScanner_026ce368;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_80
                    );
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (((ulong)puVar5 & 1) != 0) {
            local_60 = (undefined *)0x0;
          }
        }
        else {
          pcVar7 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_substringToIndex__0269d6c0,pcVar6);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_80;
          local_98 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_substringFromIndex__0269d120,
                     (undefined1 *)((long)&local_90->field0_0x0 + 1));
          _objc_retainAutoreleasedReturnValue();
          bVar2 = false;
          pcVar7 = local_98;
          local_a0 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
          bVar1 = false;
          if (pcVar7 != (cfstringStruct *)0x0) {
            local_b0 = PTR__OBJC_CLASS___NSScanner_026ce368;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,
                       local_98);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            puVar4 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = false;
            if (((ulong)puVar4 & 1) != 0) {
              bVar1 = true;
            }
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_b0);
          }
          if (bVar1) {
            local_60 = (undefined *)0x0;
          }
          bVar2 = false;
          pcVar6 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
          bVar1 = false;
          if (pcVar6 != (cfstringStruct *)0x0) {
            local_d8 = PTR__OBJC_CLASS___NSScanner_026ce368;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,
                       local_a0);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            puVar4 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = false;
            if (((ulong)puVar4 & 1) != 0) {
              bVar1 = true;
            }
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_d8);
          }
          if (bVar1) {
            local_68 = (undefined *)0x0;
          }
          _objc_storeStrong(&local_a0);
          _objc_storeStrong(&local_98,0);
        }
      }
      _WCRefineApplyManualFakeEngagementToDataItem(local_40,local_60,local_68);
    }
    else {
      _WCRefineCancelManualFakeEngagementForDataItem(local_40);
    }
    DAT_028cb369 = 1;
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_initData_0269ec58);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_performSelector__026ca7b8,PTR_s_initData_0269ec58);
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_initTableHeaderView_026a4fc0);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_performSelector__026ca7b8,PTR_s_initTableHeaderView_026a4fc0);
    }
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_reloadTableView_0269dcb0);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableView_0269dcb0);
    }
    DAT_028cb369 = 0;
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

