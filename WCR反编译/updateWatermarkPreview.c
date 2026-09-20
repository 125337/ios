// updateWatermarkPreview @ 01fa2ea4

/* WARNING: Removing unreachable block (ram,0x01fa3138) */
/* WARNING: Removing unreachable block (ram,0x01fa3150) */
/* WARNING: Removing unreachable block (ram,0x01fa3154) */
/* WARNING: Removing unreachable block (ram,0x01fa315c) */
/* WARNING: Removing unreachable block (ram,0x01fa30a4) */
/* WARNING: Removing unreachable block (ram,0x01fa30bc) */
/* WARNING: Removing unreachable block (ram,0x01fa30c0) */
/* WARNING: Removing unreachable block (ram,0x01fa30c8) */
/* WARNING: Removing unreachable block (ram,0x01fa3018) */
/* WARNING: Removing unreachable block (ram,0x01fa3028) */
/* WARNING: Removing unreachable block (ram,0x01fa302c) */
/* WARNING: Removing unreachable block (ram,0x01fa3034) */
/* WARNING: Removing unreachable block (ram,0x01fa2f9c) */
/* WARNING: Removing unreachable block (ram,0x01fa2fac) */
/* WARNING: Removing unreachable block (ram,0x01fa2fb0) */
/* WARNING: Removing unreachable block (ram,0x01fa2fb8) */
/* WARNING: Removing unreachable block (ram,0x01fa2f48) */
/* WARNING: Removing unreachable block (ram,0x01fa2f60) */
/* WARNING: Removing unreachable block (ram,0x01fa2f64) */
/* WARNING: Removing unreachable block (ram,0x01fa2f6c) */
/* WARNING: Removing unreachable block (ram,0x01fa2fc4) */
/* WARNING: Removing unreachable block (ram,0x01fa2fdc) */
/* WARNING: Removing unreachable block (ram,0x01fa2fe0) */
/* WARNING: Removing unreachable block (ram,0x01fa2fe8) */
/* WARNING: Removing unreachable block (ram,0x01fa3040) */
/* WARNING: Removing unreachable block (ram,0x01fa3060) */
/* WARNING: Removing unreachable block (ram,0x01fa3064) */
/* WARNING: Removing unreachable block (ram,0x01fa306c) */
/* WARNING: Removing unreachable block (ram,0x01fa30d4) */
/* WARNING: Removing unreachable block (ram,0x01fa30f4) */
/* WARNING: Removing unreachable block (ram,0x01fa30f8) */
/* WARNING: Removing unreachable block (ram,0x01fa3100) */
/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkEditorViewController::updateWatermarkPreview(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  double in_d2;
  double in_d3;
  
  if ((*(long *)(param_1 + (long)_watermarkContainerView) != 0) &&
     (*(long *)(param_1 + (long)_originalWatermarkImage) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + (long)_watermarkContainerView),PTR_s_bounds_026ca548);
    if ((in_d2 <= 0.0) || (((in_d3 <= 0.0 || (ABS(in_d2) == INFINITY)) || (ABS(in_d3) == INFINITY)))
       ) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
    }
    else {
      if (*(long *)(param_1 + (long)_watermarkImageView) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + (long)_watermarkImageView),
                   PTR_s_removeFromSuperview_026ca800);
      }
      puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar2 = *(undefined8 *)(param_1 + (long)_watermarkImageView);
      *(undefined8 *)(param_1 + (long)_watermarkImageView) = puVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,in_d2,in_d3,*(undefined8 *)(param_1 + (long)_watermarkImageView),
                 PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + (long)_watermarkImageView),PTR_s_setContentMode__026ca8e0
                 ,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + (long)_opacity),
                 *(undefined8 *)(param_1 + (long)_watermarkImageView),PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + (long)_watermarkContainerView),PTR_s_addSubview__026ca4c0
                 ,*(undefined8 *)(param_1 + (long)_watermarkImageView));
    }
  }
  return;
}

