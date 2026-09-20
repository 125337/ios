// WCRefineToDo_restoreInsetIfNeeded: @ 007ff2b4

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoHook::WCRefineToDo_restoreInsetIfNeeded_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  double in_d0;
  double dVar2;
  undefined8 uVar3;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028ccee8);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  if ((local_38 != 0) && (IVar1 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_doubleValue_026ca608);
    dVar2 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentInset_0269dcc8);
    uVar3 = 0x3fe0000000000000;
    if (0.5 < ABS(dVar2 - in_d0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentInset_0269dcc8);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setContentInset__0269e770);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scrollIndicatorInsets_0269e880);
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,uVar3,in_d2,in_d3,local_38,PTR_s_setScrollIndicatorInsets__0269e778);
    }
    _objc_setAssociatedObject(local_28,&DAT_028ccee8,0,1);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

