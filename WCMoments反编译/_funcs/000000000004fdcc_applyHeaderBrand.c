// applyHeaderBrand @0x4fdcc

/* WARNING: Removing unreachable block (ram,0x000500a0) */
/* WARNING: Removing unreachable block (ram,0x000500b4) */
/* WARNING: Removing unreachable block (ram,0x000500b8) */
/* WARNING: Removing unreachable block (ram,0x000500c0) */
/* WARNING: Removing unreachable block (ram,0x000500d4) */
/* WARNING: Removing unreachable block (ram,0x000500d8) */
/* WARNING: Removing unreachable block (ram,0x000500e4) */
/* WARNING: Removing unreachable block (ram,0x000500ec) */
/* WARNING: Removing unreachable block (ram,0x0004ffec) */
/* WARNING: Removing unreachable block (ram,0x00050008) */
/* WARNING: Removing unreachable block (ram,0x0005000c) */
/* WARNING: Removing unreachable block (ram,0x00050014) */
/* WARNING: Removing unreachable block (ram,0x00050028) */
/* WARNING: Removing unreachable block (ram,0x0005002c) */
/* WARNING: Removing unreachable block (ram,0x00050038) */
/* WARNING: Removing unreachable block (ram,0x00050040) */
/* Function Stack Size: 0x10 bytes */

void WCMFeedController::applyHeaderBrand(ID param_1,SEL param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  double local_180;
  double local_178;
  undefined8 local_148;
  undefined8 local_128;
  long local_118;
  undefined8 local_110;
  bool local_101;
  cfstringStruct *local_100;
  byte local_f1;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  bool local_a1;
  undefined8 local_a0;
  long local_98;
  cfstringStruct *local_90;
  undefined8 local_88;
  SEL local_80;
  ID local_78;
  double local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_80 = param_2;
  local_78 = param_1;
  uVar2 = _objc_msgSend_ready(param_1);
  if ((uVar2 & 1) != 0) {
    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_128);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_headerBrandKey(local_78,local_128);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_dictionaryForKey_(uVar3,local_128);
    local_88 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_objectForKeyedSubscript_(local_88,local_128,&cf_text);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _Text();
    local_90 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_objectForKeyedSubscript_(local_88,local_128,&cf_png);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_opt_class(&_OBJC_CLASS___NSData);
    uVar2 = _objc_opt_isKindOfClass(uVar3,uVar4);
    local_a1 = false;
    bVar1 = (uVar2 & 1) == 0;
    if (bVar1) {
      local_148 = 0;
    }
    else {
      _objc_msgSend_objectForKeyedSubscript_(local_88,local_128,&cf_png);
      local_148 = _objc_retainAutoreleasedReturnValue();
      local_a0 = local_148;
    }
    local_a1 = !bVar1;
    local_98 = (*(code *)PTR__objc_retain_00110460)(local_148);
    if ((local_a1 & 1U) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_a0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_objectForKeyedSubscript_(local_88,local_128,&cf_scale);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    dVar6 = (double)_objc_msgSend_doubleValue(uVar3,local_128);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if ((ABS(dVar6) == INFINITY) || (local_b0 = dVar6, dVar6 <= 0.0)) {
      local_b0 = 1.0;
    }
    local_58 = &cf_scale;
    local_c0 = 0x3fe3333333333333;
    local_d0 = 0x3ff6666666666666;
    local_d8 = local_b0;
    if (local_b0 <= 1.4) {
      local_178 = local_b0;
    }
    else {
      local_178 = 1.4;
    }
    local_e0 = local_178;
    local_c8 = local_178;
    if (local_178 <= 0.6) {
      local_180 = 0.6;
    }
    else {
      local_180 = local_178;
    }
    local_e8 = local_180;
    local_68 = dVar6;
    _objc_msgSend_numberWithDouble_(local_180,&_OBJC_CLASS___NSNumber,local_128);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_50 = &cf_text;
    local_40 = uVar3;
    lVar5 = _objc_msgSend_length(local_90,local_128);
    if (lVar5 == 0) {
      local_190 = &cf_gSW;
    }
    else {
      local_190 = local_90;
    }
    local_38 = local_190;
    local_48 = &cf_image;
    local_f1 = 0;
    local_101 = false;
    bVar1 = local_98 == 0;
    if (bVar1) {
      local_198 = &cf___;
    }
    else {
      _objc_msgSend_base64EncodedStringWithOptions_(local_98,local_128,0);
      local_f0 = _objc_retainAutoreleasedReturnValue();
      local_f1 = 1;
      _objc_msgSend_stringByAppendingString_(&cf_data_image_png_base64_,local_128);
      local_198 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
      local_100 = local_198;
    }
    local_101 = !bVar1;
    local_30 = local_198;
    _objc_msgSend_dictionaryWithObjects_forKeys_count_
              (&_OBJC_CLASS___NSDictionary,local_128,&local_40,&local_58,3);
    local_b8 = _objc_retainAutoreleasedReturnValue();
    if ((local_101 & 1U) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_100);
    }
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_f0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_dataWithJSONObject_options_error_
              (&_OBJC_CLASS___NSJSONSerialization,local_128,local_b8,0,0);
    local_110 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_alloc(&_OBJC_CLASS___NSString);
    local_118 = _objc_msgSend_initWithData_encoding_(uVar3,local_128,local_110,4);
    if (local_118 != 0) {
      _objc_msgSend_web(local_78,local_128);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_128,&cf_setHeaderBrand____);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_evaluateJavaScript_completionHandler_(uVar3,local_128,uVar4,0);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
    }
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

