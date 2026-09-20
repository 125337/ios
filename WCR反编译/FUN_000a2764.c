// FUN_000a2764 @ 000a2764

void FUN_000a2764(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028c8060 != (code *)0x0) {
    (*DAT_028c8060)(local_18,param_2);
  }
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    FUN_000a5af8(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

