// hideCachedWebSnapshotAnimated: @ 01e8ae30

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoCardView::hideCachedWebSnapshotAnimated_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webSnapshotImageView_026c6ec0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_30 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  if ((IVar2 & 1) == 0) {
    if ((local_21 & 1) == 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webSnapshotImageView_026c6ec0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webSnapshotImageView_026c6ec0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      local_50 = PTR___NSConcreteStackBlock_02578660;
      local_48 = 0xc2000000;
      local_44 = 0;
      local_40 = FUN_01e8b074;
      local_38 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      IVar2 = local_18;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_01e8b0e8;
      local_60 = &DAT_02579d00;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323cc0,puVar1,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_50,
                 &local_78);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

