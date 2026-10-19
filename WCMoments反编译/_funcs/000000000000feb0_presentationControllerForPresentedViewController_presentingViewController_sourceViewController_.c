// presentationControllerForPresentedViewController:presentingViewController:sourceViewController: @0xfeb0

/* Function Stack Size: 0x28 bytes */

ID WCMVideoComments::
   presentationControllerForPresentedViewController_presentingViewController_sourceViewController_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_68;
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
  uVar1 = _objc_alloc(&objc::class_t::WCMCommentPresentation);
  uVar1 = _objc_msgSend_initWithPresentedViewController_presentingViewController_
                    (uVar1,local_68,local_28,local_30);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}

