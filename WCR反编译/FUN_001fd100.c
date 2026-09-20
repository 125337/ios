// FUN_001fd100 @ 001fd100

void FUN_001fd100(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar4 = local_28;
  if (local_28 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) != 0) {
      if ((DAT_028c9160 != 0) &&
         (uVar4 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,DAT_028c9160),
         (uVar4 & 1) != 0)) {
        bVar1 = local_30 == 0;
        bVar2 = local_28 != local_30;
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setEffect__026ca930);
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setEffect__026ca930,0);
        }
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if ((bVar1 || bVar2) &&
           (uVar4 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isHidden_026ca768), (uVar4 & 1) != 0
           )) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,0);
        }
      }
      if ((DAT_028c9168 != 0) &&
         (uVar4 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,DAT_028c9168),
         (uVar4 & 1) != 0)) {
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,1);
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

