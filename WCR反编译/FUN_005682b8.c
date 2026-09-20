// FUN_005682b8 @ 005682b8

void FUN_005682b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = PTR_s_WCRefine_deleteMoment__026a5188;
  if (((local_18 != 0) && (local_20 != 0)) &&
     (uVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_WCRefine_deleteMoment__026a5188),
     (uVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,puVar1,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

