// updateVideoCounts @0x1a158

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::updateVideoCounts(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_118;
  undefined8 local_b8;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  undefined1 local_51;
  long local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_40 = param_2;
  local_38 = param_1;
  _objc_msgSend_facade(param_1);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_videos(local_38,local_b8);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  uVar8 = _objc_msgSend_index(local_38,local_b8);
  _objc_msgSend_objectAtIndexedSubscript_(uVar7,local_b8,uVar8);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar8,local_b8,&cf_id);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  local_30 = uVar9;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_b8,&local_30,1);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar6,&cf_getDataItemByID_);
  local_48 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar10);
  (*(code *)PTR__objc_release_00110458)(uVar9);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  local_51 = 0;
  bVar4 = false;
  uVar1 = local_48 == 0;
  if ((bool)uVar1) {
    _objc_msgSend_resolveItem(local_38,local_b8);
    local_50 = _objc_retainAutoreleasedReturnValue();
    bVar4 = local_50 != 0;
    local_51 = uVar1;
    (*(code *)PTR__objc_release_00110458)(local_50);
    uVar1 = local_51;
  }
  local_51 = uVar1;
  if (bVar4) {
    _objc_msgSend_resolveItem(local_38,local_b8);
    lVar11 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_videos(local_38,local_b8);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar7 = _objc_msgSend_index(local_38,local_b8);
    _objc_msgSend_objectAtIndexedSubscript_(uVar6,local_b8,uVar7);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKeyedSubscript_(uVar7,local_b8,&cf_id);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar11 + 0x10))();
    lVar12 = _objc_retainAutoreleasedReturnValue();
    lVar3 = local_48;
    local_48 = lVar12;
    (*(code *)PTR__objc_release_00110458)(lVar3);
    (*(code *)PTR__objc_release_00110458)(uVar8);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(lVar11);
  }
  _objc_msgSend_view(local_38,local_b8);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_viewWithTag_(uVar6,local_b8,0x2c0);
  local_60 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _Call(local_48,&cf_likeFlag,PTR____NSArray0__struct_00110718);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _objc_msgSend_boolValue(uVar6,local_b8);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  uVar6 = local_60;
  pcVar2 = &cf_heart_fill;
  if ((uVar5 & 1) == 0) {
    pcVar2 = &cf_heart;
  }
  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_b8,pcVar2);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar6,local_b8,uVar7,0);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  bVar4 = (uVar5 & 1) == 0;
  if (bVar4) {
    _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_b8);
    local_118 = _objc_retainAutoreleasedReturnValue();
    local_80 = local_118;
  }
  else {
    _objc_msgSend_systemPinkColor(&_OBJC_CLASS___UIColor,local_b8);
    local_118 = _objc_retainAutoreleasedReturnValue();
    local_70 = local_118;
  }
  _objc_msgSend_setTintColor_(local_60,local_b8,local_118);
  if (bVar4) {
    (*(code *)PTR__objc_release_00110458)(local_80);
  }
  else {
    (*(code *)PTR__objc_release_00110458)(local_70);
  }
  pcVar2 = &cf_Smp_;
  if ((uVar5 & 1) == 0) {
    pcVar2 = &cf_p_;
  }
  _objc_msgSend_setAccessibilityLabel_(local_60,local_b8,pcVar2);
  _Call(local_48,&cf_likeCount,PTR____NSArray0__struct_00110718);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_b8,&cf___);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_likeCountLabel(local_38,local_b8);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setText_(uVar8,local_b8,uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _Call(local_48,&cf_commentCount,PTR____NSArray0__struct_00110718);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_b8,&cf___);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_commentCountLabel(local_38,local_b8);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setText_(uVar8,local_b8,uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar8);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

