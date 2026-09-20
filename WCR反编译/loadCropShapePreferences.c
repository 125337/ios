// loadCropShapePreferences @ 0166d4d0

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRSuperFloatCropViewController::loadCropShapePreferences
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  double in_d0;
  double dVar5;
  double local_270;
  double local_268;
  double local_258;
  double local_250;
  double local_240;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined1 *local_218;
  double local_208;
  double local_200;
  double local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1c8;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a0;
  double local_160;
  undefined1 *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cropUsingFullScreenPrefs_026b24e0);
  if ((IVar2 & 1) == 0) {
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKey__0269e048,&cf_WCRSFCropShapeUI);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined1 *)0x0) {
      local_218 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      local_218 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_integerForKey__026a9600,&cf_WCRSFCropShapeUI);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((long)local_218 < 4) {
      local_228 = local_218;
    }
    else {
      local_228 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
    }
    if ((long)local_228 < 1) {
      local_230 = (undefined1 *)0x0;
    }
    else {
      local_230 = local_228;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCropShapeUI__026b2588,local_230);
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKey__0269e048,&cf_WCRSFCropCornerRadius);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined1 *)0x0) {
      local_240 = 18.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_doubleForKey__026a7e60,&cf_WCRSFCropCornerRadius);
      local_240 = in_d0;
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_240 <= 40.0) {
      local_250 = local_240;
    }
    else {
      local_250 = 40.0;
    }
    if (local_250 <= 0.0) {
      local_258 = 0.0;
    }
    else {
      local_258 = local_250;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_258,local_28,PTR_s_setCropCornerRadius__026b2590);
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_boolForKey__0269f3d8,&cf_WCRSFCropShadowCanvasV2);
    dVar5 = 12.0;
    local_160 = 12.0;
    puVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKey__0269e048,&cf_WCRSFCropShadowAmount);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (((puVar4 != (undefined1 *)0x0) &&
        ((*(code *)PTR__objc_msgSend_02578628)
                   (local_38,PTR_s_doubleForKey__026a7e60,&cf_WCRSFCropShadowAmount),
        local_160 = dVar5, ((ulong)puVar3 & 1) == 0)) && (dVar5 < 0.5)) {
      local_160 = 12.0;
    }
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setBool_forKey__026a9618,1,&cf_WCRSFCropShadowCanvasV2);
    }
    if (local_160 <= 24.0) {
      local_268 = local_160;
    }
    else {
      local_268 = 24.0;
    }
    if (local_268 <= 0.0) {
      local_270 = 0.0;
    }
    else {
      local_270 = local_268;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_270,local_28,PTR_s_setCropShadowAmount__026b2598);
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_boolForKey__0269f3d8,&cf_WCRSFCropShadowInner);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCropShadowInner__026b25a0,puVar3);
  }
  else {
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKey__0269e048,&cf_WCRSFCropFSShapeUI);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined1 *)0x0) {
      local_1a0 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      local_1a0 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_integerForKey__026a9600,&cf_WCRSFCropFSShapeUI);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((long)local_1a0 < 4) {
      local_1b0 = local_1a0;
    }
    else {
      local_1b0 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
    }
    if ((long)local_1b0 < 1) {
      local_1b8 = (undefined1 *)0x0;
    }
    else {
      local_1b8 = local_1b0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCropShapeUI__026b2588,local_1b8);
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKey__0269e048,&cf_WCRSFCropFSCornerRadius);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined1 *)0x0) {
      local_1c8 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_doubleForKey__026a7e60,&cf_WCRSFCropFSCornerRadius);
      local_1c8 = in_d0;
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_1c8 <= 40.0) {
      local_1d8 = local_1c8;
    }
    else {
      local_1d8 = 40.0;
    }
    if (local_1d8 <= 0.0) {
      local_1e0 = 0.0;
    }
    else {
      local_1e0 = local_1d8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCropCornerRadius__026b2590);
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKey__0269e048,&cf_WCRSFCropFSShadowAmount);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined1 *)0x0) {
      local_1f0 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_doubleForKey__026a7e60,&cf_WCRSFCropFSShadowAmount);
      local_1f0 = local_1e0;
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_1f0 <= 24.0) {
      local_200 = local_1f0;
    }
    else {
      local_200 = 24.0;
    }
    if (local_200 <= 0.0) {
      local_208 = 0.0;
    }
    else {
      local_208 = local_200;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_208,local_28,PTR_s_setCropShadowAmount__026b2598);
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_boolForKey__0269f3d8,&cf_WCRSFCropFSShadowInner);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCropShadowInner__026b25a0,puVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_applyShapeMappingFromUI_026b25a8);
  _objc_storeStrong(&local_38,0);
  return;
}

