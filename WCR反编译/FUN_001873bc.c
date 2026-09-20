// FUN_001873bc @ 001873bc

void FUN_001873bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  (*DAT_028c8960)(local_18,local_20,local_28,local_30,local_38);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_38;
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      uVar4 = local_18;
      FUN_00192a00(local_18,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar4;
      FUN_0019422c(local_18,uVar4,local_30);
      _objc_storeStrong(&local_50,0);
      local_48 = 0;
      goto LAB_00187550;
    }
  }
  local_48 = 1;
LAB_00187550:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

