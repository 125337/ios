// FUN_0075d104 @ 0075d104

void FUN_0075d104(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_38;
  ulong local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = &cf_wcr_special_original_record_didMoveToWindow;
  local_20 = param_2;
  _NSSelectorFromString();
  local_28 = pcVar1;
  if (pcVar1 != (cfstringStruct *)0x0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_28);
      goto LAB_0075d1c4;
    }
  }
  local_38 = local_18;
  uVar2 = local_18;
  _object_getClass();
  _class_getSuperclass();
  local_30 = uVar2;
  _objc_msgSendSuper(&local_38,PTR_s_didMoveToWindow_0269ddb8);
LAB_0075d1c4:
  uVar2 = local_18;
  puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) != 0) {
    FUN_0075f4f8(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

