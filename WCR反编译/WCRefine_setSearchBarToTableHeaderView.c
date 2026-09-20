// WCRefine_setSearchBarToTableHeaderView @ 004caf34

/* Function Stack Size: 0x10 bytes */

void WCRefineMainFrameSearchButton::WCRefine_setSearchBarToTableHeaderView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_setSearchBarToTableHead_026a4058);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_28 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  if (((ulong)puVar2 & 1) != 0) {
    local_48 = PTR___NSConcreteGlobalBlock_02578658;
    local_40 = 0xd0800000;
    local_3c = 0;
    local_38 = FUN_004cb064;
    local_30 = &DAT_0257a9d0;
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_performWithoutAnimation__0269e7e0,&local_48);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

