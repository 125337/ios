// FUN_00562a98 @ 00562a98

void FUN_00562a98(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_00566368(local_18,&cf_commentViewForDelete);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_tag_026cab98)
  ;
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tag_026cab98);
  }
  (*DAT_028cb4b0)(local_18,local_20,local_28);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

