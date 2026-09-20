// replacePinnedFile:withFile: @ 01c71780

/* Function Stack Size: 0x20 bytes */

void WCRefinePageBackgroundLibraryViewController::replacePinnedFile_withFile_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  long lVar3;
  ID local_38;
  long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pinnedFiles_026c2658);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_indexOfObject__0269e870,local_28);
  if (IVar1 != 0x7fffffffffffffff) {
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectAtIndex__0269d530,IVar1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_atIndexedSubscript__0269e970,local_30,IVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPinnedFiles__026c2668,local_38);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

