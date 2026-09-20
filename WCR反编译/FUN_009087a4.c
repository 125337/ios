// FUN_009087a4 @ 009087a4

void FUN_009087a4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  long local_30;
  long local_28;
  
  local_30 = param_2;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_attachToActiveSceneIfNeeded_026a9ef0);
  lVar2 = *(long *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_currentState_026a9fe0);
  if (lVar2 + -1 == 0) {
    FUN_009057a8();
    local_c8 = param_1;
  }
  else {
    FUN_00901090(lVar2 + -1);
    local_c8 = param_1;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,*(undefined8 *)(param_2 + 0x20),PTR_s_setWindowLevel__026caae8);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_2 + 0x20),PTR_s_setHidden__026ca970,0)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_2 + 0x20),PTR_s_startUpdateTimer_026aa0b8);
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_2 + 0x20),PTR_s_updateLogs_026aa030);
  _CGAffineTransformMakeScale(0x3fd3333333333333);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  _memcpy(auStack_90,auStack_60,0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTransform__026caad0,auStack_90);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_ballView_026a9f28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_00908a3c;
  local_a0 = &DAT_0257a800;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_98 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3fe0000000000000,0,0x3fe3333333333333,puVar1,
             PTR_s_animateWithDuration_delay_usingS_026ca4f8,0x20000,&local_b8);
  _objc_storeStrong(&local_98,0);
  return;
}

