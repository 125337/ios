// FUN_009cd24c @ 009cd24c

void FUN_009cd24c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_110;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  bool local_69;
  undefined *local_68;
  undefined *local_60;
  long local_58;
  int local_4c;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_finished_026a15b0);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setFinished__026a15b8,1);
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_statusCode_026a1578);
    lVar4 = local_30;
    local_58 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_69 = false;
    if (lVar4 == 0) {
      local_110 = (undefined *)0x0;
    }
    else {
      local_110 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_30,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_110;
    }
    local_69 = lVar4 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_110;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    puVar5 = local_60;
    FUN_009c6c6c();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar5;
    if ((((local_40 == 0) && (199 < local_58)) && (local_58 < 300)) &&
       ((*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0),
       puVar5 == (undefined *)0x0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_providerID_0269d480);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      FUN_009cd8a0();
      _objc_retainAutoreleasedReturnValue();
      local_c0 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_009ce57c;
      local_d8 = &DAT_0257ca68;
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_retain_02578638)();
      uVar6 = local_c0;
      local_c8 = uVar7;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = uVar6;
      _dispatch_async(puVar5,&local_f0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
      local_4c = 0;
    }
    else {
      puVar5 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_009cd714;
      local_a0 = &DAT_0257a710;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_retain_02578638)();
      lVar3 = local_40;
      local_88 = uVar6;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_78;
      local_98 = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = puVar1;
      local_80 = local_58;
      _dispatch_async(puVar5,&local_b8);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_4c = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
    if (local_4c == 0) {
      local_4c = 0;
    }
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

