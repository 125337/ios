// FUN_00691874 @ 00691874

void FUN_00691874(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (((local_18 != 0) &&
      (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
      lVar1 != 0)) &&
     (uVar2 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_SendTextMessage__0269d028),
     (uVar2 & 1) != 0)) {
    DAT_028cbd48 = 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_SendTextMessage__0269d028,local_20);
    DAT_028cbd48 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

