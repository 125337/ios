// FUN_0074c890 @ 0074c890

void FUN_0074c890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_38;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  local_48 = uVar1;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_30;
  local_60[0] = uVar2;
  FUN_0074d000(local_30,&cf_m_n64MesSvrID);
  lVar4 = local_30;
  FUN_00748ad4(local_30,&cf_m_uiMesLocalID);
  FUN_00748ad4(local_30,&cf_m_uiCreateTime);
  FUN_00748ad4(local_30,&cf_m_uiMessageType);
  if ((lVar3 == 0) && ((int)lVar4 == 0)) {
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf________p__u__u);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar5;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf________lld__u__u__u);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar5;
  }
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

