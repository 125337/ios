// tableView:didSelectRowAtIndexPath: @0x6998

/* Function Stack Size: 0x20 bytes */

void WCMMomentsSettingsController::tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
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
  _objc_msgSend_deselectRowAtIndexPath_animated_(local_28,local_40,local_30,1);
  lVar1 = _objc_msgSend_section(local_30,local_40);
  lVar1 = lVar1 + -1;
  if (lVar1 == 0) {
    lVar1 = _objc_msgSend_row(0,local_30,local_40);
    lVar1 = lVar1 + -2;
    if (lVar1 == 0) {
      _ExportDiagnostics(local_18,local_30);
      goto LAB_00006ac0;
    }
  }
  lVar1 = _objc_msgSend_section(lVar1,local_30,local_40);
  if ((lVar1 == 1) && (lVar1 = _objc_msgSend_row(0,local_30,local_40), lVar1 == 3)) {
    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_40);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setBool_forKey_(uVar2,local_40,1,&cf_WCMomentsDisabled);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    _objc_msgSend_reloadData(local_28,local_40);
  }
LAB_00006ac0:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

