// setHiddenProjectiveView: @0x648c0

/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::setHiddenProjectiveView_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  double dVar6;
  undefined8 local_a0;
  uint local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  byte local_31;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = _objc_loadWeakRetained(local_18 + (long)_hiddenProjectiveView);
  local_31 = 0;
  local_78 = 0;
  if (lVar1 != 0) {
    local_30 = _objc_loadWeakRetained(local_18 + (long)_hiddenProjectiveView);
    local_31 = 1;
    local_78 = _objc_opt_respondsToSelector(local_30,"setAlpha:");
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_30);
  }
  (*(code *)PTR__objc_release_00110458)(lVar1);
  if ((local_78 & 1) != 0) {
    uVar2 = _objc_loadWeakRetained(local_18 + (long)_hiddenProjectiveView);
    dVar6 = (double)_objc_msgSend_wcm_ybib_originAlpha(uVar2,local_a0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    local_40 = dVar6;
    if (dVar6 == 1.0) {
      uVar2 = _objc_loadWeakRetained(local_18 + (long)_hiddenProjectiveView);
      _objc_msgSend_numberWithDouble_(local_40,&_OBJC_CLASS___NSNumber,local_a0);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setValue_forKey_(uVar2,local_a0,uVar3,&cf_alpha);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      (*(code *)PTR__objc_release_00110458)(uVar2);
    }
    else {
      uVar2 = _objc_loadWeakRetained(local_18 + (long)_hiddenProjectiveView);
      _objc_msgSend_setValue_forKey_
                (uVar2,local_a0,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fdb8,&cf_alpha);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      local_70 = PTR___NSConcreteStackBlock_001104f0;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = ___45__WCMYBImageBrowser_setHiddenProjectiveView___block_invoke;
      local_58 = &___block_descriptor_48_e8_32s_e5_v8__0l;
      local_50 = (*(code *)PTR__objc_retain_00110460)(local_18);
      local_48 = local_40;
      _objc_msgSend_animateWithDuration_animations_
                (0x3fc999999999999a,&_OBJC_CLASS___UIView,local_a0,&local_70);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeWeak(local_18 + (long)_hiddenProjectiveView,local_28);
  uVar4 = _objc_msgSend_autoHideProjectiveView(local_18,local_a0);
  if ((((uVar4 & 1) != 0) && (local_28 != 0)) &&
     (uVar4 = _objc_opt_respondsToSelector(local_28,"setAlpha:"), (uVar4 & 1) != 0)) {
    _objc_msgSend_valueForKey_(local_28,local_a0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    fVar5 = (float)_objc_msgSend_floatValue(uVar2,local_a0);
    _objc_msgSend_setWcm_ybib_originAlpha_((double)fVar5,local_28,local_a0);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_setValue_forKey_
              (local_28,local_a0,&PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fdd0,&cf_alpha);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

