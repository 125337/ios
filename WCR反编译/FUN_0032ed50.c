// FUN_0032ed50 @ 0032ed50

void FUN_0032ed50(undefined8 param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  uint local_16c;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  double local_50;
  long local_48;
  undefined4 local_40;
  ulong local_30;
  long local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_28 = 0;
    local_40 = 1;
  }
  else {
    local_48 = 0;
    dVar5 = 1.7976931348623157e+308;
    local_50 = 1.7976931348623157e+308;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    while (puVar2 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0),
          lVar1 = local_48, puVar2 != (undefined *)0x0) {
      puVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeObjectAtIndex__0269d530,0);
      puVar2 = local_60;
      puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      puVar4 = local_60;
      if (((ulong)puVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = puVar4;
        FUN_00330430();
        if (((ulong)puVar4 & 1) != 0) {
          puVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_70 = puVar2;
          while( true ) {
            local_16c = 0;
            if (local_70 != (undefined *)0x0) {
              puVar2 = local_70;
              (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_16c = (uint)puVar4 ^ 1;
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
            if ((local_16c & 1) == 0) break;
            puVar4 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = local_70;
            local_70 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          if (local_70 != (undefined *)0x0) {
            puVar2 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_convertRect_toView__0269ded8,local_70);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _CGRectGetMidX();
            dVar6 = dVar5;
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bounds_026ca548);
            _CGRectGetMidX(dVar6,param_2);
            dVar5 = ABS(dVar5 - dVar6);
            param_2 = dVar6;
            if ((local_48 == 0) || (param_2 = local_50, dVar5 < local_50)) {
              _objc_storeStrong(&local_48,local_68);
              local_50 = dVar5;
            }
          }
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(&local_68,0);
      }
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_58;
      if (puVar4 != (undefined *)0x0) {
        puVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObjectsFromArray__0269d540);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      _objc_storeStrong(&local_60,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = lVar1;
    local_40 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

