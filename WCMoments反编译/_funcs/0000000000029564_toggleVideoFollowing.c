// toggleVideoFollowing @0x29564

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::toggleVideoFollowing(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *local_60;
  undefined8 local_50;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_videos(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_index(local_18,local_50);
  _objc_msgSend_objectAtIndexedSubscript_(uVar2,local_50,uVar3);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar3,local_50,&cf_username);
  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
  local_60 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_60 = &cf___;
  }
  local_28 = (*(code *)PTR__objc_retain_00110460)(local_60);
  (*(code *)PTR__objc_release_00110458)(pcVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  lVar5 = _objc_msgSend_length(local_28,local_50);
  bVar1 = false;
  if (lVar5 != 0) {
    _objc_msgSend_followAuthor(local_18,local_50);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    (*(code *)PTR__objc_release_00110458)(lVar5);
  }
  if (bVar1) {
    _objc_msgSend_followAuthor(local_18,local_50);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,local_28);
    (*(code *)PTR__objc_release_00110458)(lVar5);
  }
  _objc_msgSend_updateVideoFollowing(local_18,local_50);
  _objc_storeStrong(&local_28,0);
  return;
}

