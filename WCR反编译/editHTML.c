// editHTML @ 01efab84

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::editHTML(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  double in_d1;
  double in_d3;
  double local_d0;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_configureHTMLEditorFooterVisible_026c7f60,1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar5 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d0 = in_d1 - in_d3;
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (local_d0 <= 0.0) {
    local_d0 = 0.0;
  }
  uVar7 = 0;
  FUN_01efae1c();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,local_d0,IVar2,PTR_s_setContentOffset_animated__0269ddd8,1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_htmlTextView_026c7f70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

