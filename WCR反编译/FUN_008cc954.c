// FUN_008cc954 @ 008cc954

void FUN_008cc954(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *local_88;
  ulong local_70;
  ulong local_68 [3];
  undefined *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_3c = param_3;
  local_38 = param_2;
  local_30 = param_1;
  FUN_008cf4a8(param_1,param_3);
  if ((param_1 & 1) != 0) {
    local_88 = &cf_other_voice_pack_attachment;
    _WCRPluginIconResolvedIcon(&cf_other_voice_pack_attachment,&cf_icons_filled_song);
    _objc_retainAutoreleasedReturnValue();
    if (local_88 == (cfstringStruct *)0x0) {
      local_88 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_88;
    (*(code *)PTR__objc_release_02578630)();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    FUN_008cf6b8();
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_____d__d);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar4 = local_30;
    _objc_getAssociatedObject(local_30,DAT_026f4aa0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_30;
    local_68[0] = uVar4;
    _objc_getAssociatedObject(local_30,DAT_026f4aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_68[0];
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_70 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = local_68[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_68[0],PTR_s_isEqualToString__0269ccc8,local_50),
       uVar5 = local_70, (uVar4 & 1) == 0)) {
LAB_008ccc2c:
      FUN_008cf7ec();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_70;
      local_70 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      _objc_setAssociatedObject(local_30,DAT_026f4aa0,local_50,3);
      if (local_70 != 0) {
        _objc_setAssociatedObject(local_30,DAT_026f4aa8,local_70,1);
      }
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar4 = uVar5;
      if ((uVar5 & 1) == 0) goto LAB_008ccc2c;
    }
    uVar4 = local_70;
    bVar1 = local_70 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar4;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(local_68,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    if (bVar1) goto LAB_008ccdf4;
  }
  uVar4 = local_30;
  (*DAT_028ce210)(local_30,local_38,local_3c);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar4;
LAB_008ccdf4:
  _objc_autoreleaseReturnValue(local_28);
  return;
}

