// viewDidLoad @0x2d2b8

/* Function Stack Size: 0x10 bytes */

void WCMCacheController::viewDidLoad(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMCacheController;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidLoad");
  _objc_msgSend_setTitle_(local_18,local_38,&cf__X__t);
  uVar1 = _objc_alloc(&_OBJC_CLASS___UIBarButtonItem);
  uVar1 = _objc_msgSend_initWithBarButtonSystemItem_target_action_(uVar1,local_38,0,local_18,"done")
  ;
  _objc_msgSend_navigationItem(local_18,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setRightBarButtonItem_(uVar2,local_38,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_measure(local_18,local_38);
  return;
}

