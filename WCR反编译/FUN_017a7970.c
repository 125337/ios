// FUN_017a7970 @ 017a7970

void FUN_017a7970(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  dispatch_time_t dVar6;
  ulong local_190;
  ulong local_c8;
  ulong local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  undefined8 local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  byte local_47;
  byte local_46;
  byte local_45;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*DAT_028e4118)(local_28,local_30,local_38);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_45 = (byte)puVar3;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_46 = (byte)puVar3;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_47 = (byte)puVar3;
  if (((((DAT_028e4218 & 1) == 0) && ((DAT_028e4219 & 1) == 0)) && ((DAT_028e421a & 1) == 0)) &&
     ((DAT_028e421b & 1) == 0)) {
    local_58 = 0;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if ((uVar4 & 1) == 0) {
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_text);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_58;
      local_58 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    else {
      uVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_performSelector__026ca7b8,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_58;
      local_58 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    if ((local_58 == 0) ||
       (uVar4 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0),
       uVar4 == 0)) {
      local_4c = 1;
    }
    else {
      uVar4 = local_58;
      FUN_017b0dd8();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf__kjkj);
      if ((uVar4 & 1) == 0) {
        if ((((local_45 & 1) == 0) && ((local_46 & 1) == 0)) && ((local_47 & 1) == 0)) {
          local_4c = 1;
        }
        else {
          uVar4 = local_28;
          FUN_017b112c(local_28,local_58);
          if ((uVar4 & 1) == 0) {
            if (((local_46 & 1) == 0) ||
               (uVar4 = local_60,
               (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf_hfhf),
               (uVar4 & 1) == 0)) {
              if (((local_45 & 1) != 0) &&
                 (uVar4 = local_60,
                 (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,&cf_rp),
                 (uVar4 & 1) != 0)) {
                DAT_028e4218 = 1;
                uVar4 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
                if ((uVar4 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_setValue_forKey__0269d300,&cf___,&cf_text);
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_performSelector_withObject__026ca7c0,
                             PTR_s_setText__026caa88,&cf___);
                }
                uVar4 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
                _objc_retainAutoreleasedReturnValue();
                local_c8 = uVar4;
                while (local_c8 != 0) {
                  uVar4 = local_c8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c8,PTR_s_respondsToSelector__026ca818,
                             PTR_s_onOpenWCTimeline_026b4998);
                  if ((uVar4 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_c8,PTR_s_performSelector__026ca7b8,
                               PTR_s_onOpenWCTimeline_026b4998);
                    break;
                  }
                  uVar5 = local_c8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
                  _objc_retainAutoreleasedReturnValue();
                  uVar4 = local_c8;
                  local_c8 = uVar5;
                  (*(code *)PTR__objc_release_02578630)(uVar4);
                }
                dVar6 = _dispatch_time(0,500000000);
                puVar2 = PTR___dispatch_main_q_02578680;
                _objc_retainAutoreleaseReturnValue();
                _objc_retainAutoreleasedReturnValue();
                _dispatch_after(dVar6,puVar2,&PTR___NSConcreteGlobalBlock_02588e30);
                (*(code *)PTR__objc_release_02578630)(puVar2);
                _objc_storeStrong(&local_c8,0);
              }
              local_4c = 0;
            }
            else {
              DAT_028e4219 = 1;
              uVar4 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
              if ((uVar4 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_setValue_forKey__0269d300,&cf___,&cf_text);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_performSelector_withObject__026ca7c0,
                           PTR_s_setText__026caa88,&cf___);
              }
              uVar4 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
              _objc_retainAutoreleasedReturnValue();
              local_c0 = uVar4;
              while (local_c0 != 0) {
                uVar4 = local_c0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c0,PTR_s_respondsToSelector__026ca818,
                           PTR_s_onOpenWCRefineMessageBannerBeaut_026b4958);
                if ((uVar4 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_c0,PTR_s_performSelector__026ca7b8,
                             PTR_s_onOpenWCRefineMessageBannerBeaut_026b4958);
                  break;
                }
                uVar5 = local_c0;
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_superview_026cab50);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = local_c0;
                local_c0 = uVar5;
                (*(code *)PTR__objc_release_02578630)(uVar4);
              }
              dVar6 = _dispatch_time(0,500000000);
              puVar2 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              _dispatch_after(dVar6,puVar2,&PTR___NSConcreteGlobalBlock_02588e10);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              local_4c = 1;
              _objc_storeStrong(&local_c0,0);
            }
          }
          else {
            local_4c = 1;
          }
        }
      }
      else {
        DAT_028e421b = 1;
        FUN_017b0ff0(local_28);
        uVar4 = local_28;
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_endEditing__026a2e70,1);
        }
        uVar4 = local_28;
        local_68 = 0;
        local_79 = 0;
        puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar4 & 1) == 0) {
          local_190 = 0;
        }
        else {
          local_190 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_79 = 1;
          local_78 = local_190;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_190;
        if ((local_79 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        while (local_70 != 0) {
          uVar4 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_getChatUsername_0269d2b8);
          if ((uVar4 & 1) != 0) {
            _objc_storeStrong(&local_68,local_70);
            break;
          }
          uVar5 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_70;
          local_70 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        puVar3 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR___dispatch_main_q_02578680;
        local_88 = puVar3;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_88;
        local_b8 = PTR___NSConcreteStackBlock_02578660;
        local_b0 = 0xc2000000;
        local_ac = 0;
        local_a8 = FUN_017b10d4;
        local_a0 = &DAT_02578e60;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_68;
        local_98 = puVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = uVar1;
        _dispatch_async(puVar2,&local_b8);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_4c = 1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_98,0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

