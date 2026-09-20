// wcr_tapGroupFriends: @ 01da9090

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsBoardView::wcr_tapGroupFriends_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  undefined *puVar6;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  IVar5 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onOpenGroupFriends_026c4ff8);
  _objc_retainAutoreleasedReturnValue();
  bVar2 = false;
  if (IVar5 != 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    bVar2 = uVar3 != 0;
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  if (bVar2) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onOpenGroupFriends_026c4ff8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(IVar5 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    local_34 = 1;
  }
  else {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_getAssociatedObject();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntegerValue_026cabb8);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_unsignedIntegerValue_026cabb8);
    }
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__g__YS);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

