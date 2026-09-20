// didSelectWatermarkImagePath:isNight: @ 018016cc

/* Function Stack Size: 0x1c bytes */

void WCRefineAssistFunctionViewController::didSelectWatermarkImagePath_isNight_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong local_1c8;
  ulong local_1c0;
  cfstringStruct *local_180;
  undefined *local_178;
  undefined *local_170;
  long local_168;
  ulong local_160;
  long local_158;
  cfstringStruct *local_150;
  undefined *local_148;
  undefined *local_140;
  long local_138;
  ulong local_130;
  long local_128;
  undefined4 local_11c;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  long local_d0;
  byte local_c2;
  byte local_c1;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar8 = local_c0;
  local_c1 = (byte)param_4;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_c2 = true;
  if ((uVar8 & 1) != 0) {
    uVar8 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
    local_c2 = uVar8 == 0;
  }
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_1c0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_1c0 != 0) {
    lVar7 = *local_108;
    local_1c8 = 0;
    do {
      do {
        if (*local_108 - lVar7 != 0) {
          _objc_enumerationMutation(*local_108 - lVar7,IVar3);
        }
        uVar8 = *(ulong *)(local_110 + local_1c8 * 8);
        puVar1 = PTR_WCRefineWatermarkLibraryViewController_026ce908;
        local_d8 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineWatermarkLibraryViewController_026ce908,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((uVar8 & 1) != 0) {
          _objc_storeStrong(&local_d0,local_d8);
          local_11c = 2;
          goto LAB_01801964;
        }
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1c0);
      local_1c0 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_1c8 = 0;
    } while (local_1c0 != 0);
  }
  local_11c = 0;
LAB_01801964:
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (local_d0 == 0) {
    local_11c = 1;
  }
  else {
    lVar7 = local_d0;
    _objc_getAssociatedObject(local_d0,&cf_WCRefineVideoWatermarkIndex);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar7);
    lVar7 = lVar4 + -1;
    local_128 = lVar4;
    if ((lVar4 < 1) || (lVar7 = lVar4 + -3, lVar7 != 0 && 2 < lVar4)) {
      lVar4 = local_d0;
      _objc_getAssociatedObject(lVar7,local_d0,&cf_WCRefineWatermarkIndex);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      local_158 = lVar7;
      if ((lVar7 < 1) || (3 < lVar7)) {
        local_11c = 1;
      }
      else {
        local_160 = 0;
        if ((local_c2 & 1) == 0) {
          lVar4 = 9;
          _NSSearchPathForDirectoriesInDomains(9,1,1);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_168 = lVar7;
          (*(code *)PTR__objc_release_02578630)(lVar4);
          _objc_storeStrong(&local_160,local_c0);
          uVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_hasPrefix__0269d320,local_168);
          uVar8 = local_c0;
          if ((uVar5 & 1) != 0) {
            lVar7 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_substringFromIndex__0269d120,lVar7 + 1);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_160;
            local_160 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          _objc_storeStrong(&local_168,0);
        }
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_178 = (undefined *)0x0;
        local_170 = puVar1;
        if ((local_c1 & 1) == 0) {
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_screenshotWatermark_ldImagePath);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_178;
          local_178 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_screenshotWatermark_ldNightImagePath);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_178;
          local_178 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_setValue_forKey__0269d300,local_160,local_178);
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_saveConfig_0269e5d0);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadTableData_0269dca8);
        local_180 = &cf_Y;
        if ((local_c1 & 1) == 0) {
          local_180 = &cf_e;
        }
        (*(code *)PTR__objc_retain_02578638)();
        puVar1 = PTR_WCRefineHelper_026ce000;
        if ((local_c2 & 1) == 0) {
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_4lpS_)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf__Sm4lpS_);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        _objc_storeStrong(&local_180);
        _objc_storeStrong(&local_178,0);
        _objc_storeStrong(&local_170,0);
        _objc_storeStrong(&local_160,0);
        local_11c = 0;
      }
    }
    else {
      local_130 = 0;
      if ((local_c2 & 1) == 0) {
        lVar4 = 9;
        _NSSearchPathForDirectoriesInDomains(9,1,1);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_138 = lVar7;
        (*(code *)PTR__objc_release_02578630)(lVar4);
        _objc_storeStrong(&local_130,local_c0);
        uVar5 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_hasPrefix__0269d320,local_138);
        uVar8 = local_c0;
        if ((uVar5 & 1) != 0) {
          lVar7 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_substringFromIndex__0269d120,lVar7 + 1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_130;
          local_130 = uVar8;
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
        _objc_storeStrong(&local_138,0);
      }
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_148 = (undefined *)0x0;
      local_140 = puVar1;
      if ((local_c1 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_videoWatermark_ldImagePath);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_148;
        local_148 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_videoWatermark_ldNightImagePath);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_148;
        local_148 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_setValue_forKey__0269d300,local_130,local_148);
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_saveConfig_0269e5d0);
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_reloadTableData_0269dca8);
      local_150 = &cf_Y;
      if ((local_c1 & 1) == 0) {
        local_150 = &cf_e;
      }
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = PTR_WCRefineHelper_026ce000;
      if ((local_c2 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_U_O_4lpS_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf__SmU_O_4lpS_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      local_11c = 1;
      _objc_storeStrong(&local_150);
      _objc_storeStrong(&local_148,0);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_130,0);
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

