// settleGalleryIfIdle @0x4a334

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::settleGalleryIfIdle(ID param_1,SEL param_2)

{
  double dVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double in_d2;
  long local_148;
  long local_140;
  undefined8 local_110;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  int local_a4;
  long local_a0;
  undefined8 local_98;
  double local_78;
  double local_70;
  double local_60;
  undefined4 local_54;
  long local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_48 = param_2;
  local_40 = param_1;
  _objc_msgSend_gallery(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_collectionView(uVar3,local_110);
  local_50 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if ((local_50 == 0) ||
     (uVar4 = _objc_msgSend_galleryIsInteracting(local_40,local_110), (uVar4 & 1) != 0)) {
    _objc_msgSend_setGalleryIdleSamples_(local_40,local_110,0);
    local_54 = 1;
  }
  else {
    local_70 = (double)_objc_msgSend_contentOffset(local_50,local_110);
    local_60 = local_70;
    local_98 = _objc_msgSend_bounds(local_50,local_110);
    dVar1 = local_60;
    if (0.0 < in_d2) {
      local_78 = in_d2;
      dVar7 = (double)_objc_msgSend_galleryLastOffset(local_40,local_110);
      IVar2 = local_40;
      if (ABS(dVar1 - dVar7) <= 0.5) {
        lVar5 = _objc_msgSend_galleryIdleSamples(local_40,local_110);
        _objc_msgSend_setGalleryIdleSamples_(IVar2,local_110);
        if (lVar5 + 1U < 2) {
          local_54 = 1;
        }
        else {
          local_a4 = 0;
          _objc_msgSend_galleryMedia(lVar5 + -1,local_40,local_110);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          lVar5 = _objc_msgSend_count(uVar3,local_110);
          lVar5 = lVar5 + -1;
          (*(code *)PTR__objc_release_00110458)(uVar3);
          local_c0 = (long)(local_60 / local_78);
          local_140 = local_c0;
          if (lVar5 < local_c0) {
            local_140 = lVar5;
          }
          local_c8 = local_140;
          local_b0 = local_140;
          if (local_a4 < local_140) {
            local_148 = local_140;
          }
          else {
            local_148 = (long)local_a4;
          }
          local_d0 = local_148;
          local_a0 = local_148;
          local_b8 = lVar5;
          if (0.5 < ABS(local_60 - local_78 * (double)local_148)) {
            local_100 = PTR___NSConcreteStackBlock_001104f0;
            local_f8 = 0xc2000000;
            local_f4 = 0;
            local_f0 = ___40__WCMFeedController_settleGalleryIfIdle__block_invoke;
            local_e8 = &___block_descriptor_48_e8_32s_e5_v8__0l;
            local_e0 = (*(code *)PTR__objc_retain_00110460)(local_40);
            local_d8 = local_a0;
            _objc_msgSend_performWithoutAnimation_(&_OBJC_CLASS___UIView,local_110,&local_100);
            _objc_msgSend_setGalleryLastOffset_((double)local_a0 * local_78,local_40,local_110);
            local_38 = &cf_page;
            _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_110,local_a0);
            uVar3 = _objc_retainAutoreleasedReturnValue();
            local_30 = uVar3;
            _objc_msgSend_dictionaryWithObjects_forKeys_count_
                      (&_OBJC_CLASS___NSDictionary,local_110,&local_30,&local_38,1);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _Trace(&cf_gallery_page_settled);
            (*(code *)PTR__objc_release_00110458)(uVar6);
            (*(code *)PTR__objc_release_00110458)(uVar3);
            _objc_storeStrong(&local_e0,0);
          }
          local_54 = 0;
        }
      }
      else {
        _objc_msgSend_setGalleryLastOffset_(local_60,local_40,local_110);
        _objc_msgSend_setGalleryIdleSamples_(local_40,local_110,0);
        local_54 = 1;
      }
    }
    else {
      local_54 = 1;
    }
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

