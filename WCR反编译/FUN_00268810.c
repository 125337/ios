// FUN_00268810 @ 00268810

void FUN_00268810(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  dispatch_time_t dVar8;
  ulong local_228;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  ulong local_120;
  ulong local_118;
  undefined *local_110;
  ulong local_108;
  ulong local_100;
  undefined *local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined4 local_a8;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  ulong local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  local_88 = param_4;
  local_80 = param_3;
  _objc_storeStrong(&local_90,param_5);
  uVar4 = local_80;
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = uVar4;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_a8 = 1;
    goto LAB_00269434;
  }
  uVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_state_026cab20);
  if (uVar4 != 1) {
    local_a8 = 1;
    goto LAB_00269434;
  }
  uVar5 = local_80;
  _objc_getAssociatedObject(0,local_80,&DAT_028c9532);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  uVar4 = local_80;
  if (uVar5 != 0) {
    local_a8 = 1;
    goto LAB_00269434;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar4,&DAT_028c9532,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar4 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = uVar4;
  if (uVar4 == 0) {
LAB_00268aa4:
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_WCRefineFavoritesLP_finishLongPr_026a1380,local_90);
    local_a8 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UITableView_026ce1a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) == 0) goto LAB_00268aa4;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_locationInView__026ca798,local_b0);
    uVar4 = local_b0;
    local_e0 = param_1;
    uStack_d8 = param_2;
    local_c0 = param_1;
    uStack_b8 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,local_b0,PTR_s_indexPathForRowAtPoint__026a13a8);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = uVar4;
    if (uVar4 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_WCRefineFavoritesLP_finishLongPr_026a1380,local_90);
      local_a8 = 1;
    }
    else {
      uVar4 = local_80;
      FUN_00269660(local_80,"m_dataController");
      _objc_retainAutoreleasedReturnValue();
      local_e8 = uVar4;
      if ((uVar4 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getDataAtIndexPath__026a13b0),
         (uVar4 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_80,PTR_s_WCRefineFavoritesLP_finishLongPr_026a1380,local_90);
        local_a8 = 1;
      }
      else {
        uVar4 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_getDataAtIndexPath__026a13b0,local_c8);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = uVar4;
        if (uVar4 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_80,PTR_s_WCRefineFavoritesLP_finishLongPr_026a1380,local_90);
          local_a8 = 1;
        }
        else {
          puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithStyle__026ca710,1);
          local_f8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_impactOccurred_026ca6a0);
          _objc_storeStrong(&local_f8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setEnabled__026ca938,0);
          uVar4 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          local_100 = uVar4;
          if (uVar4 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_WCRefineFavoritesLP_finishLongPr_026a1380,local_90);
            local_a8 = 1;
          }
          else {
            uVar4 = local_f0;
            FUN_00269b14();
            if (((uVar4 & 1) == 0) || (uVar4 = local_f0, FUN_00269ce0(), (uVar4 & 1) != 0)) {
              uVar1 = local_98;
              uVar5 = local_f0;
              uVar4 = local_100;
              uVar7 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_row_0269e210);
              FUN_0026abf0(uVar1,uVar4,uVar5,uVar7);
              dVar8 = _dispatch_time(0,800000000);
              puVar2 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = local_90;
              local_140 = PTR___NSConcreteStackBlock_02578660;
              local_138 = 0xc2000000;
              local_134 = 0;
              local_130 = FUN_0026af34;
              local_128 = &DAT_02579ee0;
              local_118 = local_80;
              (*(code *)PTR__objc_retain_02578638)();
              local_120 = uVar4;
              _dispatch_after(dVar8,puVar2,&local_140);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              _objc_storeStrong(&local_120,0);
              local_a8 = 0;
            }
            else {
              uVar4 = local_f0;
              FUN_00269fd4();
              _objc_retainAutoreleasedReturnValue();
              local_108 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
              if (uVar4 != 0) {
                local_78 = &cf_host;
                local_50 = local_80;
                local_70 = &cf_nav;
                local_48 = local_100;
                local_68 = &cf_item;
                uVar4 = local_f0;
                FUN_0026a464();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                local_228 = uVar4;
                if (uVar4 == 0) {
                  local_228 = local_f0;
                }
                local_40 = local_228;
                local_60 = &cf_position;
                uVar5 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_row_0269e210);
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_numberWithInteger__0269e080,uVar5);
                _objc_retainAutoreleasedReturnValue();
                local_58 = &cf_gesture;
                local_30 = local_90;
                puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_38 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,
                           PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_110 = puVar6;
                (*(code *)PTR__objc_release_02578630)(puVar3);
                (*(code *)PTR__objc_release_02578630)(puVar2);
                (*(code *)PTR__objc_release_02578630)();
                FUN_0026a600();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar4);
                _objc_storeStrong(&local_110,0);
              }
              uVar4 = local_f0;
              FUN_0026a674();
              if ((uVar4 & 1) == 0) {
                uVar4 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
                if (uVar4 != 0) {
                  FUN_0026a600(uVar4);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar4);
                }
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                           &cf_el_TR6eeNN_);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_80,PTR_s_WCRefineFavoritesLP_finishLongPr_026a1380,local_90);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                           &cf_ck_WN_6eeN_bTR);
                FUN_0026aa80(local_108,0);
              }
              local_a8 = 1;
              _objc_storeStrong(&local_108,0);
            }
          }
          _objc_storeStrong(&local_100,0);
        }
        _objc_storeStrong(&local_f0,0);
      }
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b0,0);
LAB_00269434:
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

