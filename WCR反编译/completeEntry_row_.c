// completeEntry:row: @ 01e824cc

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoCardView::completeEntry_row_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  long local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if ((local_38 == 0) || (local_40 == 0)) {
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineToDoStore_026cf6a0,PTR_s_toggleDoneForEntry__026c71a0,local_38);
    puVar4 = PTR__OBJC_CLASS___UISelectionFeedbackGenerator_026ce280;
    _objc_alloc_init();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar2 = local_40;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    puVar4 = PTR___NSConcreteStackBlock_02578660;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01e82708;
    local_58 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    IVar3 = local_28;
    local_50 = lVar2;
    local_a0 = puVar4;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_01e8274c;
    local_88 = &DAT_02583fe0;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_40;
    local_80 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c70,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_70,
               &local_a0);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

