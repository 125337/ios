// picker:didFinishPicking: @ 01f26864

/* Function Stack Size: 0x20 bytes */

void WCRefineTouchTrailViewController::picker_didFinishPicking_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_itemProvider_026b3100);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_canLoadObjectOfClass__026b3108,puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_itemProvider_026b3100);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      IVar1 = local_18;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_01f26ac0;
      local_50 = &DAT_02589438;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_loadObjectOfClass_completionHand_026b3118,puVar3,&local_68);
      _objc_unsafeClaimAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

