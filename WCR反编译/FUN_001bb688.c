// FUN_001bb688 @ 001bb688

ulong FUN_001bb688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  pcVar1 = DAT_028c8b00;
  local_40 = param_6;
  local_38 = param_5;
  local_30 = param_1;
  uStack_28 = param_2;
  local_20 = param_3;
  uStack_18 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(local_30,uStack_28,local_20,uStack_18,param_5,local_40);
  local_48 = param_5;
  if ((param_5 != 0) && (FUN_001e9fdc(), (param_5 & 1) != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  uVar3 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return uVar3;
}

