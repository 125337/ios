// showTQQOnlineIconRadiusSettings: @ 01c60b18

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineNavigationAvatarViewController::showTQQOnlineIconRadiusSettings_
          (WCRefineNavigationAvatarViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 in_x7;
  double in_d0;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tqqOnlineIconRadius_026c2018);
  in_d0 = in_d0 * 100.0;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01c60c98;
  local_38 = &DAT_025872d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_30[0] = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_showInputAlertWithTitle_message__026c24d8,&cf_h__W,&cf_eQWz_,puVar3,
             &cf_eQ_vRk,&local_50,in_x7,in_d0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

