// FUN_00ed8290 @ 00ed8290

bool FUN_00ed8290(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
  bVar1 = false;
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doubleValue_026ca608);
    bVar1 = *(double *)(param_2 + 0x20) <= param_1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return bVar1;
}

