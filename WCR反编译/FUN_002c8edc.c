// FUN_002c8edc @ 002c8edc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002c8edc(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *local_e8;
  cfstringStruct *local_a8;
  cfstringStruct *local_78;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f752);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = &cf_WCRefineFloatingGlowView;
  local_30 = uVar2;
  _NSClassFromString();
  if (((local_30 != 0) && (local_e8 != (cfstringStruct *)0x0)) &&
     (uVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,local_e8),
     (uVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeFromSuperview_026ca800);
    _objc_storeStrong(&local_30,0);
  }
  if (local_30 == 0) {
    bVar1 = local_e8 == (cfstringStruct *)0x0;
    if (bVar1) {
      local_e8 = (cfstringStruct *)PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),local_e8,
                 PTR_s_initWithFrame__026ca6e8);
      local_a8 = local_e8;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18),local_e8,
                 PTR_s_initWithFrame__026ca6e8);
      local_78 = local_e8;
    }
    _objc_storeStrong(&local_30,local_e8);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setTag__026caa80,DAT_02323fd0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setUserInteractionEnabled__026caad8,0);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setClipsToBounds__026ca8c8,0);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_insertSubview_atIndex__026ca748,local_30,0)
    ;
  }
  uVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

