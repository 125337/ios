// normalizeTranslateImage:forDisplayInRect: @ 01678094

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x38 bytes */

ID WCRSuperFloatCropViewController::normalizeTranslateImage_forDisplayInRect_
             (ID param_1,SEL param_2,ID param_3,CGRect param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double in_d0;
  double dVar6;
  double dVar7;
  double dVar8;
  double in_d2;
  double in_d3;
  double local_140;
  double local_138;
  undefined *local_70;
  SEL local_68;
  ID local_60;
  double local_48;
  double local_40;
  undefined1 *local_38;
  double local_30;
  double local_28;
  
  dVar8 = DAT_02323da8;
  local_70 = (undefined1 *)0x0;
  local_68 = param_2;
  local_60 = param_1;
  local_48 = in_d2;
  local_40 = in_d3;
  _objc_storeStrong(&local_70,param_3,param_3,param_4.field0_0x0.field0_0x0,
                    param_4.field0_0x0.field1_0x8,param_4.field1_0x10.field0_0x0,
                    param_4.field1_0x10.field1_0x8);
  puVar2 = local_70;
  if (local_70 != (undefined1 *)0x0) {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGImage_0269e0e8);
    puVar3 = local_70;
    if (puVar2 != (undefined1 *)0x0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGImage_0269e0e8);
      _CGImageGetWidth();
      puVar2 = local_70;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGImage_0269e0e8);
      _CGImageGetHeight();
      local_38 = local_70;
      if (((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar3) &&
         ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar2)) {
        puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_138 = in_d0;
        if (in_d0 < 1.0) {
          local_138 = 1.0;
        }
        dVar6 = local_48 * local_138;
        dVar7 = local_40 * local_138;
        local_140 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_scale_026ca830);
        puVar5 = local_70;
        puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        if (local_140 < 1.0) {
          local_140 = 1.0;
        }
        bVar1 = false;
        if (8.0 < dVar6) {
          local_28 = (double)NEON_ucvtf(puVar3);
          local_28 = local_28 - dVar6;
          bVar1 = false;
          if ((ABS(local_28) / dVar6 < dVar8) && (bVar1 = false, 8.0 < dVar7)) {
            local_30 = (double)NEON_ucvtf(puVar2);
            local_30 = local_30 - dVar7;
            bVar1 = ABS(local_30) / dVar7 < dVar8;
          }
        }
        if ((!bVar1) || (local_138 - DAT_02323c88 <= local_140)) {
          if ((DAT_0232c668 < local_140) ||
             (dVar8 = (double)NEON_ucvtf(puVar3), dVar8 < local_48 * local_138 * 0.85)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_38 = puVar5;
          }
          else {
            _objc_retainAutorelease();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGImage_0269e0e8);
            puVar2 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_imageOrientation_0269f430);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,puVar4,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,puVar5,
                       puVar2);
            _objc_retainAutoreleasedReturnValue();
            local_38 = puVar4;
          }
        }
        else {
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGImage_0269e0e8);
          puVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_imageOrientation_0269f430);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,puVar4,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,puVar5,puVar2)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_38 = puVar4;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      goto LAB_016785ac;
    }
  }
  puVar2 = local_70;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = puVar2;
LAB_016785ac:
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_38;
}

