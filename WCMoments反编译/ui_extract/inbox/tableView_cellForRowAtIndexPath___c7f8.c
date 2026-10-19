// tableView:cellForRowAtIndexPath: @0xc7f8


/* Function Stack Size: 0x20 bytes */



ID WCMInboxController::tableView_cellForRowAtIndexPath_

             (ID param_1,SEL param_2,ID param_3,ID param_4)



{

  bool bVar1;

  cfstringStruct *pcVar2;

  undefined *puVar3;

  long lVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  ulong uVar10;

  ID IVar11;

  undefined8 local_368;

  undefined8 local_300;

  long local_1f0;

  undefined8 local_1e0;

  undefined8 local_188;

  undefined8 local_180;

  bool local_171;

  undefined8 local_170;

  undefined8 local_168;

  undefined8 local_160;

  undefined8 local_158;

  undefined8 local_150;

  undefined8 uStack_148;

  undefined8 local_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 local_120;

  undefined8 uStack_118;

  undefined8 local_110;

  undefined8 uStack_108;

  undefined8 local_100;

  undefined8 uStack_f8;

  byte local_e9;

  undefined8 local_e8;

  undefined8 local_e0;

  undefined8 local_d8;

  undefined8 local_d0;

  undefined8 local_c8;

  long local_c0;

  undefined8 local_b8;

  undefined8 local_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 local_98;

  byte local_89;

  long local_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined8 local_70;

  SEL local_68;

  ID local_60;

  undefined8 local_58;

  long *local_50;

  undefined8 local_48;

  undefined8 local_40;

  undefined **local_38;

  undefined8 local_30;

  long local_28;

  

  local_28 = *(long *)PTR____stack_chk_guard_00110518;

  local_70 = 0;

  local_68 = param_2;

  local_60 = param_1;

  _objc_storeStrong(&local_70,param_3);

  local_78 = 0;

  _objc_storeStrong(&local_78,param_4);

  _objc_msgSend_dequeueReusableCellWithIdentifier_(local_70,local_1e0,&cf_WCMInbox);

  lVar4 = _objc_retainAutoreleasedReturnValue();

  local_89 = 0;

  local_1f0 = lVar4;

  if (lVar4 == 0) {

    uVar5 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);

    local_88 = _objc_msgSend_initWithStyle_reuseIdentifier_(uVar5,local_1e0,3,&cf_WCMInbox);

    local_1f0 = local_88;

  }

  local_89 = lVar4 == 0;

  local_80 = (*(code *)PTR__objc_retain_00110460)(local_1f0);

  if ((local_89 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_88);

  }

  (*(code *)PTR__objc_release_00110458)(lVar4);

  _objc_msgSend_filtered(local_60,local_1e0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uVar6 = _objc_msgSend_row(local_78,local_1e0);

  _objc_msgSend_objectAtIndexedSubscript_(uVar5,local_1e0,uVar6);

  local_98 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar5);

  puVar3 = PTR____NSArray0__struct_00110718;

  _Call(local_98,&cf_comment);

  local_a0 = _objc_retainAutoreleasedReturnValue();

  _Call(local_a0,&cf_username,puVar3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _Text();

  local_a8 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _Service(&cf_CContactMgr);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_30 = local_a8;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1e0,&local_30,1);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar5,&cf_getContactByName_);

  local_b0 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _Call(local_b0,&cf_getContactDisplayName,puVar3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _Text();

  local_b8 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar5);

  lVar4 = _objc_msgSend_length(local_b8,local_1e0);

  if (lVar4 == 0) {

    _Call(local_a0,&cf_nickname,PTR____NSArray0__struct_00110718);

    uVar6 = _objc_retainAutoreleasedReturnValue();

    _Text();

    uVar7 = _objc_retainAutoreleasedReturnValue();

    uVar5 = local_b8;

    local_b8 = uVar7;

    (*(code *)PTR__objc_release_00110458)(uVar5);

    (*(code *)PTR__objc_release_00110458)(uVar6);

  }

  lVar4 = _objc_msgSend_length(local_b8,local_1e0);

  if (lVar4 == 0) {

    _objc_storeStrong(&local_b8,local_a8);

  }

  puVar3 = PTR____NSArray0__struct_00110718;

  _Call(local_a0,&cf_type);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  lVar4 = _objc_msgSend_integerValue(uVar5,local_1e0);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  local_c0 = lVar4;

  _Call(local_a0,&cf_content,puVar3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _Text();

  local_c8 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar5);

  if (local_c0 + -1 == 0) {

    _objc_storeStrong(&local_c8,&cf_a_);

  }

  else {

    lVar4 = _objc_msgSend_length(local_c0 + -1,local_c8,local_1e0);

    if (lVar4 == 0) {

      pcVar2 = &cf_Nh_bVGr;

      if (local_c0 != 8) {

        pcVar2 = &cf_N_OvgSW;

      }

      _objc_storeStrong(&local_c8,pcVar2);

    }

  }

  local_50 = &_tableView_cellForRowAtIndexPath__once;

  local_58 = 0;

  _objc_storeStrong(&local_58,&___block_literal_global);

  if (*local_50 + 1 != 0) {

    _dispatch_once(*local_50 + 1,local_50,local_58);

  }

  _objc_storeStrong(&local_58,0);

  uVar5 = _tableView_cellForRowAtIndexPath__formatter;

  _Call(local_a0,&cf_createTime,PTR____NSArray0__struct_00110718);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_doubleValue(uVar6,local_1e0);

  _objc_msgSend_dateWithTimeIntervalSince1970_(&_OBJC_CLASS___NSDate,local_1e0);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_stringFromDate_(uVar5,local_1e0);

  local_d0 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  _objc_msgSend_subtitleCellConfiguration(&_OBJC_CLASS___UIListContentConfiguration,local_1e0);

  local_d8 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setText_(local_d8,local_1e0,local_b8);

  _objc_msgSend_systemFontOfSize_weight_

            (0x402e000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_001100d0,

             &_OBJC_CLASS___UIFont,local_1e0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_textProperties(local_d8,local_1e0);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFont_(uVar6,local_1e0,uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_1e0,&cf_____);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setSecondaryText_(local_d8,local_1e0);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _objc_msgSend_secondaryTextProperties(local_d8,local_1e0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setNumberOfLines_(uVar5,local_1e0,3);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _objc_msgSend_systemFontOfSize_(0x402a000000000000,&_OBJC_CLASS___UIFont,local_1e0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_secondaryTextProperties(local_d8,local_1e0);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setFont_(uVar6,local_1e0,uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _objc_msgSend_secondaryLabelColor(&_OBJC_CLASS___UIColor,local_1e0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_secondaryTextProperties(local_d8,local_1e0);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setColor_(uVar6,local_1e0,uVar5);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _objc_msgSend_secondaryText(local_d8,local_1e0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_secondaryTextProperties(local_d8,local_1e0);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_font(uVar6,local_1e0);

  uVar7 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_secondaryLabelColor(&_OBJC_CLASS___UIColor,local_1e0);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _WCMEmojiText(uVar5,uVar7);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setSecondaryAttributedText_(local_d8,local_1e0);

  (*(code *)PTR__objc_release_00110458)(uVar9);

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _Service(&cf_MMHeadImageMgr);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_40 = local_a8;

  local_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1e0,&local_40,2);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar5,&cf_getHeadImage_withCategory_);

  local_e0 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  uVar5 = local_e0;

  uVar6 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar10 = _objc_opt_isKindOfClass(uVar5,uVar6);

  local_e9 = 0;

  bVar1 = (uVar10 & 1) == 0;

  if (bVar1) {

    _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_1e0,&cf_person_crop_circle_fill);

    local_300 = _objc_retainAutoreleasedReturnValue();

    local_e8 = local_300;

  }

  else {

    local_300 = local_e0;

  }

  local_e9 = bVar1;

  _objc_msgSend_setImage_(local_d8,local_1e0,local_300);

  if ((local_e9 & 1) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_e8);

  }

  uVar5 = 0x4046000000000000;

  local_100 = _CGSizeMake(0x4046000000000000);

  uStack_f8 = uVar5;

  _objc_msgSend_imageProperties(local_d8,local_1e0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  uStack_108 = uStack_f8;

  local_110 = local_100;

  _objc_msgSend_setMaximumSize_(local_100,uStack_f8,uVar5,local_1e0);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _objc_msgSend_imageProperties(local_d8,local_1e0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _objc_msgSend_setCornerRadius_(uVar5,local_1e0);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  uVar6 = 0x4036000000000000;

  uVar7 = 0x4028000000000000;

  uVar5 = uVar6;

  local_150 = _NSDirectionalEdgeInsetsMake(0x4028000000000000);

  uStack_148 = uVar6;

  local_140 = uVar7;

  uStack_138 = uVar5;

  local_130 = local_150;

  uStack_128 = uVar6;

  local_120 = uVar7;

  uStack_118 = uVar5;

  _objc_msgSend_setDirectionalLayoutMargins_(local_150,uVar6,uVar7,uVar5,local_d8,local_1e0);

  _objc_msgSend_setContentConfiguration_(local_80,local_1e0,local_d8);

  _objc_msgSend_setAccessoryType_(local_80,local_1e0);

  _objc_msgSend_facade(local_60,local_1e0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  puVar3 = PTR____NSArray0__struct_00110718;

  _Call(local_98,&cf_objID);

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _Text();

  uVar7 = _objc_retainAutoreleasedReturnValue();

  local_48 = uVar7;

  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1e0,&local_48,1);

  uVar8 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar5,&cf_getDataItemByID_);

  local_158 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar8);

  (*(code *)PTR__objc_release_00110458)(uVar7);

  (*(code *)PTR__objc_release_00110458)(uVar6);

  (*(code *)PTR__objc_release_00110458)(uVar5);

  _Call(local_158,&cf_contentObj,puVar3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  _Call(uVar5,&cf_mediaList,puVar3);

  local_160 = _objc_retainAutoreleasedReturnValue();

  (*(code *)PTR__objc_release_00110458)(uVar5);

  uVar5 = local_160;

  uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);

  uVar10 = _objc_opt_isKindOfClass(uVar5,uVar6);

  local_171 = false;

  bVar1 = (uVar10 & 1) == 0;

  if (bVar1) {

    local_368 = 0;

  }

  else {

    _objc_msgSend_firstObject(local_160,local_1e0);

    local_368 = _objc_retainAutoreleasedReturnValue();

    local_170 = local_368;

  }

  local_171 = !bVar1;

  local_168 = (*(code *)PTR__objc_retain_00110460)(local_368);

  if ((local_171 & 1U) != 0) {

    (*(code *)PTR__objc_release_00110458)(local_170);

  }

  _Call(local_168,&cf_imageOfSize_,&PTR__OBJC_CLASS___NSConstantArray_0010f8f0);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  local_180 = uVar5;

  uVar6 = _objc_opt_class(&_OBJC_CLASS___UIImage);

  uVar10 = _objc_opt_isKindOfClass(uVar5,uVar6);

  if ((uVar10 & 1) == 0) {

    _objc_msgSend_setAccessoryView_(local_80,local_1e0,0);

  }

  else {

    uVar5 = _objc_alloc(&_OBJC_CLASS___UIImageView);

    local_188 = _objc_msgSend_initWithImage_(uVar5,local_1e0,local_180);

    uVar6 = 0;

    uVar8 = 0x404b000000000000;

    uVar7 = 0x404b000000000000;

    uVar5 = _CGRectMake(0);

    _objc_msgSend_setFrame_(uVar5,uVar6,uVar7,uVar8,local_188,local_1e0);

    _objc_msgSend_setContentMode_(local_188,local_1e0,2);

    _objc_msgSend_layer(local_188,local_1e0);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_setCornerRadius_(0x4028000000000000,uVar5,local_1e0);

    (*(code *)PTR__objc_release_00110458)(uVar5);

    _objc_msgSend_setClipsToBounds_(local_188,local_1e0,1);

    _objc_msgSend_setAccessoryView_(local_80,local_1e0,local_188);

    _objc_storeStrong(&local_188,0);

  }

  _StyleMessageCell(local_80);

  uVar5 = (*(code *)PTR__objc_retain_00110460)(local_80);

  _objc_storeStrong(&local_180);

  _objc_storeStrong(&local_168,0);

  _objc_storeStrong(&local_160,0);

  _objc_storeStrong(&local_158,0);

  _objc_storeStrong(&local_e0,0);

  _objc_storeStrong(&local_d8,0);

  _objc_storeStrong(&local_d0,0);

  _objc_storeStrong(&local_c8,0);

  _objc_storeStrong(&local_b8,0);

  _objc_storeStrong(&local_b0,0);

  _objc_storeStrong(&local_a8,0);

  _objc_storeStrong(&local_a0,0);

  _objc_storeStrong(&local_98,0);

  _objc_storeStrong(&local_80,0);

  _objc_storeStrong(&local_78,0);

  _objc_storeStrong(&local_70,0);

  if (*(long *)PTR____stack_chk_guard_00110518 == local_28) {

    IVar11 = _objc_autoreleaseReturnValue(0,uVar5);

    return IVar11;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




