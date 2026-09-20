// startCarouselIfNeeded @ 00ff257c

/* Function Stack Size: 0x10 bytes */

void WCRKeywordAlertDanmakuBubbleView::startCarouselIfNeeded(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  code *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stopCarousel_026ad648);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_contentPages_026ad660);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  local_28 = local_18;
  if (1 < IVar2) {
    local_50 = 0;
    local_40 = 0x32000000;
    local_3c = 0x30;
    local_38 = FUN_00ff2768;
    local_30 = FUN_00ff27bc;
    local_48 = &local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00ff27e8;
    local_60 = &DAT_02583f30;
    puVar3 = PTR__OBJC_CLASS___NSTimer_026ce210;
    local_58 = &local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4003333333333333,PTR__OBJC_CLASS___NSTimer_026ce210,
               PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1,&local_78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCarouselTimer__026ad658);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    __Block_object_dispose(&local_50,8);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

