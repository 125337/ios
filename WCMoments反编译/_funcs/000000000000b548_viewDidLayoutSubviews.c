// viewDidLayoutSubviews @0xb548

/* Function Stack Size: 0x10 bytes */

void WCMInboxController::viewDidLayoutSubviews(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double in_d2;
  undefined8 uVar4;
  double local_d0;
  undefined8 local_c8;
  ID local_30;
  class_t *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = &objc::class_t::WCMInboxController;
  local_30 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_30,"viewDidLayoutSubviews");
  _objc_msgSend_tableView(local_18,local_c8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_bounds(uVar1,local_c8);
  local_d0 = in_d2 - 32.0;
  (*(code *)PTR__objc_release_00110458)(uVar1);
  if (local_d0 <= 0.0) {
    local_d0 = 0.0;
  }
  uVar3 = 0x4028000000000000;
  uVar4 = 0x4042000000000000;
  uVar2 = _CGRectMake(0x4030000000000000);
  _objc_msgSend_categories(local_18,local_c8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFrame_(uVar2,uVar3,local_d0,uVar4,uVar1,local_c8);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _StyleMessageController(local_18);
  return;
}

