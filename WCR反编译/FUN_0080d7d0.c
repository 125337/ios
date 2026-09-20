// FUN_0080d7d0 @ 0080d7d0

void FUN_0080d7d0(double param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  ulong local_58;
  ulong local_50;
  byte local_41;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_tag_026cab98);
    if (uVar3 == 0x24f6dc) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar3 = local_28;
      uVar4 = (ulong)(0.0 < param_1);
      local_41 = 0.0 < param_1;
      _WCRefineProfileBgHTMLFitScript();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_evaluateJavaScript_completionHan_026a12f0,uVar4,0);
      (*(code *)PTR__objc_release_02578630)();
      uVar1 = (uint)uVar4;
      if ((local_41 & 1) == 0) {
        _WCRefineProfileBgHTMLHasTrustedAutoHeight();
        if ((uVar1 & 1) == 0) {
          _WCRefineProfileBgHTMLDiscardStaleAutoHeight();
          if ((uVar1 & 1) == 0) {
            puVar5 = auStack_90;
            _objc_initWeak(puVar5,local_28);
            uVar3 = local_28;
            _WCRefineProfileBgHTMLMeasureHeightScript();
            _objc_retainAutoreleasedReturnValue();
            local_b8 = PTR___NSConcreteStackBlock_02578660;
            local_b0 = 0xc2000000;
            local_ac = 0;
            local_a8 = FUN_0081e920;
            local_a0 = &DAT_02580630;
            _objc_copyWeak(auStack_98,auStack_90);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_evaluateJavaScript_completionHan_026a12f0,puVar5,&local_b8);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            _objc_destroyWeak(auStack_98);
            _objc_destroyWeak(auStack_90);
            local_38 = 0;
          }
          else {
            uVar3 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_50 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_58 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setNeedsLayout_0269deb8);
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setNeedsLayout_0269deb8);
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setNeedsLayout_0269deb8);
            _objc_initWeak(auStack_60,local_28);
            puVar2 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_88 = PTR___NSConcreteStackBlock_02578660;
            local_80 = 0xc2000000;
            local_7c = 0;
            local_78 = FUN_0081e8b0;
            local_70 = &DAT_02578da0;
            _objc_copyWeak(auStack_68,auStack_60);
            _dispatch_async(puVar2,&local_88);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_38 = 1;
            _objc_destroyWeak(auStack_68);
            _objc_destroyWeak(auStack_60);
            _objc_storeStrong(&local_58);
            _objc_storeStrong(&local_50,0);
          }
        }
        else {
          local_38 = 1;
        }
      }
      else {
        local_38 = 1;
      }
    }
    else {
      local_38 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

