// FUN_000bf6cc @ 000bf6cc

ulong FUN_000bf6cc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_50 [3];
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_18;
  pcVar1 = DAT_028c80d0;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(uVar2,local_20,local_28,local_30);
  local_38 = uVar2;
  FUN_000bfbf8();
  uVar4 = local_38;
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar2 = local_38;
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_50[0] = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setSelectionStyle__0269e5f8,0);
      FUN_000bfc1c(local_50[0],&cf_MMTableViewCell_init);
      _objc_storeStrong(local_50,0);
    }
  }
  uVar4 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_18,0);
  return uVar4;
}

