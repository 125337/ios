// tableView:cellForRowAtIndexPath: @0x134ac

/* Function Stack Size: 0x20 bytes */

ID WCMVideoComments::tableView_cellForRowAtIndexPath_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ID IVar10;
  undefined8 local_268;
  undefined8 local_1f0;
  long local_150;
  undefined8 local_140;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  byte local_79;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  SEL local_58;
  ID local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  _objc_msgSend_dequeueReusableCellWithIdentifier_(local_60,local_140,&cf_comment);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  local_79 = 0;
  local_150 = lVar4;
  if (lVar4 == 0) {
    uVar5 = _objc_alloc(&_OBJC_CLASS___UITableViewCell);
    local_78 = _objc_msgSend_initWithStyle_reuseIdentifier_(uVar5,local_140,3,&cf_comment);
    local_150 = local_78;
  }
  local_79 = lVar4 == 0;
  local_70 = (*(code *)PTR__objc_retain_00110460)(local_150);
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_78);
  }
  (*(code *)PTR__objc_release_00110458)(lVar4);
  _objc_msgSend_comments(local_50,local_140);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar6 = _objc_msgSend_row(local_68,local_140);
  _objc_msgSend_objectAtIndexedSubscript_(uVar5,local_140,uVar6);
  local_88 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar5);
  puVar2 = PTR____NSArray0__struct_00110718;
  _Call(local_88,&cf_username);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _Text();
  local_90 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _Service(&cf_CContactMgr);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  local_30 = local_90;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_140,&local_30,1);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar5,&cf_getContactByName_);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar7,&cf_getContactDisplayName,puVar2);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _Text();
  local_98 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar8);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  lVar4 = _objc_msgSend_length(local_98,local_140);
  if (lVar4 == 0) {
    _Call(local_88,&cf_nickname,PTR____NSArray0__struct_00110718);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _Text();
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar5 = local_98;
    local_98 = uVar7;
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar6);
  }
  puVar2 = PTR____NSArray0__struct_00110718;
  _Call(local_88,&cf_content);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _Text();
  local_a0 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _Call(local_88,&cf_refUserName,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _Text();
  local_a8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar5);
  lVar4 = _objc_msgSend_length(local_a8,local_140);
  if (lVar4 != 0) {
    _Service(&cf_CContactMgr);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_38 = local_a8;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_140,&local_38,1);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar5,&cf_getContactByName_);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar7,&cf_getContactDisplayName,PTR____NSArray0__struct_00110718);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _Text();
    local_b0 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar8);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_msgSend_length(local_b0,local_140);
    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_140,&cf_VY);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar5 = local_a0;
    local_a0 = uVar6;
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_storeStrong(&local_b0,0);
  }
  _Call(local_88,&cf_isCommentUnsafe,PTR____NSArray0__struct_00110718);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_boolValue(uVar5,local_140);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  if ((uVar3 & 1) == 0) {
    lVar4 = _objc_msgSend_length(local_a0,local_140);
    if (lVar4 == 0) {
      _objc_storeStrong(&local_a0,&cf__);
    }
  }
  else {
    _objc_storeStrong(&local_a0,&cf_fNS>f_y);
  }
  _objc_msgSend_subtitleCellConfiguration(&_OBJC_CLASS___UIListContentConfiguration,local_140);
  local_b8 = _objc_retainAutoreleasedReturnValue();
  lVar4 = _objc_msgSend_length(local_98,local_140);
  if (lVar4 == 0) {
    local_1f0 = local_90;
  }
  else {
    local_1f0 = local_98;
  }
  _objc_msgSend_setText_(local_b8,local_140,local_1f0);
  _objc_msgSend_systemFontOfSize_weight_
            (0x4028000000000000,*(undefined8 *)PTR__UIFontWeightMedium_001100c0,
             &_OBJC_CLASS___UIFont,local_140);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_textProperties(local_b8,local_140);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFont_(uVar6,local_140,uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _objc_msgSend_secondaryLabelColor(&_OBJC_CLASS___UIColor,local_140);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_textProperties(local_b8,local_140);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setColor_(uVar6,local_140,uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  uVar5 = local_a0;
  _objc_msgSend_systemFontOfSize_(0x402e000000000000,&_OBJC_CLASS___UIFont,local_140);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_labelColor(&_OBJC_CLASS___UIColor,local_140);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _WCMEmojiText(uVar5,uVar6);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setSecondaryAttributedText_(local_b8,local_140);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_msgSend_secondaryTextProperties(local_b8,local_140);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setNumberOfLines_(uVar5,local_140,0);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _Service(&cf_MMHeadImageMgr);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  local_48 = local_90;
  local_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_140,&local_48,2);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar5,&cf_getHeadImage_withCategory_);
  local_c0 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  uVar5 = local_c0;
  uVar6 = _objc_opt_class(&_OBJC_CLASS___UIImage);
  uVar9 = _objc_opt_isKindOfClass(uVar5,uVar6);
  bVar1 = (uVar9 & 1) == 0;
  if (bVar1) {
    _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_140,&cf_person_crop_circle_fill);
    local_268 = _objc_retainAutoreleasedReturnValue();
    local_c8 = local_268;
  }
  else {
    local_268 = local_c0;
  }
  _objc_msgSend_setImage_(local_b8,local_140,local_268);
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_c8);
  }
  uVar7 = 0x4042000000000000;
  uVar6 = _CGSizeMake(0x4042000000000000);
  _objc_msgSend_imageProperties(local_b8,local_140);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setMaximumSize_(uVar6,uVar7,uVar5,local_140);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  _objc_msgSend_imageProperties(local_b8,local_140);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setCornerRadius_(0x4032000000000000,uVar5,local_140);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  uVar7 = 0x4028000000000000;
  uVar8 = 0x4030000000000000;
  uVar6 = 0x4030000000000000;
  uVar5 = _NSDirectionalEdgeInsetsMake(0x4028000000000000);
  _objc_msgSend_setDirectionalLayoutMargins_(uVar5,uVar6,uVar7,uVar8,local_b8,local_140);
  _objc_msgSend_setContentConfiguration_(local_70,local_140,local_b8);
  _objc_msgSend_clearColor(&_OBJC_CLASS___UIColor,local_140);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(local_70,local_140);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  uVar5 = (*(code *)PTR__objc_retain_00110460)(local_70);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar10 = _objc_autoreleaseReturnValue(0,uVar5);
  return IVar10;
}

