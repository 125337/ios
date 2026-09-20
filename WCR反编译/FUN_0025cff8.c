// FUN_0025cff8 @ 0025cff8

void FUN_0025cff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_58;
  undefined4 local_50;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_5;
  _objc_storeStrong(&local_30);
  uVar2 = local_30;
  local_40 = param_5;
  local_38 = param_1;
  if (local_30 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_30;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setWidth__0269feb0);
      if ((uVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,*(undefined8 *)(param_5 + 0x20),param_4,local_58,
                   PTR_s_setFrame__026ca960);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setWidth__0269feb0);
      }
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setCenterX__026a10e0);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_center_026ca560);
        (*(code *)PTR__objc_msgSend_02578628)(local_38,param_2,local_58,PTR_s_setCenter__026ca8c0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,local_58,PTR_s_setCenterX__026a10e0);
      }
      _objc_storeStrong(&local_58,0);
      local_50 = 0;
      goto LAB_0025d2d0;
    }
  }
  local_50 = 1;
LAB_0025d2d0:
  _objc_storeStrong(&local_30,0);
  return;
}

