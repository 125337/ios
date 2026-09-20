// FUN_0160440c @ 0160440c

void FUN_0160440c(undefined8 param_1)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_68;
  undefined8 **local_50;
  undefined8 **local_38;
  undefined8 **local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  
  local_50 = &local_18;
  local_18 = (undefined8 ***)0x0;
  _objc_storeStrong(local_50,param_1);
  bVar1 = (undefined8 ***)local_18 == (undefined8 ***)0x0;
  if (bVar1) {
    FUN_016036c4();
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_50;
  }
  else {
    local_50 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_50;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  pppuVar2 = (undefined8 ***)local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_topViewController_0269e588);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pppuVar2;
  if (pppuVar2 == (undefined8 ***)0x0) {
    local_38 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_38;
  }
  _objc_storeWeak(&DAT_028e3bd0,local_68);
  if (pppuVar2 == (undefined8 ***)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(pppuVar2);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

