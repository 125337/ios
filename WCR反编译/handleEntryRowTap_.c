// handleEntryRowTap: @ 01e81d78

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoCardView::handleEntryRowTap_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_5c;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (uVar2 == 3) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_getAssociatedObject();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_38;
    puVar4 = PTR_WCRefineToDoEntry_026cf6a8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineToDoEntry_026cf6a8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar2 & 1) == 0) {
      local_2c = 1;
    }
    else {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_backend_026c7148);
      IVar1 = local_18;
      uVar2 = local_38;
      if (uVar3 == 1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_done_026a1598);
        local_5c = 1;
        if ((uVar2 & 1) == 0) {
          puVar4 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_5c = (uint)puVar5 ^ 1;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        IVar1 = local_18;
        uVar2 = local_38;
        if ((local_5c & 1) == 0) {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_presentOfficialCompleteConfirmFo_026c7160,uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        else {
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_completeEntry_row__026c7158,uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_2c = 1;
      }
      else {
        uVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_completeEntry_row__026c7158,uVar2);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        local_2c = 0;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

