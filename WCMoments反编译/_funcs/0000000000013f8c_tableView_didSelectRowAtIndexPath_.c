// tableView:didSelectRowAtIndexPath: @0x13f8c

/* Function Stack Size: 0x20 bytes */

void WCMVideoComments::tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_90;
  uint local_74;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  _objc_msgSend_deselectRowAtIndexPath_animated_(local_38,local_90,local_40,1);
  _objc_msgSend_pendingComment(local_28,local_90);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  local_74 = 1;
  if (lVar1 == 0) {
    _objc_msgSend_comments(local_28,local_90);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_row(local_40,local_90);
    _objc_msgSend_objectAtIndexedSubscript_(uVar2,local_90,uVar3);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar3,&cf_isCommentUnsafe,PTR____NSArray0__struct_00110718);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_74 = _objc_msgSend_boolValue(uVar4,local_90);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  (*(code *)PTR__objc_release_00110458)(lVar1);
  if ((local_74 & 1) == 0) {
    _objc_msgSend_comments(local_28,local_90);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend_row(local_40,local_90);
    _objc_msgSend_objectAtIndexedSubscript_(uVar2,local_90,uVar3);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setReply_(local_28,local_90);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_reply(local_28,local_90);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar2,&cf_nickname,PTR____NSArray0__struct_00110718);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _Text();
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_90,&cf_VY);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_input(local_28,local_90);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setPlaceholder_(uVar6,local_90,uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_input(local_28,local_90);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_becomeFirstResponder(uVar2,local_90);
    (*(code *)PTR__objc_release_00110458)(uVar2);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

