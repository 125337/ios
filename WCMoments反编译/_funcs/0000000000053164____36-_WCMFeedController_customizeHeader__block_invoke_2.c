// ___36-[WCMFeedController_customizeHeader]_block_invoke_2 @0x53164

void ___36__WCMFeedController_customizeHeader__block_invoke_2(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_loadWeakRetained(param_1 + 0x20);
  _objc_msgSend_headerBrandKey(uVar2,local_40);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_dictionaryForKey_(uVar1,local_40);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar4,local_40,&cf_text);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _Text();
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setText_(local_20,local_40);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_setPlaceholder_(local_20,local_40,&cf_gSW);
  _objc_storeStrong(&local_20,0);
  return;
}

