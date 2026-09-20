// FUN_005d1c90 @ 005d1c90

void FUN_005d1c90(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  byte local_5b;
  byte local_5a;
  byte local_59;
  undefined1 *local_58;
  undefined4 local_4c;
  undefined *local_48;
  undefined *local_40 [3];
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  FUN_005d2520(local_28,&DAT_028cb784);
  FUN_005d2520(local_28,&DAT_028cb785);
  puVar1 = local_28;
  FUN_005d268c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_40[0] = puVar1;
  FUN_005d2a28();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  local_48 = puVar2;
  FUN_005d2b74(local_28,local_40[0]);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_005d2520(local_28,&DAT_028cb786);
    FUN_005d2520(local_28,&DAT_028cb787);
    FUN_005d2520(local_28,&DAT_028cb788);
    local_4c = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsSwipeActionsEnabled_026a5b50);
    local_59 = false;
    if (((ulong)puVar1 & 1) != 0) {
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsLeftSwipeAction_026a5b60);
      local_59 = true;
      if ((dword *)puVar3 == &MACH_HEADER.cputype) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsRightSwipeAction_026a5b68);
        local_59 = (dword *)puVar3 != &MACH_HEADER.cputype;
      }
    }
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsDoubleTapLikeEnabled_026a5178);
    local_5a = (byte)puVar3;
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsLongPressCommentEnabled_026a4fa8);
    local_5b = (byte)puVar3;
    puVar1 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cb786);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar1;
    if (((local_59 & 1) != 0) && (puVar1 == (undefined *)0x0)) {
      puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,local_28,
                 PTR_s_WCRefine_handleAlbumListPan__026a5858);
      puVar1 = local_68;
      local_68 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMaximumNumberOfTouches__026ca9c0,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMinimumNumberOfTouches__026a5b58,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDelaysTouchesBegan__026a1af0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDelaysTouchesEnded__026a1af8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDelegate__026ca910,local_28);
    }
    FUN_005d2da8(local_28,&DAT_028cb786,local_40[0],local_68,local_59 & 1);
    puVar1 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cb787);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar1;
    if (((local_5a & 1) != 0) && (puVar1 == (undefined *)0x0)) {
      puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,local_28,
                 PTR_s_WCRefine_handleAlbumListDoubleTa_026a5860);
      puVar1 = local_70;
      local_70 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setNumberOfTapsRequired__026ca9e0,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDelaysTouchesBegan__026a1af0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDelaysTouchesEnded__026a1af8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDelegate__026ca910,local_28);
    }
    if (local_70 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDelaysTouchesEnded__026a1af8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setDelegate__026ca910,local_28);
    }
    FUN_005d2da8(local_28,&DAT_028cb787,local_48,local_70,local_5a & 1);
    puVar1 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028cb788);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar1;
    if (((local_5b & 1) != 0) && (puVar1 == (undefined *)0x0)) {
      puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithTarget_action__026ca718,local_28,
                 PTR_s_WCRefine_handleAlbumListLongPres_026a5868);
      puVar1 = local_78;
      local_78 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,local_78,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setDelaysTouchesBegan__026a1af0,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setDelegate__026ca910,local_28);
    }
    if (local_78 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setCancelsTouchesInView__026ca8b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setDelegate__026ca910,local_28);
    }
    FUN_005d2da8(local_28,&DAT_028cb788,local_48,local_78,local_5b & 1);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

