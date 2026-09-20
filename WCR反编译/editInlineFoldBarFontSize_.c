// editInlineFoldBarFontSize: @ 01ac763c

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineGroupManagementViewController::editInlineFoldBarFontSize_
          (WCRefineGroupManagementViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  double in_d0;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  double local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_homeGroupingInlineFoldBarFontSiz_026be008);
  if ((in_d0 < 10.0) || (local_38 = in_d0, 22.0 < in_d0)) {
    local_38 = 14.0;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01ac77d4;
  local_48 = &DAT_025872d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = IVar1;
  FUN_01a9f3b0(&cf__nmbSagW_S,&cf_1,puVar2,&local_60);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

