// FUN_0003089c @ 0003089c

long FUN_0003089c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_18;
  pcVar1 = DAT_028c7ab0;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(lVar2,local_20,local_28);
  local_30 = lVar2;
  if ((lVar2 != 0) && (local_28 != 0)) {
    _objc_setAssociatedObject(lVar2,DAT_026df710,local_28,1);
  }
  lVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return lVar2;
}

