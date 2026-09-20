// FUN_0031fdd0 @ 0031fdd0

void FUN_0031fdd0(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  double local_98;
  double local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined8 uStack_58;
  double local_50;
  double dStack_48;
  undefined4 local_3c;
  long local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  puVar5 = local_30;
  if ((local_30 == (undefined *)0x0) || (local_38 == 0)) {
    local_28 = 0;
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    local_80 = param_1;
    local_78 = param_2;
    local_70 = param_3;
    local_68 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_convertRect_toView__0269ded8,local_38);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    dVar7 = 1.7976931348623157e+308;
    local_98 = 1.7976931348623157e+308;
    local_a0 = 0;
    lVar4 = local_38;
    local_60 = param_1;
    uStack_58 = param_2;
    local_50 = param_3;
    dStack_48 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_arrayWithArray__0269eab8);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    while (puVar5 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0),
          uVar2 = local_a0, puVar5 != (undefined *)0x0) {
      puVar5 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_removeObjectAtIndex__0269d530,0);
      puVar5 = local_b0;
      puVar6 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
      puVar6 = local_b0;
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
        puVar5 = local_a8;
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObjectsFromArray__0269d540);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        local_3c = 0;
      }
      else {
        if (local_b0 != local_30) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = puVar6;
          bVar1 = false;
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isHidden_026ca768);
          bVar3 = false;
          if (((ulong)puVar6 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_alpha_026ca4d8);
            bVar3 = false;
            param_3 = DAT_02323d38;
            if (DAT_02323d38 < dVar7) {
              local_c0 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_indexPathForCell__0269e208,local_b8);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              bVar3 = local_c0 != 0;
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_c0);
          }
          puVar5 = local_b8;
          if (bVar3) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_convertRect_toView__0269ded8,local_38);
            _CGRectGetMinY(dVar7,param_3,param_2,param_1);
            dVar8 = local_60;
            param_1 = dStack_48;
            _CGRectGetMaxY(local_60,uStack_58,local_50);
            param_2 = 0x3fe0000000000000;
            param_3 = dVar8 - 0.5;
            if ((dVar8 - 0.5 <= dVar7) && (param_3 = local_98, dVar7 < local_98)) {
              local_98 = dVar7;
              _objc_storeStrong(&local_a0,local_b8);
            }
          }
          _objc_storeStrong(&local_b8,0);
        }
        local_3c = 2;
      }
      _objc_storeStrong(&local_b0,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
    local_3c = 1;
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

