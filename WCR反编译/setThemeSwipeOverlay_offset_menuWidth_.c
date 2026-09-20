// setThemeSwipeOverlay:offset:menuWidth: @ 01fbfef4

/* Function Stack Size: 0x28 bytes */

void WCRefineWechatThemeManagerViewController::setThemeSwipeOverlay_offset_menuWidth_
               (ID param_1,SEL param_2,ID param_3,double param_4,double param_5)

{
  long lVar1;
  double local_108;
  double local_100;
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [48];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  undefined4 local_4c;
  double local_48;
  double local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = param_5;
  local_40 = param_4;
  if ((local_38 == 0) || (param_5 < 1.0)) {
    local_4c = 1;
  }
  else {
    local_60 = 0;
    local_100 = param_4;
    if (param_5 < param_4) {
      local_100 = param_5;
    }
    local_80 = local_100;
    local_68 = local_100;
    if (local_100 <= 0.0) {
      local_108 = 0.0;
    }
    else {
      local_108 = local_100;
    }
    local_88 = local_108;
    local_58 = local_108;
    local_78 = param_4;
    local_70 = param_5;
    _CGAffineTransformMakeTranslation(param_5 - local_108,0);
    lVar1 = local_38;
    _memcpy(auStack_e8,auStack_b8,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setHidden__026ca970,local_58 <= 0.5);
    local_4c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

