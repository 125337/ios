// implementGetBaseInfoProtocol: @0x65208

/* Function Stack Size: 0x18 bytes */

void WCMYBImageBrowser::implementGetBaseInfoProtocol_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_250;
  undefined *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  code *local_228;
  undefined *local_220;
  undefined1 auStack_218 [8];
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  undefined1 auStack_1f0 [8];
  undefined *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  undefined *local_1d0;
  undefined1 auStack_1c8 [8];
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined1 auStack_178 [8];
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined1 auStack_150 [8];
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined1 auStack_100 [8];
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [8];
  SEL local_d0;
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
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_currentOrientation:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_78 = PTR___NSConcreteStackBlock_001104f0;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke;
    local_60 = &___block_descriptor_40_e8_32w_e5_q8__0l;
    _objc_copyWeak(auStack_58,auStack_40);
    _objc_msgSend_setWcm_yb_currentOrientation_(uVar2,local_250,&local_78);
    _objc_destroyWeak(auStack_58);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_containerSize:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_a0 = PTR___NSConcreteStackBlock_001104f0;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_46;
    local_88 = &___block_descriptor_40_e8_32w_e18__CGSize_dd_16__0q8l;
    _objc_copyWeak(auStack_80,auStack_40);
    _objc_msgSend_setWcm_yb_containerSize_(uVar2,local_250,&local_a0);
    _objc_destroyWeak(auStack_80);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_auxiliaryViewHandler:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_c8 = PTR___NSConcreteStackBlock_001104f0;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_50;
    local_b0 = &___block_descriptor_40_e8_32w_e36___<WCMYBIBAuxiliaryViewHandler>_8__0l;
    _objc_copyWeak(auStack_a8,auStack_40);
    _objc_msgSend_setWcm_yb_auxiliaryViewHandler_(uVar2,local_250,&local_c8);
    _objc_destroyWeak(auStack_a8);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_webImageMediator:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_f8 = PTR___NSConcreteStackBlock_001104f0;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_54;
    local_e0 = &___block_descriptor_48_e8_32w_e32___<WCMYBIBWebImageMediator>_8__0l;
    _objc_copyWeak(auStack_d8,auStack_40);
    local_d0 = local_30;
    _objc_msgSend_setWcm_yb_webImageMediator_(uVar2,local_250,&local_f8);
    _objc_destroyWeak(auStack_d8);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_currentPage:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_120 = PTR___NSConcreteStackBlock_001104f0;
    local_118 = 0xc2000000;
    local_114 = 0;
    local_110 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_63;
    local_108 = &___block_descriptor_40_e8_32w_e5_q8__0l;
    _objc_copyWeak(auStack_100,auStack_40);
    _objc_msgSend_setWcm_yb_currentPage_(uVar2,local_250,&local_120);
    _objc_destroyWeak(auStack_100);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_totalPage:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_148 = PTR___NSConcreteStackBlock_001104f0;
    local_140 = 0xc2000000;
    local_13c = 0;
    local_138 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_2;
    local_130 = &___block_descriptor_40_e8_32w_e5_q8__0l;
    _objc_copyWeak(auStack_128,auStack_40);
    _objc_msgSend_setWcm_yb_totalPage_(uVar2,local_250,&local_148);
    _objc_destroyWeak(auStack_128);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_backView:");
  if ((uVar1 & 1) != 0) {
    _objc_msgSend_setWcm_yb_backView_(local_38,local_250,local_28);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_containerView:");
  if ((uVar1 & 1) != 0) {
    uVar2 = _objc_msgSend_containerView(local_28,local_250);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    _objc_msgSend_setWcm_yb_containerView_(local_38,local_250);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_collectionView:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_170 = PTR___NSConcreteStackBlock_001104f0;
    local_168 = 0xc2000000;
    local_164 = 0;
    local_160 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_3;
    local_158 = &___block_descriptor_40_e8_32w_e23___UICollectionView_8__0l;
    _objc_copyWeak(auStack_150,auStack_40);
    _objc_msgSend_setWcm_yb_collectionView_(uVar2,local_250,&local_170);
    _objc_destroyWeak(auStack_150);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_cellIsInCenter:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_198 = PTR___NSConcreteStackBlock_001104f0;
    local_190 = 0xc2000000;
    local_18c = 0;
    local_188 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_75;
    local_180 = &___block_descriptor_40_e8_32w_e5_B8__0l;
    _objc_copyWeak(auStack_178,auStack_40);
    _objc_msgSend_setWcm_yb_cellIsInCenter_(uVar2,local_250,&local_198);
    _objc_destroyWeak(auStack_178);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_isTransitioning:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_1c0 = PTR___NSConcreteStackBlock_001104f0;
    local_1b8 = 0xc2000000;
    local_1b4 = 0;
    local_1b0 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_79;
    local_1a8 = &___block_descriptor_40_e8_32w_e5_B8__0l;
    _objc_copyWeak(auStack_1a0,auStack_40);
    _objc_msgSend_setWcm_yb_isTransitioning_(uVar2,local_250,&local_1c0);
    _objc_destroyWeak(auStack_1a0);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_isShowTransitioning:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_1e8 = PTR___NSConcreteStackBlock_001104f0;
    local_1e0 = 0xc2000000;
    local_1dc = 0;
    local_1d8 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_2_82;
    local_1d0 = &___block_descriptor_40_e8_32w_e5_B8__0l;
    _objc_copyWeak(auStack_1c8,auStack_40);
    _objc_msgSend_setWcm_yb_isShowTransitioning_(uVar2,local_250,&local_1e8);
    _objc_destroyWeak(auStack_1c8);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_isHideTransitioning:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_210 = PTR___NSConcreteStackBlock_001104f0;
    local_208 = 0xc2000000;
    local_204 = 0;
    local_200 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_3_85;
    local_1f8 = &___block_descriptor_40_e8_32w_e5_B8__0l;
    _objc_copyWeak(auStack_1f0,auStack_40);
    _objc_msgSend_setWcm_yb_isHideTransitioning_(uVar2,local_250,&local_210);
    _objc_destroyWeak(auStack_1f0);
  }
  uVar1 = _objc_opt_respondsToSelector(local_38,"setWcm_yb_isRotating:");
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    local_238 = PTR___NSConcreteStackBlock_001104f0;
    local_230 = 0xc2000000;
    local_22c = 0;
    local_228 = ___50__WCMYBImageBrowser_implementGetBaseInfoProtocol___block_invoke_4;
    local_220 = &___block_descriptor_40_e8_32w_e5_B8__0l;
    _objc_copyWeak(auStack_218,auStack_40);
    _objc_msgSend_setWcm_yb_isRotating_(uVar2,local_250,&local_238);
    _objc_destroyWeak(auStack_218);
  }
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  return;
}

