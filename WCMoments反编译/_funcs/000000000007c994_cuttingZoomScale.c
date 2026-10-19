// cuttingZoomScale @0x7c994

/* Function Stack Size: 0x10 bytes */

double WCMYBIBImageData::cuttingZoomScale(ID param_1,SEL param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 local_68;
  double local_18;
  
  dVar12 = 1.0;
  if (*(double *)(param_1 + 0xc0) < 1.0) {
    *(undefined8 *)(param_1 + 0xc0) = 0x3ff199999999999a;
    _objc_msgSend_originImage(param_1,local_68);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar2 == 0) {
      local_18 = *(double *)(param_1 + 0xc0);
    }
    else {
      _objc_msgSend_originImage(param_1,local_68);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      dVar7 = (double)_objc_msgSend_size(uVar3,local_68);
      _objc_msgSend_originImage(param_1,local_68);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_size(uVar4,local_68);
      _objc_msgSend_originImage(param_1,local_68);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      dVar8 = (double)_objc_msgSend_scale(uVar5,local_68);
      _objc_msgSend_originImage(param_1,local_68);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      dVar9 = (double)_objc_msgSend_scale(uVar6,local_68);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      uVar1 = _WCMYBIBLowMemory();
      dVar10 = 0.28;
      if ((uVar1 & 1) == 0) {
        dVar10 = 0.19;
      }
      dVar11 = (double)_objc_msgSend_compressingSize(uVar1 & 1,param_1,local_68);
      *(double *)(param_1 + 0xc0) =
           *(double *)(param_1 + 0xc0) + dVar10 * ((dVar7 * dVar12 * dVar8 * dVar9) / dVar11);
      local_18 = *(double *)(param_1 + 0xc0);
    }
  }
  else {
    local_18 = *(double *)(param_1 + 0xc0);
  }
  return local_18;
}

