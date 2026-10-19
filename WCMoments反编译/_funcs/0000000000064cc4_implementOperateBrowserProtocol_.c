// implementOperateBrowserProtocol: @0x64cc4

/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::implementOperateBrowserProtocol_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 local_e0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  _objc_initWeak(auStack_40,local_28);
  uVar2 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_hideBrowser:");
  uVar1 = local_38;
  if ((uVar2 & 1) != 0) {
    local_78 = PTR___NSConcreteStackBlock_001104f0;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = ___53__WCMYBImageBrowser_implementOperateBrowserProtocol___block_invoke;
    local_60 = &___block_descriptor_40_e8_32w_e5_v8__0l;
    _objc_copyWeak(auStack_58,auStack_40);
    _objc_msgSend_setWcm_yb_hideBrowser_(uVar1,local_e0,&local_78);
    _objc_destroyWeak(auStack_58);
  }
  uVar2 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_hideStatusBar:");
  uVar1 = local_38;
  if ((uVar2 & 1) != 0) {
    local_a0 = PTR___NSConcreteStackBlock_001104f0;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = ___53__WCMYBImageBrowser_implementOperateBrowserProtocol___block_invoke_36;
    local_88 = &___block_descriptor_40_e8_32w_e8_v12__0B8l;
    _objc_copyWeak(auStack_80,auStack_40);
    _objc_msgSend_setWcm_yb_hideStatusBar_(uVar1,local_e0,&local_a0);
    _objc_destroyWeak(auStack_80);
  }
  uVar2 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_hideToolViews:");
  uVar1 = local_38;
  if ((uVar2 & 1) != 0) {
    local_c8 = PTR___NSConcreteStackBlock_001104f0;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = ___53__WCMYBImageBrowser_implementOperateBrowserProtocol___block_invoke_40;
    local_b0 = &___block_descriptor_40_e8_32w_e8_v12__0B8l;
    _objc_copyWeak(auStack_a8,auStack_40);
    _objc_msgSend_setWcm_yb_hideToolViews_(uVar1,local_e0,&local_c8);
    _objc_destroyWeak(auStack_a8);
  }
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  return;
}

