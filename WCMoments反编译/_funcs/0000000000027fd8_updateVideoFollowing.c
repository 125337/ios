// updateVideoFollowing @0x27fd8

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::updateVideoFollowing(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_f0;
  uint local_bc;
  int local_b4;
  cfstringStruct *local_a8;
  undefined8 local_98;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  long local_48;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSend_videos(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_index(local_28,local_98);
  _objc_msgSend_objectAtIndexedSubscript_(uVar2,local_98,uVar3);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar3,local_98,&cf_username);
  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
  local_a8 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_a8 = &cf___;
  }
  local_38 = (*(code *)PTR__objc_retain_00110460)(local_a8);
  (*(code *)PTR__objc_release_00110458)(pcVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_isFollowing(local_28,local_98);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    local_b4 = 0;
  }
  else {
    _objc_msgSend_isFollowing(local_28,local_98);
    local_48 = _objc_retainAutoreleasedReturnValue();
    local_b4 = (**(code **)(local_48 + 0x10))(local_48,local_38);
  }
  bVar1 = local_b4 == 0;
  if (lVar5 != 0) {
    (*(code *)PTR__objc_release_00110458)(local_48);
  }
  (*(code *)PTR__objc_release_00110458)(lVar5);
  lVar5 = _objc_msgSend_length(local_38,local_98);
  uVar2 = local_38;
  local_bc = 1;
  if (lVar5 != 0) {
    _objc_msgSend_account(local_28,local_98);
    local_58 = _objc_retainAutoreleasedReturnValue();
    local_bc = _objc_msgSend_isEqual_(uVar2,local_98);
  }
  _objc_msgSend_followButton(local_28,local_98);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar2,local_98,local_bc & 1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (lVar5 != 0) {
    (*(code *)PTR__objc_release_00110458)(local_58);
  }
  _objc_msgSend_followButton(local_28,local_98);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  pcVar4 = &cf_checkmark;
  if (bVar1) {
    pcVar4 = &cf_plus;
  }
  _objc_msgSend_systemImageNamed_(&_OBJC_CLASS___UIImage,local_98,pcVar4);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setImage_forState_(uVar2,local_98,uVar3,0);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (bVar1) {
    _objc_msgSend_colorWithWhite_alpha_
              (0x3ff0000000000000,0x3fbeb851eb851eb8,&_OBJC_CLASS___UIColor,local_98);
    local_f0 = _objc_retainAutoreleasedReturnValue();
    local_78 = local_f0;
  }
  else {
    _objc_msgSend_colorWithWhite_alpha_
              (0x3ff0000000000000,0x3faeb851eb851eb8,&_OBJC_CLASS___UIColor,local_98);
    local_f0 = _objc_retainAutoreleasedReturnValue();
    local_68 = local_f0;
  }
  _objc_msgSend_followButton(local_28,local_98);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_viewWithTag_(uVar2,local_98,0x2c4);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentView(uVar3,local_98);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(uVar6,local_98,local_f0);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_78);
  }
  else {
    (*(code *)PTR__objc_release_00110458)(local_68);
  }
  pcVar4 = &cf_SmsQlMOgS;
  if (bVar1) {
    pcVar4 = &cf_sQlMOgS;
  }
  _objc_msgSend_followButton(local_28,local_98);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAccessibilityLabel_(uVar2,local_98,pcVar4);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_38,0);
  return;
}

