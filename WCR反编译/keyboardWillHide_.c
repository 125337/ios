// keyboardWillHide: @ 01d5c5fc

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenshotFrameEditorViewController::keyboardWillHide_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar6 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setKeyboardBottomInset__026c4968);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar4);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  lVar3 = local_28;
  local_30 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar4);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  IVar2 = local_18;
  uVar6 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01d5c850;
  local_50 = &DAT_0257a800;
  local_40 = lVar5 << 0x10;
  local_38 = lVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,0,puVar1,PTR_s_animateWithDuration_delay_option_026ca4f0,lVar5 << 0x10,&local_68,
             0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_28,0);
  return;
}

