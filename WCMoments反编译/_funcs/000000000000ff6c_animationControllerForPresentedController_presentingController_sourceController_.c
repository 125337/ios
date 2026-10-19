// animationControllerForPresentedController:presentingController:sourceController: @0xff6c

/* Function Stack Size: 0x28 bytes */

ID WCMVideoComments::
   animationControllerForPresentedController_presentingController_sourceController_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_78;
  undefined8 local_40;
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
  local_40 = _objc_opt_new(&objc::class_t::WCMCommentTransition);
  _objc_msgSend_setPresenting_(local_40,local_78,1);
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_40);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

