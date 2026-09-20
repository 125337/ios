// wcrGrouping_scrollViewDidEndDragging:willDecelerate: @ 0037e18c

/* Function Stack Size: 0x1c bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_scrollViewDidEndDragging_willDecelerate_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  byte bVar1;
  ID IVar2;
  ID IVar3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrGrouping_scrollViewDidEndDrag_026a29f8,local_28,param_4 & 1);
  IVar2 = local_28;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_findMainTableView_026a2848);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = 1;
  if (IVar2 == IVar3) {
    bVar1 = DAT_028ca0fd ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  if (((bVar1 & 1) == 0) && ((param_4 & 1) == 0)) {
    FUN_0037e2b0(local_18,local_28,&cf_drag);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

