// FUN_010054ec @ 010054ec

void FUN_010054ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_90;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar3 = 0x4064000000000000;
  uVar2 = 0x4064000000000000;
  local_20 = param_1;
  local_18 = param_1;
  FUN_010038b0();
  local_30 = uVar2;
  local_28 = uVar3;
  _UIGraphicsBeginImageContextWithOptions(uVar2,uVar3,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c70,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  uVar5 = 0x4064000000000000;
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = uVar5;
  FUN_010056bc();
  local_50 = uVar3;
  local_48 = uVar4;
  local_40 = uVar5;
  local_38 = uVar2;
  _UIRectFill(uVar3,uVar4,uVar5,uVar2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar1;
  _UIGraphicsEndImageContext();
  puVar1 = local_58;
  _UIImageJPEGRepresentation(DAT_02323d00);
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_60 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_data_0269d850);
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_60;
  }
  _objc_storeStrong(&DAT_028e3140,local_90);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_58,0);
  return;
}

