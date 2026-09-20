// upsertName:kind:pointSize:image: @ 00fe2760

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Function Stack Size: 0x38 bytes */

void __thiscall
WCRefineIconNameCaptureSupport::upsertName_kind_pointSize_image_
          (WCRefineIconNameCaptureSupport *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          CGSize param_5,ID param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  double in_d0;
  double dVar6;
  double in_d1;
  double local_108;
  uint local_e4;
  cfstringStruct *local_e0;
  undefined *local_68;
  undefined4 local_5c;
  ulong local_58;
  cfstringStruct *local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  double local_30;
  double local_28;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  local_30 = in_d0;
  local_28 = in_d1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_4);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_5.field0_0x0);
  lVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_5c = 1;
  }
  else {
    puVar2 = DAT_028e3060;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3060,PTR_s_objectForKeyedSubscript__0269d098,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR_WCRefineIconNameCaptureItem_026cec48;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineIconNameCaptureItem_026cec48,PTR_s_new_0269d288);
      puVar2 = local_68;
      local_68 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setName__0269e0c8,local_48);
      if (local_50 == (cfstringStruct *)0x0) {
        local_e0 = &cf_png;
      }
      else {
        local_e0 = local_50;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setKind__026ad410,local_e0);
      DAT_028e3080 = DAT_028e3080 + 1;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setOrder__026ad418);
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3058,PTR_s_addObject__0269d180,local_68);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e3060,PTR_s_setObject_forKeyedSubscript__0269d248,local_68,local_48);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_kind_026a27e8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e4 = 0;
      if (((ulong)puVar3 & 1) != 0) {
        pcVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_svg);
        local_e4 = (uint)pcVar4;
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((local_e4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_setKind__026ad410,_WCRefineIconNameCaptureKindSVG);
      }
    }
    local_108 = local_30;
    if ((0.0 < local_30) && (local_108 = local_28, 0.0 < local_28)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_68,PTR_s_setPointWidth__026ad420);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setPointHeight__026ad428);
      local_108 = local_28;
    }
    uVar5 = local_58;
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_scale_026ca830);
      if (local_108 <= 0.0) {
        local_108 = 1.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_scale_026ca830);
      }
      dVar6 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setScale__026caa28);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00);
      if (0.0 < dVar6) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_pointWidth_026ad1c0);
        if (dVar6 <= 0.0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00);
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setPointWidth__026ad420);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_pointHeight_026ad1d0);
        if (dVar6 <= 0.0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00);
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setPointHeight__026ad428);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00);
        dVar6 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setPixelWidth__026ad430);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_size_026cab00);
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar6 * local_108,local_68,PTR_s_setPixelHeight__026ad438);
      }
      puVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_previewImage_026ad380);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setPreviewImage__026ad440,local_58);
      }
    }
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return;
}

