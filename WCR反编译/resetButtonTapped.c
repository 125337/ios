// resetButtonTapped @ 01fa3b0c

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkEditorViewController::resetButtonTapped(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double in_d2;
  double in_d3;
  double local_180;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  dVar3 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_originalWatermarkImage),PTR_s_size_026cab00);
  local_180 = in_d2 / dVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_originalWatermarkImage),PTR_s_size_026cab00);
  if (local_180 < in_d3 / dVar3) {
    local_180 = in_d3 / dVar3;
  }
  *(double *)(param_1 + (long)_currentScale) = local_180;
  lVar2 = (long)_currentCenter;
  dVar5 = 0.5;
  dVar3 = 0.5;
  FUN_01fa2e4c();
  ((double *)(param_1 + lVar2))[1] = dVar5;
  *(double *)(param_1 + lVar2) = dVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_originalWatermarkImage),PTR_s_size_026cab00);
  dVar5 = *(double *)(param_1 + (long)_currentScale);
  dVar3 = dVar3 * dVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + (long)_originalWatermarkImage),PTR_s_size_026cab00);
  dVar5 = dVar5 * *(double *)(param_1 + (long)_currentScale);
  uVar6 = 0;
  uVar4 = 0;
  FUN_01fa0f08();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,uVar6,dVar3,dVar5,*(undefined8 *)(param_1 + (long)_watermarkContainerView),
             PTR_s_setBounds__026ca8a0);
  in_d2 = in_d2 * *(double *)(param_1 + (long)_currentCenter);
  in_d3 = in_d3 * *(double *)(param_1 + (long)_currentCenter + 8);
  FUN_01fa2e4c();
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d2,in_d3,*(undefined8 *)(param_1 + (long)_watermarkContainerView),
             PTR_s_setCenter__026ca8c0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateWatermarkPreview_026c9d58);
  return;
}

