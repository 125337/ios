// FUN_015a42f4 @ 015a42f4

void FUN_015a42f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_68;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_68 = 0;
  }
  else {
    local_68 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_statusCode_026a1578);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_wcr_saveAudio_statusCode_error_f_026b0b60,
             local_20,local_68,local_30,*(undefined8 *)(param_1 + 0x20));
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

