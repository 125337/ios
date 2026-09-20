// _WCRMomentsTailSetPostSessionAppID @ 01bf87a0

void _WCRMomentsTailSetPostSessionAppID(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  DAT_028e4618 = 1;
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copy_0269d150);
  uVar1 = DAT_028e4610;
  DAT_028e4610 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  return;
}

