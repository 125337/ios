// FUN_0008e0f0 @ 0008e0f0

void FUN_0008e0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  if ((local_28 != 0) && (local_30 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,param_4,local_28,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAutoresizingMask__026ca878,0x12);
    FUN_000750a0(local_28);
    uVar2 = local_28;
    if ((param_8 & 1) != 0) {
      pcVar1 = "MMEmoticonView";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
      uVar4 = local_28;
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar2 = local_28;
        if ((uVar4 & 1) != 0) {
          uVar5 = local_38;
          FUN_00075200();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setImage__026ca978);
          (*(code *)PTR__objc_release_02578630)(uVar5);
        }
      }
      else {
        FUN_00074dc8(local_28,local_38);
        FUN_000750a0(local_28);
      }
      _objc_setAssociatedObject(local_30,DAT_026df738,local_38,3);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

