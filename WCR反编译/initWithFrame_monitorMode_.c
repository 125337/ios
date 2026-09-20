// initWithFrame:monitorMode: @ 00900cb8

/* Function Stack Size: 0x38 bytes */

ID LogFloatingBall::initWithFrame_monitorMode_
             (ID param_1,SEL param_2,CGRect param_3,long_long param_4)

{
  ID *pIVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ID *local_78;
  undefined *local_70;
  ID local_68;
  undefined *local_60;
  double local_58;
  SEL local_50;
  ID *local_48 [5];
  
  local_58 = param_3.field0_0x0.field0_0x0;
  local_48[0] = (ID *)0x0;
  pIVar1 = &local_68;
  local_60 = PTR_LogFloatingBall_026cf8f8;
  local_68 = param_1;
  local_50 = param_2;
  _objc_msgSendSuper2(in_d0,in_d1,in_d2,in_d3,pIVar1,PTR_s_initWithFrame__026ca6e8,local_58,
                      param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                      param_3.field1_0x10.field1_0x8);
  local_48[0] = pIVar1;
  _objc_storeStrong(local_48);
  if (local_48[0] != (ID *)0x0) {
    *(double *)((long)local_48[0] + (long)_monitorMode) = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_attachToActiveSceneIfNeeded_026a9ef0);
    FUN_00901090();
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setWindowLevel__026caae8);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setOpaque__026ca9f8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setHidden__026ca970,1);
    puVar2 = PTR_WCRLogFloatingHostViewController_026cea50;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48[0],PTR_s_setRootViewController__026caa20,local_70);
    *(undefined8 *)((long)local_48[0] + (long)_currentState) = 0;
    *(undefined1 *)((long)local_48[0] + (long)_isPaused) = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setupBallView_026a9ef8);
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setupExpandedView_026a9f00);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    pIVar1 = local_48[0];
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_009010a8;
    local_80 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = pIVar1;
    _dispatch_async(puVar2,&local_98);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  pIVar1 = local_48[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_48,0);
  return (ID)pIVar1;
}

