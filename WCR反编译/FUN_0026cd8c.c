// FUN_0026cd8c @ 0026cd8c

void FUN_0026cd8c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40 [3];
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0026cf0c;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_type_0269e6f8);
  uVar2 = local_20;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
    local_24 = 1;
    goto LAB_0026cf0c;
  }
  FUN_0026a464();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar2;
  if (uVar2 == 0) {
LAB_0026ced4:
    uVar2 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_type_0269e6f8);
    uVar1 = local_40[0];
    if ((uVar2 & 1) == 0) goto LAB_0026ced4;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  local_24 = 1;
  _objc_storeStrong(local_40,0);
LAB_0026cf0c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

