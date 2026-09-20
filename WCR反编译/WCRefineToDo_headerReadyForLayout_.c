// WCRefineToDo_headerReadyForLayout: @ 007fd1e4

/* Function Stack Size: 0x18 bytes */

bool WCRefineToDoHook::WCRefineToDo_headerReadyForLayout_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ulong uVar5;
  ID IVar6;
  double in_d2;
  double in_d3;
  ID local_148;
  ulong local_98;
  byte local_89;
  ID local_88;
  byte local_79;
  ID local_78;
  ID local_70 [5];
  undefined4 local_44;
  ulong local_40;
  SEL local_38;
  ID local_30;
  bool local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_21 = false;
    local_44 = 1;
  }
  else if ((local_40 == 0) ||
          ((*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548), IVar4 = local_30,
          in_d2 <= 1.0)) {
    local_21 = false;
    local_44 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((IVar4 & 1) == 0) {
      local_148 = 0;
    }
    else {
      local_148 = local_30;
    }
    IVar4 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_70[0] = local_148;
    local_79 = 0;
    local_89 = 0;
    bVar1 = false;
    if (local_148 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_isViewLoaded_0269cde0);
      bVar1 = false;
      IVar4 = local_148;
      if ((local_148 & 1) != 0) {
        IVar4 = local_70[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        bVar1 = IVar4 == 0;
        local_88 = IVar4;
      }
    }
    if ((local_89 & 1) != 0) {
      IVar4 = local_88;
      (*(code *)PTR__objc_release_02578630)();
    }
    if ((local_79 & 1) != 0) {
      IVar4 = local_78;
      (*(code *)PTR__objc_release_02578630)();
    }
    if (bVar1) {
      local_21 = false;
      local_44 = 1;
    }
    else {
      FUN_007f8a9c();
      if (((IVar4 & 1) == 0) && (FUN_007f7ae4(), (IVar4 & 1) == 0)) {
        uVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tableHeaderView_0269ea08);
        _objc_retainAutoreleasedReturnValue();
        local_98 = uVar5;
        if (uVar5 == 0) {
          local_21 = false;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_bounds_026ca548);
          if ((1.0 < in_d3) ||
             ((*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_frame_026ca640), 1.0 < in_d3)) {
            IVar4 = local_30;
            _objc_getAssociatedObject(local_30,&DAT_028ccee3);
            _objc_retainAutoreleasedReturnValue();
            IVar6 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar4);
            if ((IVar6 & 1) == 0) {
              uVar5 = local_98;
              FUN_007fd7c4();
              bVar1 = true;
              if ((uVar5 & 1) == 0) {
                uVar5 = local_98;
                FUN_007fd9d0();
                _objc_retainAutoreleasedReturnValue();
                bVar1 = uVar5 != 0;
                (*(code *)PTR__objc_release_02578630)(uVar5);
              }
              if (bVar1) {
                local_21 = true;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_frame_026ca640);
                local_21 = true;
                if (in_d2 <= 1.0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_bounds_026ca548);
                  local_21 = 1.0 < in_d2;
                }
              }
            }
            else {
              local_21 = true;
            }
          }
          else {
            local_21 = false;
          }
        }
        local_44 = 1;
        _objc_storeStrong(&local_98,0);
      }
      else {
        local_21 = true;
        local_44 = 1;
      }
    }
    _objc_storeStrong(local_70,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

