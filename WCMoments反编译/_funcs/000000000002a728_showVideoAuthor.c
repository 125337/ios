// showVideoAuthor @0x2a728

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::showVideoAuthor(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_78;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_presentedViewController(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  if (lVar2 == 0) {
    _objc_msgSend_videos(local_18,local_78);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend_index(local_18,local_78);
    _objc_msgSend_objectAtIndexedSubscript_(uVar3,local_78,uVar4);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKeyedSubscript_(uVar4,local_78,&cf_username);
    local_28 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    _objc_msgSend_openAuthorProfile(local_18,local_78);
    local_30 = _objc_retainAutoreleasedReturnValue();
    lVar2 = _objc_msgSend_length(local_28,local_78);
    if ((lVar2 == 0) || (local_30 == 0)) {
      local_34 = 1;
    }
    else {
      _objc_msgSend_player(local_18,local_78);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_pause(uVar3,local_78);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_msgSend_timer(local_18,local_78);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_invalidate(uVar3,local_78);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      _objc_msgSend_setTimer_(local_18,local_78);
      _objc_msgSend_clearVideoPreparation(local_18,local_78);
      _objc_msgSend_player(local_18,local_78);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_replaceCurrentItemWithPlayerItem_(uVar3,local_78,0);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      IVar1 = local_18;
      local_68 = PTR___NSConcreteStackBlock_001104f0;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = ___37__WCMVideoController_showVideoAuthor__block_invoke;
      local_50 = &___block_descriptor_48_e8_32s40bs_e5_v8__0l;
      local_40 = (*(code *)PTR__objc_retain_00110460)(local_30);
      local_48 = (*(code *)PTR__objc_retain_00110460)(local_28);
      _objc_msgSend_dismissViewControllerAnimated_completion_(IVar1,local_78,1,&local_68);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      local_34 = 0;
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

