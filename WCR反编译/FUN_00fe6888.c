// FUN_00fe6888 @ 00fe6888

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00fe6888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (DAT_028e3090 == (undefined *)0x0) {
    puVar2 = PTR_WCRIconNameCaptureFloatWindow_026cec40;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,param_4,puVar2,PTR_s_initWithFrame__026ca6e8);
    puVar1 = DAT_028e3090;
    DAT_028e3090 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3090,PTR_s_placeDefault_026ad4a8);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_5 + 0x20),PTR_s_attachFloatWindowToActiveScene_026ad4b0);
  return;
}

