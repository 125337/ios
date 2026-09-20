// wcr_isPluginPageAction: @ 01df3750

/* Function Stack Size: 0x18 bytes */

bool WCRefineSuperFloatActionPickerViewController::wcr_isPluginPageAction_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatSourceKey);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01df2eec();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28,0);
  return (bool)uVar3;
}

