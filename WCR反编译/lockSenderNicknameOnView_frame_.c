// lockSenderNicknameOnView:frame: @ 010e9500

/* Function Stack Size: 0x38 bytes */

void WCRefineNameplateHelper::lockSenderNicknameOnView_frame_
               (ID param_1,SEL param_2,ID param_3,CGRect param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  local_28 = in_d1;
  local_20 = in_d2;
  local_18 = in_d3;
  _objc_storeStrong(&local_48,param_3,param_3,param_4.field0_0x0.field0_0x0,
                    param_4.field0_0x0.field1_0x8,param_4.field1_0x10.field0_0x0,
                    param_4.field1_0x10.field1_0x8);
  uVar4 = local_48;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar2 = local_48;
  uVar1 = DAT_0280e1f0;
  if ((uVar4 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,local_28,local_20,local_18,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGRect__0269e130);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_48,0);
  return;
}

