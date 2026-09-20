// FUN_003169a8 @ 003169a8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003169a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  _objc_storeStrong(&local_48,param_7);
  if (local_48 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,uStack_38,local_30,uStack_28,local_48,PTR_s_setFrame__026ca960);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFillColor__026ca948,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setStrokeColor__026caa78,param_8);
    (*(code *)PTR__objc_msgSend_02578628)(param_5,local_48,PTR_s_setLineWidth__026ca9b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setPath__026caa08,param_9);
    FUN_0031dd48(param_5,param_6,local_48);
  }
  _objc_storeStrong(&local_48,0);
  return;
}

