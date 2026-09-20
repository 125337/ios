// ensureSlotTag:inHost: @ 00fcf1b8

/* Function Stack Size: 0x20 bytes */

ID WCRefineHomeTableHeaderHost::ensureSlotTag_inHost_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_38 = (undefined *)0x0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  puVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_viewWithTag__026cabe0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)PTR__CGRectZero_025782f0,*(undefined8 *)(PTR__CGRectZero_025782f0 + 8)
               ,*(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
               *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
    puVar1 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTag__026caa80,local_30);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setClipsToBounds__026ca8c8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setUserInteractionEnabled__026caad8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addSubview__026ca4c0,local_40);
    puVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

