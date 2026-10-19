// finishWithSuccess: @0x8bec

/* Function Stack Size: 0x14 bytes */

void WCMQQRefreshControl::finishWithSuccess_(ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  dispatch_time_t dVar8;
  undefined8 local_1e0;
  undefined8 local_170;
  undefined8 local_130;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined1 auStack_f8 [8];
  long local_f0;
  undefined1 auStack_e8 [15];
  byte local_d9;
  undefined8 local_d8;
  byte local_c9;
  undefined8 local_c8;
  byte local_b9;
  undefined8 local_b8;
  byte local_a9;
  undefined8 local_a8;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  long local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSend_positionIndicator(param_1);
  _objc_msgSend_setQqShowingFeedback_(local_28,local_130,1);
  IVar3 = local_28;
  lVar4 = _objc_msgSend_qqFeedbackGeneration(local_28,local_130);
  _objc_msgSend_setQqFeedbackGeneration_(IVar3,local_130);
  local_40 = lVar4 + 1;
  _objc_msgSend_qqRingLayer(local_28,local_130);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeAnimationForKey_(uVar5,local_130,&cf_refresh);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _memcpy(auStack_70,PTR__CGAffineTransformIdentity_00110738,0x30);
  _objc_msgSend_qqSymbolView(local_28,local_130);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_a0,auStack_70,0x30);
  _objc_msgSend_setTransform_(uVar5,local_130,auStack_a0);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _objc_msgSend_qqSymbolView(local_28,local_130);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar5,local_130,0);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  local_a9 = 0;
  local_b9 = 0;
  if ((local_31 & 1) == 0) {
    _objc_msgSend_systemOrangeColor(&_OBJC_CLASS___UIColor,local_130);
    local_170 = _objc_retainAutoreleasedReturnValue();
    local_b9 = 1;
    local_b8 = local_170;
  }
  else {
    _objc_msgSend_systemGreenColor(&_OBJC_CLASS___UIColor,local_130);
    local_170 = _objc_retainAutoreleasedReturnValue();
    local_a9 = 1;
    local_a8 = local_170;
  }
  _objc_msgSend_qqSymbolView(local_28,local_130);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setTintColor_(uVar5,local_130,local_170);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_b8);
  }
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_a8);
  }
  pcVar1 = &cf_checkmark;
  if ((local_31 & 1) == 0) {
    pcVar1 = &cf_exclamationmark;
  }
  _objc_msgSend_configurationWithPointSize_weight_
            (0x4024000000000000,&_OBJC_CLASS___UIImageSymbolConfiguration,local_130,6);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_systemImageNamed_withConfiguration_(&_OBJC_CLASS___UIImage,local_130,pcVar1);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_qqSymbolView(local_28,local_130);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_(uVar7,local_130,uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  pcVar1 = &cf_7Re_b;
  if ((local_31 & 1) == 0) {
    pcVar1 = &cf_7Re_g_b;
  }
  _objc_msgSend_qqMessageLabel(local_28,local_130);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setText_(uVar5,local_130,pcVar1);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _objc_msgSend_layoutIndicatorContent(local_28,local_130);
  _objc_msgSend_qqMessageLabel(local_28,local_130);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_text(uVar5,local_130);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAccessibilityLabel_(local_28,local_130);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  IVar3 = local_28;
  local_c9 = 0;
  local_d9 = 0;
  if ((local_31 & 1) == 0) {
    _objc_msgSend_systemOrangeColor(&_OBJC_CLASS___UIColor,local_130);
    local_1e0 = _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = local_1e0;
  }
  else {
    _objc_msgSend_systemGreenColor(&_OBJC_CLASS___UIColor,local_130);
    local_1e0 = _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = local_1e0;
  }
  _objc_msgSend_drawRing_color_(0x3ff0000000000000,IVar3,local_130,local_1e0);
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_d8);
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_c8);
  }
  _objc_initWeak(auStack_e8,local_28);
  dVar8 = _dispatch_time(0,450000000);
  puVar2 = PTR___dispatch_main_q_00110528;
  _objc_retainAutoreleaseReturnValue();
  uVar5 = _objc_retainAutoreleasedReturnValue(puVar2);
  local_118 = PTR___NSConcreteStackBlock_001104f0;
  local_110 = 0xc2000000;
  local_10c = 0;
  local_108 = ___41__WCMQQRefreshControl_finishWithSuccess___block_invoke;
  local_100 = &___block_descriptor_48_e8_32w_e5_v8__0l;
  _objc_copyWeak(auStack_f8,auStack_e8);
  local_f0 = local_40;
  _dispatch_after(dVar8,uVar5,&local_118);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_e8);
  return;
}

