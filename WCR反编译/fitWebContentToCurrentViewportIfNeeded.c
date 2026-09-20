// fitWebContentToCurrentViewportIfNeeded @ 01e77b90

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineToDoCardView::fitWebContentToCurrentViewportIfNeeded
          (WCRefineToDoCardView *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined1 *puVar3;
  ID IVar4;
  undefined8 uVar5;
  double in_d0;
  double dVar6;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  uint local_114;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [8];
  undefined *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  double local_58;
  double local_50;
  undefined4 local_48;
  byte local_41;
  ID local_40;
  undefined1 *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_114 = 1;
  if (IVar2 != 0) {
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardSourceMode_026a8828);
    local_114 = 1;
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      local_41 = 1;
      local_40 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_114 = 1;
      if ((IVar4 & 1) == 0) {
        uVar5 = DAT_028e47e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e47e0,PTR_s_isEqualToString__0269ccc8,DAT_028e47d8);
        local_114 = (uint)uVar5 ^ 1;
      }
    }
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_114 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardWebContentScale_026c6d70);
    local_68 = 0;
    local_130 = in_d0;
    if (in_d0 < 0.0) {
      local_130 = 0.0;
    }
    local_70 = local_130;
    local_58 = local_130;
    local_78 = 0x4008000000000000;
    if (3.0 <= local_130) {
      local_138 = 3.0;
    }
    else {
      local_138 = local_130;
    }
    local_80 = local_138;
    local_50 = local_138;
    dVar6 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardContentScale_026c6ec8);
    local_98 = local_138 * dVar6;
    local_a0 = DAT_02323d38;
    local_148 = local_98;
    if (local_98 < DAT_02323d38) {
      local_148 = DAT_02323d38;
    }
    local_a8 = local_148;
    local_90 = local_148;
    local_b0 = 0x4008000000000000;
    if (3.0 <= local_148) {
      local_150 = 3.0;
    }
    else {
      local_150 = local_148;
    }
    local_b8 = local_150;
    local_88 = local_150;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___4f);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardHeight_026a8948);
    local_c8 = &cf_true;
    if (local_150 <= 0.0) {
      local_c8 = &cf_false;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &
               cf__function___try_window___wcrContentScale____window___wcrFitByHeight____if_window___wcrAutoFitContent_window___wcrAutoFitContent___window_scrollTo_0_0___catch_e________
              );
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar1;
    _objc_initWeak(auStack_d8,local_28);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_d0;
    local_110 = PTR___NSConcreteStackBlock_02578660;
    local_108 = 0xc2000000;
    local_104 = 0;
    local_100 = FUN_01e780a8;
    local_f8 = &DAT_0258c8f0;
    _objc_copyWeak(auStack_f0,auStack_d8);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_evaluateJavaScript_completionHan_026a12f0,puVar1,&local_110);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_d8);
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    local_48 = 0;
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

