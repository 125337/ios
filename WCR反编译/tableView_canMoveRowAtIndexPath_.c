// tableView:canMoveRowAtIndexPath: @ 01e40260

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

bool WCRTGTabReorderViewController::tableView_canMoveRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  long local_30 [3];
  ID local_18;
  
  local_30[1] = 0;
  local_30[2] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  local_30[0] = 0;
  _objc_storeStrong(local_30,param_4);
  lVar1 = local_30[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_row_0269e210);
  IVar3 = local_18;
  lVar2 = local_30[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_section_0269e988);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_tabsInSection__026c6488,lVar2);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return (uint)(lVar1 < (long)IVar4);
}

