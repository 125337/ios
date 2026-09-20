// FUN_000bf530 @ 000bf530

void FUN_000bf530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar4;
  ulong uVar5;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uVar3;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_18;
  (*DAT_028c80c8)(local_18,local_20,local_28);
  uVar2 = (uint)uVar3;
  FUN_000bfbf8();
  uVar5 = local_28;
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar1 = local_28;
    if ((uVar5 & 1) == 0) {
      local_38 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setSelectionStyle__0269e5f8,0);
      FUN_000bfc1c(local_40,&cf_configureCell);
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

