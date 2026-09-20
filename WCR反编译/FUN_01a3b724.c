// FUN_01a3b724 @ 01a3b724

void FUN_01a3b724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_78;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined *local_20;
  long local_18;
  
  local_20 = (undefined *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKey__0269e048,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_48 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_r);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_78;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_showVoiceInputBreathingLightPaletteColorPickerForSlot_lu);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _NSSelectorFromString();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_addBtnTitle_target_sel__0269d278,puVar1,uVar4,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_20,0);
  return;
}

