// FUN_01d78930 @ 01d78930

void FUN_01d78930(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_40;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  if (local_18 != 0) {
    bVar2 = false;
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isUserInteractionEnabled_026ca770);
    bVar1 = true;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEditable_026c4c78);
      bVar1 = true;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isSelectable_026c4c80);
        bVar1 = true;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isHidden_026ca768);
          bVar1 = true;
          if ((uVar3 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_alpha_026ca4d8);
            bVar1 = true;
            if (param_1 <= DAT_02323d38) {
              local_40 = local_18;
              (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_text_0269ce68);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = true;
              uVar3 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar1 = uVar3 != 0;
            }
          }
        }
      }
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    if (bVar1) {
      if (local_20 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDelegate__026ca910,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setText__026caa88,&cf___);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditable__026a9fc8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelectable__026a9fd0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setAlpha__026ca860);
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isFirstResponder_0269f488);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resignFirstResponder_0269ea18);
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

