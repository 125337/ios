// FUN_001035fc @ 001035fc

void FUN_001035fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_a0;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (DAT_028c8478 != (code *)0x0) {
    (*DAT_028c8478)(local_18,local_20,local_28,local_30);
  }
  FUN_001041fc(0,&cf_kick_AddMsg_orig,local_18);
  uVar3 = local_28;
  uVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_28;
  }
  FUN_00104274(uVar1,local_a0);
  FUN_001041fc(0,&cf_kick_AddMsg_after,local_18);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

