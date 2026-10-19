// _WCMEmojiText @0xd6ec

void _WCMEmojiText(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  long local_2e8;
  ulong local_2a8;
  ulong local_2a0;
  undefined8 local_238;
  undefined8 local_1d8;
  byte local_1c9;
  long local_1c8;
  long local_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_13c;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [128];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_110 = 0;
  _objc_storeStrong(&local_110,param_1);
  local_118 = 0;
  _objc_storeStrong(&local_118,param_2);
  local_120 = 0;
  _objc_storeStrong(&local_120,param_3);
  uVar1 = _objc_alloc(&_OBJC_CLASS___NSMutableAttributedString);
  uVar3 = local_110;
  local_48 = *(undefined8 *)PTR__NSFontAttributeName_00110048;
  local_38 = local_118;
  local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_00110050;
  local_30 = local_120;
  _objc_msgSend_dictionaryWithObjects_forKeys_count_
            (&_OBJC_CLASS___NSDictionary,local_238,&local_38,&local_48,2);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_128 = _objc_msgSend_initWithString_attributes_(uVar1,local_238,uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_138 = _objc_msgSend_rangeOfString_(local_110,local_238,&cf__);
  if (local_138._0_8_ == 0x7fffffffffffffff) {
    local_108 = (*(code *)PTR__objc_retain_00110460)(local_128);
    local_13c = 1;
  }
  else {
    local_f8 = &_WCMEmojiText_once;
    local_100 = 0;
    _objc_storeStrong(&local_100,&___block_literal_global_2941);
    if (*local_f8 + 1 != 0) {
      _dispatch_once(*local_f8 + 1,local_f8,local_100);
    }
    _objc_storeStrong(&local_100,0);
    uVar3 = _NSClassFromString(&cf_EmoticonParser);
    _Call(uVar3,&cf_newInstance,PTR____NSArray0__struct_00110718);
    local_148 = _objc_retainAutoreleasedReturnValue();
    _memset(auStack_190,0,0x40);
    uVar1 = local_110;
    uVar3 = _WCMEmojiText_regex;
    local_198 = _objc_msgSend_length(local_110,local_238);
    local_e8 = 0;
    local_e0 = 0;
    local_1a0 = 0;
    local_f0 = local_198;
    local_d8 = local_198;
    _objc_msgSend_matchesInString_options_range_(uVar3,local_238,uVar1,0,0,local_198);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_reverseObjectEnumerator(uVar3,local_238);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar3);
    local_2a0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar1,local_238,auStack_190,auStack_c8,0x10);
    if (local_2a0 != 0) {
      lVar6 = *local_180;
      local_2a8 = 0;
      do {
        do {
          if (*local_180 - lVar6 != 0) {
            _objc_enumerationMutation(*local_180 - lVar6,uVar1);
          }
          uVar3 = local_110;
          local_150 = *(undefined8 *)(local_188 + local_2a8 * 8);
          auVar9 = _objc_msgSend_range(local_150,local_238);
          local_1b8 = auVar9;
          _objc_msgSend_substringWithRange_(uVar3,local_238,auVar9._0_8_,auVar9._8_8_);
          local_1a8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_objectForKey_(_WCMEmojiText_images,local_238,local_1a8);
          local_1c0 = _objc_retainAutoreleasedReturnValue();
          uVar3 = local_148;
          if (local_1c0 == 0) {
            local_d0 = local_1a8;
            _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_238,&local_d0,1);
            uVar2 = _objc_retainAutoreleasedReturnValue();
            _Call(uVar3,&cf_getImageForText_);
            lVar4 = _objc_retainAutoreleasedReturnValue();
            local_1c9 = 0;
            local_2e8 = lVar4;
            if (lVar4 == 0) {
              _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_238);
              local_1c8 = _objc_retainAutoreleasedReturnValue();
              local_2e8 = local_1c8;
            }
            local_1c9 = lVar4 == 0;
            _objc_storeStrong(&local_1c0,local_2e8);
            if ((local_1c9 & 1) != 0) {
              (*(code *)PTR__objc_release_00110458)(local_1c8);
            }
            (*(code *)PTR__objc_release_00110458)(lVar4);
            (*(code *)PTR__objc_release_00110458)(uVar2);
            _objc_msgSend_setObject_forKey_(_WCMEmojiText_images,local_238,local_1c0,local_1a8);
          }
          lVar4 = local_1c0;
          uVar3 = _objc_opt_class(&_OBJC_CLASS___UIImage);
          uVar5 = _objc_opt_isKindOfClass(lVar4,uVar3);
          if ((uVar5 & 1) == 0) {
            local_13c = 3;
          }
          else {
            local_1d8 = _objc_opt_new(&_OBJC_CLASS___NSTextAttachment);
            _objc_msgSend_setImage_(local_1d8,local_238,local_1c0);
            uVar2 = _objc_msgSend_lineHeight(local_118,local_238);
            uVar7 = _objc_msgSend_descender(local_118,local_238);
            uVar3 = uVar2;
            uVar8 = _CGRectMake(0);
            _objc_msgSend_setBounds_(uVar8,uVar7,uVar2,uVar3,local_1d8,local_238);
            uVar3 = local_128;
            auVar9 = _objc_msgSend_range(local_150,local_238);
            _objc_msgSend_attributedStringWithAttachment_
                      (&_OBJC_CLASS___NSAttributedString,local_238,local_1d8);
            uVar2 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_replaceCharactersInRange_withAttributedString_
                      (uVar3,local_238,auVar9._0_8_,auVar9._8_8_);
            (*(code *)PTR__objc_release_00110458)(uVar2);
            _objc_storeStrong(&local_1d8,0);
            local_13c = 0;
          }
          _objc_storeStrong(&local_1c0);
          _objc_storeStrong(&local_1a8,0);
          local_2a8 = local_2a8 + 1;
        } while (local_2a8 < local_2a0);
        local_2a0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar1,local_238,auStack_190,auStack_c8,0x10);
        local_2a8 = 0;
      } while (local_2a0 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar1);
    local_108 = (*(code *)PTR__objc_retain_00110460)(local_128);
    local_13c = 1;
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_108);
  return;
}

