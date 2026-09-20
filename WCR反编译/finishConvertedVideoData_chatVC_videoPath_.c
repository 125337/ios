// finishConvertedVideoData:chatVC:videoPath: @ 00f456dc

/* Function Stack Size: 0x28 bytes */

void WCRefineEmoticonToolsHelper::finishConvertedVideoData_chatVC_videoPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dispatch_queue_t pdVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  pdVar3 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_40 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_38;
  local_58 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_30;
  local_50 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar2;
  _dispatch_async(pdVar3);
  (*(code *)PTR__objc_release_02578630)(pdVar3);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

