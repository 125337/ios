// wcrGrouping_scrollViewDidScroll: @ 0037de90

/* Function Stack Size: 0x18 bytes */

void WCRefineHomeSessionGroupingHook::wcrGrouping_scrollViewDidScroll_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_50;
  byte local_41;
  undefined *local_40;
  byte local_31;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_wcrGrouping_scrollViewDidScroll__026a29e0,local_28);
  IVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028ca0fc);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  local_41 = 0;
  bVar1 = true;
  if (IVar2 == 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar3 != (undefined *)0x0;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrGrouping_findMainTableView_026a2848);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar2;
    if (local_28 == IVar2) {
      FUN_0037e098(0,local_18,IVar2);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

