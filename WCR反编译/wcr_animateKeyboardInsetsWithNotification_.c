// wcr_animateKeyboardInsetsWithNotification: @ 019663e8

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineFileManagerPreviewViewController::wcr_animateKeyboardInsetsWithNotification_
          (WCRefineFileManagerPreviewViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 in_d0;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  ulong local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar5);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  lVar4 = local_28;
  local_30 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar5);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  local_40 = lVar6 << 0x10 | 4;
  local_38 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateEditorChromeInsets_026b9e30);
  IVar3 = local_18;
  uVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01966638;
  local_50 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,0,puVar1,PTR_s_animateWithDuration_delay_option_026ca4f0,uVar2,&local_68,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_28,0);
  return;
}

