// detail @0x2ae50

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::detail(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_a0;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_videos(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_index(local_18,local_a0);
  _objc_msgSend_objectAtIndexedSubscript_(uVar2,local_a0,uVar3);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar3,local_a0,&cf_id);
  local_28 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_openDetail(local_18,local_a0);
  local_30 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_player(local_18,local_a0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_pause(uVar2,local_a0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_timer(local_18,local_a0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_invalidate(uVar2,local_a0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_setTimer_(local_18,local_a0);
  _objc_msgSend_clearVideoPreparation(local_18,local_a0);
  _objc_msgSend_player(local_18,local_a0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_replaceCurrentItemWithPlayerItem_(uVar2,local_a0,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  IVar1 = local_18;
  local_38 = (*(code *)PTR__objc_retain_00110460)(local_30);
  local_40 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_msgSend_dismissViewControllerAnimated_completion_(IVar1,local_a0,1);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

