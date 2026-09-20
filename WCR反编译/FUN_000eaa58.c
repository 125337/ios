// FUN_000eaa58 @ 000eaa58

void FUN_000eaa58(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  cfstringStruct *local_328;
  cfstringStruct *local_2b8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined1 local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_5);
  pcVar5 = local_28;
  puVar4 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
  pcVar6 = local_28;
  if (((ulong)pcVar5 & 1) == 0) {
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    pcVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    local_61 = false;
    bVar2 = local_48 == (cfstringStruct *)0x0;
    if (bVar2) {
      local_2b8 = &cf_nil;
    }
    else {
      local_2b8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_2b8;
    }
    local_61 = !bVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_2b8;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    pcVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_MMTitleView);
    if (((ulong)pcVar5 & 1) == 0) {
      local_38 = 1;
    }
    else {
      pcVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewWithTag__026cabe0,0x65);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_38 = 1;
      }
      else {
        FUN_000eb5a8();
        if (((ulong)pcVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setClipsToBounds__026ca8c8,0);
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setClipsToBounds__026ca8c8,0);
          pcVar5 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          local_78 = pcVar5;
          while( true ) {
            pcVar5 = local_78;
            local_81 = 0;
            bVar2 = false;
            uVar1 = local_78 != (cfstringStruct *)0x0;
            if ((bool)uVar1) {
              pcVar6 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
              _objc_retainAutoreleasedReturnValue();
              bVar2 = pcVar5 != pcVar6;
              local_81 = uVar1;
              local_80 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar6);
              uVar1 = local_81;
            }
            local_81 = uVar1;
            if (!bVar2) break;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setClipsToBounds__026ca8c8,0);
            pcVar6 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_78;
            local_78 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
          }
          local_38 = 2;
          _objc_storeStrong(&local_78,0);
          pcVar5 = local_28;
          _objc_getAssociatedObject(local_28,&DAT_028c83a2);
          _objc_retainAutoreleasedReturnValue();
          local_90 = pcVar5;
          FUN_000e8290();
          _objc_retainAutoreleasedReturnValue();
          if (local_50 == (cfstringStruct *)0x0) {
            local_328 = local_48;
          }
          else {
            local_328 = local_50;
          }
          local_98 = pcVar5;
          (*(code *)PTR__objc_retain_02578638)();
          pcVar5 = local_70;
          local_a0 = local_328;
          if ((local_98 != (cfstringStruct *)0x0) && (local_328 != (cfstringStruct *)0x0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_convertRect_toView__0269ded8,local_a0);
            pcVar5 = local_98;
            dVar7 = param_4;
            uVar8 = param_3;
            uVar9 = param_2;
            dVar10 = param_1;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_convertRect_toView__0269ded8,local_a0);
            uVar3 = (uint)pcVar5;
            _CGRectIsEmpty(param_1,param_2,param_3,param_4);
            if (((uVar3 & 1) == 0) &&
               ((_CGRectIsEmpty(dVar7,uVar8,uVar9,dVar10), (uVar3 & 1) == 0 &&
                (_CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar7,uVar8,uVar9,dVar10),
                (uVar3 & 1) != 0)))) {
              _CGRectGetMaxX(param_1,param_2,param_3,param_4);
              _CGRectGetMinX(dVar7,uVar8);
              param_1 = param_1 - dVar7;
              uVar8 = 0x3fe0000000000000;
              if (0.5 < param_1) {
                dVar7 = param_1;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_frame_026ca640);
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar7 - (param_1 + 4.0),uVar8,uVar9,dVar10,local_70,
                           PTR_s_setFrame__026ca960);
              }
            }
          }
          pcVar5 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          _objc_storeStrong(&local_a0);
          _objc_storeStrong(&local_98,0);
          _objc_storeStrong(&local_90,0);
          local_38 = 0;
        }
        else {
          local_38 = 1;
        }
      }
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

