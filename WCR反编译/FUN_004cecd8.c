// FUN_004cecd8 @ 004cecd8

void FUN_004cecd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  ulong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_48,param_5);
  if (local_48 != 0) {
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_frame_026ca640);
    FUN_004d035c(param_1,param_2,param_3,param_4,local_40,uStack_38,local_30,uStack_28);
    if ((uVar1 & 1) == 0) {
      pcVar2 = (code *)PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      _class_getMethodImplementation(pcVar2,PTR_s_setFrame__026ca960);
      if (pcVar2 == (code *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,uStack_38,local_30,uStack_28,local_48,PTR_s_setFrame__026ca960);
      }
      else {
        (*pcVar2)(local_40,uStack_38,local_30,uStack_28,local_48,PTR_s_setFrame__026ca960);
      }
    }
  }
  _objc_storeStrong(&local_48,0);
  return;
}

