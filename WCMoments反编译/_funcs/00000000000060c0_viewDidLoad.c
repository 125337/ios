// viewDidLoad @0x60c0

/* Function Stack Size: 0x10 bytes */

void WCMMomentsSettingsController::viewDidLoad(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMMomentsSettingsController;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidLoad");
  _objc_msgSend_setTitle_(local_18,local_40,&cf_SsgSW);
  _objc_msgSend_systemGroupedBackgroundColor(&_OBJC_CLASS___UIColor,local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_tableView(local_18,local_40);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setBackgroundColor_(uVar2,local_40,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_navigationItem(local_18,local_40);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setLargeTitleDisplayMode_(uVar1,local_40,2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

