// deviceOrientationDidChangeNotification: @0x89ff8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCMYBIBScreenRotationHandler::deviceOrientationDidChangeNotification_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  double dVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 in_d1;
  double local_2e0;
  uint local_25c;
  undefined8 local_250;
  undefined *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  code *local_238;
  undefined *local_230;
  undefined8 local_228;
  undefined8 local_220;
  long local_218;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [48];
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [80];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined4 local_3c;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = _objc_msgSend_supportedOnlyOneSystemOrientation(local_28,local_250);
  if ((uVar3 & 1) == 0) {
    local_3c = 1;
  }
  else {
    uVar4 = _objc_loadWeakRetained(local_28 + 8);
    uVar3 = _objc_msgSend_isTransitioning(uVar4,local_250);
    local_25c = 1;
    if ((uVar3 & 1) == 0) {
      local_25c = _objc_msgSend_isRotating(local_28,local_250);
    }
    (*(code *)PTR__objc_release_00110458)(uVar4);
    if ((local_25c & 1) == 0) {
      _objc_msgSend_currentDevice(&_OBJC_CLASS___UIDevice,local_250);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      lVar5 = _objc_msgSend_orientation(uVar4,local_250);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      local_48 = lVar5;
      lVar6 = _objc_msgSend_currentOrientation(local_28,local_250);
      if ((lVar5 - lVar6 == 0) ||
         (uVar3 = _objc_msgSend_supportedOfOrientation_(lVar5 - lVar6,local_28,local_250,local_48),
         (uVar3 & 1) == 0)) {
        local_3c = 1;
      }
      else {
        _objc_msgSend_setRotating_(local_28,local_250,1);
        uVar4 = _objc_loadWeakRetained(local_28 + 8);
        _objc_msgSend_collectionView(uVar4,local_250);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        uVar8 = _objc_loadWeakRetained(local_28 + 8);
        uVar9 = _objc_msgSend_currentPage(uVar8,local_250);
        _objc_msgSend_scrollToPage_(uVar7,local_250,uVar9);
        (*(code *)PTR__objc_release_00110458)(uVar8);
        (*(code *)PTR__objc_release_00110458)(uVar7);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        uVar4 = _objc_loadWeakRetained(local_28 + 8);
        uVar7 = _objc_msgSend_currentPage(uVar4,local_250);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        local_50 = uVar7;
        _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_250);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _objc_msgSend_statusBarOrientation(uVar4,local_250);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        local_58 = uVar7;
        local_60 = _WCMYBIBRotationAngle(uVar7,local_48);
        local_68 = (double)_WCMYBIBRotationAngle(*(undefined8 *)(local_28 + 0x40),local_48);
        uStack_88 = *(undefined8 *)(PTR__CGPointZero_00110850 + 8);
        local_90 = *(undefined8 *)PTR__CGPointZero_00110850;
        local_80 = _objc_msgSend_containerSizeWithOrientation_(local_28,local_250,local_48);
        uStack_78 = in_d1;
        uVar4 = _objc_loadWeakRetained(local_28 + 8);
        _objc_msgSend_collectionView(uVar4,local_250);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_centerCell(uVar7,local_250);
        local_98 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)(uVar7);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        local_a0 = (double)_objc_msgSend_rotationDuration(local_28,local_250);
        local_a8 = local_68;
        if (0.0 <= local_68) {
          local_2e0 = local_68;
        }
        else {
          local_2e0 = -local_68;
        }
        local_b0 = local_2e0;
        iVar10 = 2;
        if (local_2e0 <= 1.5707963267948966) {
          iVar10 = 1;
        }
        local_a0 = local_a0 * (double)iVar10;
        uStack_c8 = uStack_88;
        local_d0 = local_90;
        uStack_b8 = uStack_78;
        local_c0 = local_80;
        uVar4 = _objc_loadWeakRetained(local_28 + 8);
        _objc_msgSend_collectionView(uVar4,local_250);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setBounds_(local_d0,uStack_c8,local_c0,uStack_b8,uVar7,local_250);
        (*(code *)PTR__objc_release_00110458)(uVar7);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        _CGAffineTransformMakeRotation(local_60);
        uVar4 = _objc_loadWeakRetained(local_28 + 8);
        _objc_msgSend_collectionView(uVar4,local_250);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _memcpy(auStack_150,auStack_120,0x30);
        _objc_msgSend_setTransform_(uVar7,local_250,auStack_150);
        (*(code *)PTR__objc_release_00110458)(uVar7);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        _CGAffineTransformMakeRotation(-local_68);
        _objc_msgSend_contentView(local_98,local_250);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _memcpy(auStack_1b0,auStack_180,0x30);
        _objc_msgSend_setTransform_(uVar4,local_250,auStack_1b0);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        uVar4 = _objc_loadWeakRetained(local_28 + 8);
        _objc_msgSend_collectionView(uVar4,local_250);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_scrollToPage_(uVar7,local_250,local_50);
        (*(code *)PTR__objc_release_00110458)(uVar7);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        _objc_msgSend_orientationWillChangeWithExpectOrientation_centerCell_
                  (local_28,local_250,local_48,local_98);
        dVar2 = local_a0;
        puVar1 = PTR___NSConcreteStackBlock_001104f0;
        local_210 = PTR___NSConcreteStackBlock_001104f0;
        local_208 = 0xc2000000;
        local_204 = 0;
        local_200 = 
        ___71__WCMYBIBScreenRotationHandler_deviceOrientationDidChangeNotification___block_invoke;
        local_1f8 = &___block_descriptor_96_e8_32s40s_e5_v8__0l;
        local_1f0 = (*(code *)PTR__objc_retain_00110460)(local_28);
        local_1e0 = local_48;
        local_1e8 = (*(code *)PTR__objc_retain_00110460)(local_98);
        uStack_1d0 = uStack_88;
        local_1d8 = local_90;
        uStack_1c0 = uStack_78;
        local_1c8 = local_80;
        local_1b8 = local_60;
        local_248 = puVar1;
        local_240 = 0xc2000000;
        local_23c = 0;
        local_238 = 
        ___71__WCMYBIBScreenRotationHandler_deviceOrientationDidChangeNotification___block_invoke_31
        ;
        local_230 = &___block_descriptor_56_e8_32s40s_e8_v12__0B8l;
        local_228 = (*(code *)PTR__objc_retain_00110460)(local_28);
        local_218 = local_48;
        local_220 = (*(code *)PTR__objc_retain_00110460)(local_98);
        _objc_msgSend_animateWithDuration_delay_options_animations_completion_
                  (dVar2,0,&_OBJC_CLASS___UIView,local_250,0,&local_210,&local_248);
        _objc_storeStrong(&local_220);
        _objc_storeStrong(&local_228,0);
        _objc_storeStrong(&local_1e8,0);
        _objc_storeStrong(&local_1f0,0);
        _objc_storeStrong(&local_98,0);
        local_3c = 0;
      }
    }
    else {
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

