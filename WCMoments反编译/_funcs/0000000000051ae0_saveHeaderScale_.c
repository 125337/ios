// saveHeaderScale: @0x51ae0

/* WARNING: Removing unreachable block (ram,0x00051bb8) */
/* WARNING: Removing unreachable block (ram,0x00051bcc) */
/* WARNING: Removing unreachable block (ram,0x00051bd0) */
/* WARNING: Removing unreachable block (ram,0x00051bd8) */
/* WARNING: Removing unreachable block (ram,0x00051bec) */
/* WARNING: Removing unreachable block (ram,0x00051bf0) */
/* WARNING: Removing unreachable block (ram,0x00051bfc) */
/* WARNING: Removing unreachable block (ram,0x00051c04) */
/* WARNING: Removing unreachable block (ram,0x00051b04) */
/* WARNING: Removing unreachable block (ram,0x00051b20) */
/* WARNING: Removing unreachable block (ram,0x00051b24) */
/* WARNING: Removing unreachable block (ram,0x00051b2c) */
/* WARNING: Removing unreachable block (ram,0x00051b40) */
/* WARNING: Removing unreachable block (ram,0x00051b44) */
/* WARNING: Removing unreachable block (ram,0x00051b50) */
/* WARNING: Removing unreachable block (ram,0x00051b58) */
/* Function Stack Size: 0x18 bytes */

void WCMFeedController::saveHeaderScale_(ID param_1,SEL param_2,double param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long local_e0;
  undefined8 local_c8;
  double local_b0;
  double local_a8;
  long local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  double local_50;
  SEL local_48;
  ID local_40;
  double local_30;
  
  if (ABS(param_3) != INFINITY) {
    local_58 = 0x3fe3333333333333;
    local_68 = 0x3ff6666666666666;
    local_a8 = param_3;
    if (1.4 < param_3) {
      local_a8 = 1.4;
    }
    local_78 = local_a8;
    local_60 = local_a8;
    if (local_a8 <= 0.6) {
      local_b0 = 0.6;
    }
    else {
      local_b0 = local_a8;
    }
    local_80 = local_b0;
    local_50 = local_b0;
    local_70 = param_3;
    local_48 = param_2;
    local_40 = param_1;
    local_30 = param_3;
    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_c8);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_headerBrandKey(local_40,local_c8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_dictionaryForKey_(uVar1,local_c8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar4 = _objc_msgSend_mutableCopy(uVar3,local_c8);
    local_e0 = lVar4;
    if (lVar4 == 0) {
      local_90 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
      local_e0 = local_90;
    }
    local_88 = (*(code *)PTR__objc_retain_00110460)(local_e0);
    if (lVar4 == 0) {
      (*(code *)PTR__objc_release_00110458)(local_90);
    }
    (*(code *)PTR__objc_release_00110458)(lVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_numberWithDouble_(local_50,&_OBJC_CLASS___NSNumber,local_c8);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setObject_forKeyedSubscript_(local_88,local_c8,uVar1,&cf_scale);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_c8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar1 = local_88;
    _objc_msgSend_headerBrandKey(local_40,local_c8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setObject_forKey_(uVar2,local_c8,uVar1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar5 = _objc_msgSend_ready(local_40,local_c8);
    if ((uVar5 & 1) != 0) {
      _objc_msgSend_web(local_40,local_c8);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_c8,&cf_setHeaderSize___4f_);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_evaluateJavaScript_completionHandler_(uVar1,local_c8,uVar2,0);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      (*(code *)PTR__objc_release_00110458)(uVar1);
    }
    _objc_storeStrong(&local_88,0);
  }
  return;
}

