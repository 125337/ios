// forceWebFadeIn @ 01e8e1b0

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineToDoCardView::forceWebFadeIn(WCRefineToDoCardView *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ulong uVar3;
  ID IVar4;
  double in_d0;
  uint local_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webFadeInFallbackSignature_026c7310);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_29 = 0;
  local_5c = 1;
  if ((IVar2 & 1) != 0) {
    uVar3 = DAT_028e47e0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e47e0,PTR_s_isEqualToString__0269ccc8,DAT_028e47d8)
    ;
    local_5c = 1;
    if ((uVar3 & 1) != 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      local_29 = 1;
      local_28 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_5c = (uint)IVar2;
    }
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((local_5c & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webSnapshotImageView_026c6ec0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar4 & 1) != 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_38 = local_18;
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      if (in_d0 < 1.0) {
        local_58 = PTR___NSConcreteStackBlock_02578660;
        local_50 = 0xc2000000;
        local_4c = 0;
        local_48 = FUN_01e8e468;
        local_40 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02323c70,puVar1,PTR_s_animateWithDuration_animations__026ca4e0,&local_58);
        _objc_storeStrong(&local_38,0);
      }
    }
  }
  return;
}

