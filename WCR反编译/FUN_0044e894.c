// FUN_0044e894 @ 0044e894

void FUN_0044e894(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if ((((ulong)puVar1 & 1) == 0) || (uVar2 = local_18, FUN_0045f078(), (uVar2 & 1) == 0)) {
    (*DAT_028caad0)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

