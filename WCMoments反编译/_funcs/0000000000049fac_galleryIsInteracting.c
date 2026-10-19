// galleryIsInteracting @0x49fac

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::galleryIsInteracting(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  _objc_msgSend_gallery(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_msgSend_isTransitioning(uVar2,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if ((uVar1 & 1) == 0) {
    _objc_msgSend_gallery(local_20,local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_collectionView(uVar2,local_68);
    local_30 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar3 = _objc_msgSend_isTracking(local_30,local_68);
    if ((((uVar3 & 1) == 0) &&
        (uVar3 = _objc_msgSend_isDragging(local_30,local_68), (uVar3 & 1) == 0)) &&
       (uVar3 = _objc_msgSend_isDecelerating(local_30,local_68), (uVar3 & 1) == 0)) {
      _objc_msgSend_gallery(local_20,local_68);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_collectionView(uVar2,local_68);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_visibleCells(uVar4,local_68);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      local_40 = _objc_msgSend_mutableCopy(uVar5,local_68);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar2);
      do {
        lVar6 = _objc_msgSend_count(local_40,local_68);
        if (lVar6 == 0) {
          local_11 = 0;
          local_34 = 1;
          break;
        }
        _objc_msgSend_lastObject(local_40,local_68);
        local_48 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_removeLastObject(local_40,local_68);
        uVar2 = local_48;
        uVar4 = _objc_opt_class(&_OBJC_CLASS___UIScrollView);
        uVar3 = _objc_opt_isKindOfClass(uVar2,uVar4);
        if ((uVar3 & 1) == 0) {
LAB_0004a280:
          uVar2 = local_40;
          _objc_msgSend_subviews(local_48,local_68);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_addObjectsFromArray_(uVar2,local_68);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          local_34 = 0;
        }
        else {
          local_50 = (*(code *)PTR__objc_retain_00110460)(local_48);
          uVar3 = _objc_msgSend_isTracking(local_50,local_68);
          if ((((uVar3 & 1) == 0) &&
              (uVar3 = _objc_msgSend_isDragging(local_50,local_68), (uVar3 & 1) == 0)) &&
             ((uVar3 = _objc_msgSend_isDecelerating(local_50,local_68), (uVar3 & 1) == 0 &&
              ((uVar3 = _objc_msgSend_isZooming(local_50,local_68), (uVar3 & 1) == 0 &&
               (uVar3 = _objc_msgSend_isZoomBouncing(local_50,local_68), (uVar3 & 1) == 0)))))) {
            dVar7 = (double)_objc_msgSend_zoomScale(local_50,local_68);
            dVar8 = (double)_objc_msgSend_minimumZoomScale(local_50,local_68);
            if (dVar8 + 0.01 < dVar7) goto LAB_0004a244;
            local_34 = 0;
          }
          else {
LAB_0004a244:
            local_11 = 1;
            local_34 = 1;
          }
          _objc_storeStrong(&local_50,0);
          if (local_34 == 0) goto LAB_0004a280;
        }
        _objc_storeStrong(&local_48,0);
      } while (local_34 == 0);
      _objc_storeStrong(&local_40,0);
    }
    else {
      local_11 = 1;
      local_34 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  else {
    local_11 = 1;
  }
  return local_11 & 1;
}

