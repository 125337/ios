// FUN_01eb0990 @ 01eb0990

void FUN_01eb0990(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_78;
  undefined8 local_70;
  byte local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_026ce648;
  local_38 = param_1;
  local_29 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_026ce648,PTR_s_preferredFormat_026a48d8
            );
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setOpaque__026ca9f8,0);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_026ce650;
  _objc_alloc();
  uVar2 = local_38;
  uVar3 = local_38;
  FUN_01eb5390();
  local_58 = uVar2;
  local_50 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,uVar3,puVar1,PTR_s_initWithSize_format__026ca700,local_40);
  uVar2 = local_28;
  local_70 = local_38;
  local_68 = local_29 & 1;
  local_48 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_imageWithActions__026ca688);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_imageWithRenderingMode__026ca690,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

