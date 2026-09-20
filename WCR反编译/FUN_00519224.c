// FUN_00519224 @ 00519224

byte FUN_00519224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  long local_30;
  ulong local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_0051a058();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsObject__0269cbb8,local_38);
    if ((uVar2 & 1) != 0) {
      local_11 = 0;
      goto LAB_0051933c;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObject__0269d180,local_38);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_30);
  local_11 = 1;
LAB_0051933c:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

