// webView:didFinishNavigation: @0x35fa4

/* Function Stack Size: 0x20 bytes */

void WCMFeedController::webView_didFinishNavigation_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_2a0;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 local_258;
  ulong local_238;
  ulong local_230;
  undefined8 local_220;
  long local_200;
  undefined8 local_1f8;
  bool local_1e9;
  undefined8 local_1e8;
  long local_1e0;
  bool local_1d1;
  undefined8 local_1d0;
  byte local_1c1;
  undefined8 *local_1c0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  byte local_189;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  long local_160;
  byte local_151;
  undefined8 local_150;
  byte local_141;
  undefined8 local_140;
  byte local_131;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  _objc_msgSend_setReady_(local_b0,local_220,1);
  _Trace(&cf_web_ready,PTR____NSDictionary0__struct_00110720);
  local_d0 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
  _memset(auStack_118,0,0x40);
  uVar2 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010f9f8);
  local_230 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar2,local_220,auStack_118,auStack_a8,0x10);
  if (local_230 != 0) {
    lVar5 = *local_108;
    local_238 = 0;
    do {
      do {
        if (*local_108 - lVar5 != 0) {
          _objc_enumerationMutation(*local_108 - lVar5,uVar2);
        }
        local_d8 = *(undefined8 *)(local_110 + local_238 * 8);
        _objc_msgSend_configurationWithPointSize_weight_
                  (0x4032000000000000,&_OBJC_CLASS___UIImageSymbolConfiguration,local_220,5);
        local_120 = _objc_retainAutoreleasedReturnValue();
        uVar3 = _objc_msgSend_isEqualToString_(local_d8,local_220,&cf_plus);
        local_131 = 0;
        local_141 = 0;
        local_151 = 0;
        if ((((uVar3 & 1) == 0) &&
            (uVar3 = _objc_msgSend_isEqualToString_(local_d8,local_220,&cf_ellipsis),
            (uVar3 & 1) == 0)) &&
           (uVar3 = _objc_msgSend_isEqualToString_(local_d8,local_220,&cf_bell), (uVar3 & 1) == 0))
        {
          uVar3 = _objc_msgSend_isEqualToString_(local_d8,local_220,&cf_heart_fill);
          if ((uVar3 & 1) == 0) {
            _objc_msgSend_secondaryLabelColor(&_OBJC_CLASS___UIColor,local_220);
            local_260 = _objc_retainAutoreleasedReturnValue();
            local_151 = 1;
            local_150 = local_260;
          }
          else {
            _objc_msgSend_systemPinkColor(&_OBJC_CLASS___UIColor,local_220);
            local_260 = _objc_retainAutoreleasedReturnValue();
            local_141 = 1;
            local_140 = local_260;
          }
          local_258 = local_260;
        }
        else {
          _objc_msgSend_labelColor(&_OBJC_CLASS___UIColor,local_220);
          local_258 = _objc_retainAutoreleasedReturnValue();
          local_131 = 1;
          local_130 = local_258;
        }
        local_128 = (*(code *)PTR__objc_retain_00110460)(local_258);
        if ((local_151 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_150);
        }
        if ((local_141 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_140);
        }
        if ((local_131 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_130);
        }
        _objc_msgSend_systemImageNamed_withConfiguration_
                  (&_OBJC_CLASS___UIImage,local_220,local_d8,local_120);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_imageWithTintColor_renderingMode_(uVar4,local_220,local_128,1);
        local_160 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)(uVar4);
        _objc_msgSend_defaultFormat(&_OBJC_CLASS___UIGraphicsImageRendererFormat,local_220);
        local_168 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setScale_(0x4008000000000000,local_168,local_220);
        local_189 = 0;
        local_1c1 = 0;
        local_1d1 = false;
        bVar1 = local_160 == 0;
        if (bVar1) {
          local_270 = 0;
        }
        else {
          uVar4 = _objc_alloc(&_OBJC_CLASS___UIGraphicsImageRenderer);
          uVar6 = 0x4036000000000000;
          local_180 = _CGSizeMake(0x4036000000000000);
          local_178 = uVar6;
          uVar4 = _objc_msgSend_initWithSize_format_(local_180,uVar6,uVar4,local_220,local_168);
          local_189 = 1;
          local_1b8 = PTR___NSConcreteStackBlock_001104f0;
          local_1b0 = 0xc2000000;
          local_1ac = 0;
          local_1a8 = ___49__WCMFeedController_webView_didFinishNavigation___block_invoke;
          local_1a0 = &___block_descriptor_40_e8_32s_e40_v16__0__UIGraphicsImageRendererContext_8l;
          local_188 = uVar4;
          local_198 = (*(code *)PTR__objc_retain_00110460)(local_160);
          local_1c1 = 1;
          local_1c0 = &local_198;
          _objc_msgSend_imageWithActions_(uVar4,local_220,&local_1b8);
          local_270 = _objc_retainAutoreleasedReturnValue();
          local_1d0 = local_270;
        }
        local_1d1 = !bVar1;
        local_170 = (*(code *)PTR__objc_retain_00110460)(local_270);
        if ((local_1d1 & 1U) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_1d0);
        }
        if ((local_189 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_188);
        }
        local_1e9 = false;
        bVar1 = local_170 == 0;
        if (bVar1) {
          local_2a0 = 0;
        }
        else {
          _UIImagePNGRepresentation(local_170);
          local_2a0 = _objc_retainAutoreleasedReturnValue();
          local_1e8 = local_2a0;
        }
        local_1e9 = !bVar1;
        local_1e0 = (*(code *)PTR__objc_retain_00110460)(local_2a0);
        if ((local_1e9 & 1U) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_1e8);
        }
        if (local_1e0 != 0) {
          _objc_msgSend_base64EncodedStringWithOptions_(local_1e0,local_220,0);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_stringByAppendingString_(&cf_data_image_png_base64_,local_220);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setObject_forKeyedSubscript_(local_d0,local_220,uVar6,local_d8);
          (*(code *)PTR__objc_release_00110458)(uVar6);
          (*(code *)PTR__objc_release_00110458)(uVar4);
        }
        _objc_storeStrong(&local_1e0);
        _objc_storeStrong(&local_170,0);
        if ((local_1c1 & 1) != 0) {
          _objc_storeStrong(local_1c0,0);
        }
        _objc_storeStrong(&local_168);
        _objc_storeStrong(&local_160,0);
        _objc_storeStrong(&local_128,0);
        _objc_storeStrong(&local_120,0);
        local_238 = local_238 + 1;
      } while (local_238 < local_230);
      local_230 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar2,local_220,auStack_118,auStack_a8,0x10);
      local_238 = 0;
    } while (local_230 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_dataWithJSONObject_options_error_
            (&_OBJC_CLASS___NSJSONSerialization,local_220,local_d0,0,0);
  local_1f8 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSString);
  local_200 = _objc_msgSend_initWithData_encoding_(uVar2,local_220,local_1f8,4);
  _objc_msgSend_web(local_b0,local_220);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_220,&cf_installSymbols____);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_evaluateJavaScript_completionHandler_(uVar2,local_220,uVar4,0);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_applyHeaderBrand(local_b0,local_220);
  _objc_msgSend_lastJSON(local_b0,local_220);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar5 = _objc_msgSend_length(uVar2,local_220);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (lVar5 != 0) {
    _objc_msgSend_web(local_b0,local_220);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_lastJSON(local_b0,local_220);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_220,&cf_setFeed____);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_evaluateJavaScript_completionHandler_(uVar2,local_220,uVar6,0);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_msgSend_showCachedFeed(local_b0,local_220);
  _objc_msgSend_reloadFeed(local_b0,local_220);
  _objc_storeStrong(&local_200);
  _objc_storeStrong(&local_1f8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

