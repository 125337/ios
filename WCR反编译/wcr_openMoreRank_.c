// wcr_openMoreRank: @ 01dac33c

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsBoardView::wcr_openMoreRank_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c69b0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_30 = pcVar1;
  _objc_getAssociatedObject(local_28,DAT_028c69a8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onOpenMoreRank_026c5030);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar3 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onOpenMoreRank_026c5030);
    _objc_retainAutoreleasedReturnValue();
    if (local_30 == (cfstringStruct *)0x0) {
      local_58 = &cf__tecL;
    }
    else {
      local_58 = local_30;
    }
    if (local_38 == (cfstringStruct *)0x0) {
      local_70 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    else {
      local_70 = local_38;
    }
    (**(code **)(IVar3 + 0x10))(IVar3,local_58,local_70);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

