// FUN_015a7760 @ 015a7760

void FUN_015a7760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_a8;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar4 = local_38;
  puVar3 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
  }
  uVar2 = local_30;
  uVar1 = local_40;
  local_50 = local_a8;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_015a7964;
  local_68 = &DAT_02586e08;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  local_60 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,PTR_s_wcr_saveAudio_statusCode_error_f_026b0b60,uVar2,local_a8,uVar1,&local_80);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

