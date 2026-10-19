// saveHeaderText: @0x504ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCMFeedController::saveHeaderText_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *local_198;
  long local_180;
  undefined8 local_108;
  long local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  undefined8 local_58;
  SEL local_50;
  ID local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  uVar2 = local_58;
  _objc_msgSend_whitespaceAndNewlineCharacterSet(&_OBJC_CLASS___NSCharacterSet,local_108);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_stringByTrimmingCharactersInSet_(uVar2,local_108);
  local_60 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_68 = (cfstringStruct *)_objc_opt_new(&_OBJC_CLASS___NSMutableString);
  uVar2 = local_60;
  local_80 = &local_88;
  local_88 = 0;
  local_78 = 0x20000000;
  local_74 = 0x20;
  local_70 = 0;
  local_90 = _objc_msgSend_length(local_60,local_108);
  local_38 = 0;
  local_30 = 0;
  local_98 = 0;
  local_d8 = PTR___NSConcreteStackBlock_001104f0;
  local_d0 = 0xc2000000;
  local_cc = 0;
  local_c8 = ___36__WCMFeedController_saveHeaderText___block_invoke;
  local_c0 = &
             ___block_descriptor_48_e8_32s40r_e52_v56__0__NSString_8__NSRange_QQ_16__NSRange_QQ_32_B48l
  ;
  local_b0 = &local_88;
  local_40 = local_90;
  local_28 = local_90;
  local_b8 = (*(code *)PTR__objc_retain_00110460)(local_68);
  _objc_msgSend_enumerateSubstringsInRange_options_usingBlock_
            (uVar2,local_108,local_98,local_90,2,&local_d8);
  uVar2 = _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_108);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar1 = _objc_msgSend_headerBrandKey(local_48,local_108);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar3 = _objc_msgSend_dictionaryForKey_(uVar2,local_108);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  lVar4 = _objc_msgSend_mutableCopy(uVar3,local_108);
  local_180 = lVar4;
  if (lVar4 == 0) {
    local_e8 = _objc_opt_new(&_OBJC_CLASS___NSMutableDictionary);
    local_180 = local_e8;
  }
  local_e0 = (*(code *)PTR__objc_retain_00110460)(local_180);
  if (lVar4 == 0) {
    (*(code *)PTR__objc_release_00110458)(local_e8);
  }
  (*(code *)PTR__objc_release_00110458)(lVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  lVar4 = _objc_msgSend_length(local_68,local_108);
  if (lVar4 == 0) {
    local_198 = &cf_gSW;
  }
  else {
    local_198 = local_68;
  }
  _objc_msgSend_setObject_forKeyedSubscript_(local_e0,local_108,local_198,&cf_text);
  _objc_msgSend_removeObjectForKey_(local_e0,local_108,&cf_png);
  uVar2 = _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_108);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = local_e0;
  uVar3 = _objc_msgSend_headerBrandKey(local_48,local_108);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  _objc_msgSend_setObject_forKey_(uVar1,local_108,uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_applyHeaderBrand(local_48,local_108);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_b8,0);
  __Block_object_dispose(&local_88,8);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  return;
}

