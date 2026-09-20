// FUN_01f68128 @ 01f68128

void FUN_01f68128(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  dispatch_time_t dVar5;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_49;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_3;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_40 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_voiceKeepKeyboardEnabled_026bd520);
  local_49 = SUB81(puVar1,0);
  if (((ulong)puVar1 & 1) != 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_anyObject_026a4b10);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_locationInView__026ca798,local_28);
    lVar3 = local_28;
    local_68 = param_1;
    local_60 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,local_28,PTR_s_indexPathForRowAtPoint__026a13a8);
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar3;
    if (lVar3 == 0) {
      DAT_028e48e0 = 0;
    }
    else {
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cellForRowAtIndexPath__0269fd40,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_WCRefineVoiceKeepKeyboard_026cf7b0;
      local_78 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoiceKeepKeyboard_026cf7b0,PTR_s_isVoiceMessageCell__026c9770,lVar4);
      if (((ulong)puVar1 & 1) == 0) {
        DAT_028e48e0 = 0;
      }
      else {
        DAT_028e48e0 = 1;
        dVar5 = _dispatch_time(0,500000000);
        puVar1 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_after(dVar5,puVar1,&PTR___NSConcreteGlobalBlock_0258ce80);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_58,0);
  }
  (**(code **)(param_3 + 0x20))
            (local_20,PTR_s_mmTableView_touchesBegan_withEve_026c9768,local_28,local_30,local_38);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

