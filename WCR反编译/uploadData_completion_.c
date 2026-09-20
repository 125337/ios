// uploadData:completion: @ 00f05fac

/* Function Stack Size: 0x20 bytes */

void WCRefineCloudBackupService::uploadData_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  ID local_a8;
  undefined8 local_a0;
  ID local_98;
  ID local_90;
  ID local_88;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  ID local_50;
  ID local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedProvider_026aba30);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isEqualToString__0269ccc8,&cf_http);
  IVar6 = local_28;
  uVar2 = local_38;
  uVar1 = local_40;
  if ((IVar5 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_versionedRemotePath_026abb88);
    _objc_retainAutoreleasedReturnValue();
    IVar7 = local_28;
    local_88 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedRemotePath_026abb08);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    uVar2 = local_38;
    uVar1 = local_40;
    IVar5 = local_88;
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_00f06374;
    local_b8 = &DAT_025823d8;
    local_98 = local_28;
    local_90 = IVar7;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_38;
    local_a0 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    IVar6 = local_90;
    local_b0 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_putData_remotePath_completion__026abb80,uVar2,IVar5,&local_d0);
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    local_7c = 0;
  }
  else {
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00f062b4;
    local_60 = &DAT_02582378;
    local_50 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_putData_remotePath_completion__026abb80,uVar2,0,&local_78);
    local_7c = 1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

