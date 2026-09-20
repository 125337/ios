// FUN_0067748c @ 0067748c

ulong FUN_0067748c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_a8;
  ulong local_60;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_a8 = local_30;
    FUN_00678300();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_a8;
  }
  else {
    local_a8 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_a8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  FUN_0067849c(local_18,local_28,local_48);
  _objc_storeStrong(&local_48,0);
  uVar3 = local_18;
  (*DAT_028cbcc8)(local_18,local_20,local_28,local_30,local_38,local_40);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return uVar3 & 0xffffffff;
}

