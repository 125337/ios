// hostForTableView: @ 00fce5f0

/* Function Stack Size: 0x18 bytes */

ID WCRefineHomeTableHeaderHost::hostForTableView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_50;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tableHeaderView_0269ea08);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_tag_026cab98);
  IVar3 = local_38;
  if (IVar1 - 0x7f152 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar3;
  }
  else {
    IVar2 = local_30;
    _objc_getAssociatedObject(IVar1 - 0x7f152,local_30,&DAT_028e3040);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_38;
    local_38 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_tag_026cab98);
    if (IVar3 == 0x7f152) {
      local_50 = local_38;
    }
    else {
      local_50 = 0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

