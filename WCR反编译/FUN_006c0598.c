// FUN_006c0598 @ 006c0598

void FUN_006c0598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar3 = local_18;
  lVar2 = local_20;
  puVar1 = PTR_WCRefineQuickRemarkEditor_026ce820;
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_006c0a38;
    local_38 = &DAT_0257ed58;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_ensureLongPressGestureForView_ha_026a68f0,lVar3,&local_50);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

