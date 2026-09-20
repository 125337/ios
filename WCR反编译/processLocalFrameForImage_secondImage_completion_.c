// processLocalFrameForImage:secondImage:completion: @ 017faef0

/* Function Stack Size: 0x28 bytes */

void WCRefineAssistFunctionViewController::processLocalFrameForImage_secondImage_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  dispatch_queue_t pdVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  ID local_50;
  long local_48;
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  long local_28;
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
  if (local_28 == 0) {
    if (local_38 != 0) {
      (**(code **)(local_38 + 0x10))();
    }
    local_3c = 1;
  }
  else {
    pdVar5 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_017fb0ec;
    local_68 = &DAT_0257cba8;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_28;
    local_60 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_38;
    local_58 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    IVar4 = local_18;
    local_48 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = IVar4;
    _dispatch_async(pdVar5,&local_80);
    (*(code *)PTR__objc_release_02578630)(pdVar5);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_60,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

