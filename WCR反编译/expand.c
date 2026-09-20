// expand @ 009054a8

/* Function Stack Size: 0x10 bytes */

void LogFloatingBall::expand(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  SEL local_30;
  ID local_28;
  
  uVar1 = DAT_02323d00;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCurrentState__026aa028,1);
  FUN_009057a8();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setWindowLevel__026caae8);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expandedView_026a9f60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _CGAffineTransformMakeScale(uVar1);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expandedView_026a9f60);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_90,auStack_60,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setTransform__026caad0,auStack_90);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_expandedView_026a9f60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_28;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_009057c0;
  local_a0 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_28;
  local_98 = IVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fd3333333333333,0,uVar1,puVar2,PTR_s_animateWithDuration_delay_usingS_026ca4f8,
             0x20000,&local_b8);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_98,0);
  return;
}

