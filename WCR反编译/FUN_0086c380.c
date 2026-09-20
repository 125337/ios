// FUN_0086c380 @ 0086c380

void FUN_0086c380(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cd698)(local_18,local_20,local_28);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_MMTableViewIndexView;
  local_40[0] = uVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
  if ((uVar1 & 1) != 0) {
    FUN_0087a754(local_40[0]);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

