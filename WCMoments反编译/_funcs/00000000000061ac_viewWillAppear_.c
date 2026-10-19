// viewWillAppear: @0x61ac

/* Function Stack Size: 0x14 bytes */

void WCMMomentsSettingsController::viewWillAppear_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 local_48;
  ID local_38;
  class_t *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (undefined1)param_3;
  local_30 = &objc::class_t::WCMMomentsSettingsController;
  local_38 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSendSuper2(&local_38,"viewWillAppear:",param_3 & 1);
  _objc_msgSend_tableView(local_18,local_48);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_reloadData(uVar1,local_48);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

