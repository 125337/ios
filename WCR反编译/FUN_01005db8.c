// FUN_01005db8 @ 01005db8

void FUN_01005db8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_b8;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 local_60;
  byte local_58;
  byte local_51;
  ulong local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_b8;
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  local_51 = false;
  if ((0x20 < uVar2) && (local_51 = true, local_50 != 0)) {
    uVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_statusCode_026a1578);
    local_51 = (long)uVar2 < 400;
  }
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_01006098;
  local_78 = &DAT_02582ee8;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_30;
  local_58 = local_51 & 1;
  local_60 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_40;
  local_70 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar3;
  _dispatch_async(puVar1,&local_90);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_finishTasksAndInvalidate_026a15a8);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

