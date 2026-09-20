// saveSelectedImage:type:isDark: @ 016dbf98

/* Function Stack Size: 0x24 bytes */

void RepeatEnhanceViewController::saveSelectedImage_type_isDark_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_f0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  long local_90;
  undefined8 local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  byte local_41;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  if ((local_38 == 0) ||
     (lVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_48 = 1;
  }
  else {
    uVar3 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_stringByAppendingPathComponent__026cab30,&cf_YVh);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    local_60 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_f0 = &::cf__;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_f0;
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    uVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_stringByAppendingPathComponent__026cab30,local_68);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_70 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_78 = &cf_Dark;
    if ((local_41 & 1) == 0) {
      local_78 = &cf_Light;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______png);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_70;
    local_80 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_stringByAppendingPathComponent__026cab30,puVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    local_88 = uVar4;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    local_90 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_writeToFile_atomically__0269f928,local_88,1);
    puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar7 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_28;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_016dc4bc;
    local_a0 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = IVar1;
    _dispatch_async(puVar7,&local_b8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

