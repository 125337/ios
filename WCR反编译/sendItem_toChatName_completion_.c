// sendItem:toChatName:completion: @ 015aabc4

/* Function Stack Size: 0x28 bytes */

void WCRefineVoicePackSender::sendItem_toChatName_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  dispatch_queue_t pdVar7;
  undefined *local_160;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined **local_d8;
  ID local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  bool local_99;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined **local_60;
  undefined4 local_58;
  byte local_51;
  undefined *local_50;
  long local_48;
  long local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_51 = 0;
  bVar1 = true;
  if (local_38 != (undefined *)0x0) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDirectory_026b0ba0);
    bVar1 = true;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_absolutePath_026ae300);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = true;
      if (puVar2 != (undefined *)0x0) {
        lVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        bVar1 = lVar3 == 0;
      }
    }
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  lVar3 = local_48;
  if (bVar1) {
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x10))(local_48,0,&cf_eHe);
    }
    local_58 = 1;
  }
  else {
    ppuVar4 = &local_88;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_015ab2e0;
    local_70 = &DAT_02582318;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar3;
    _objc_retainBlock();
    puVar2 = local_38;
    local_60 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repositoryCode_026b0ba8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_99 = false;
    if (puVar5 == (undefined *)0x0) {
      local_160 = (undefined *)0x0;
    }
    else {
      local_160 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_repositoryCode_026b0ba8);
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_160;
    }
    local_99 = puVar5 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_160;
    if ((local_99 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineVoicePackStore_026cea20;
    if (local_90 == (undefined *)0x0) {
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_relativePath_026ac370);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_bindingForRelativePath__026b0bb0);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar2 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      puVar6 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar6 & 1) != 0) {
        puVar5 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_90;
        local_90 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendOrder);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSendOrder__026b0bb8,puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      _objc_storeStrong(&local_a8,0);
    }
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sendOrder_026b0bc0);
    puVar5 = local_38;
    local_b0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_absolutePath_026ae300);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar5;
    FUN_015ab47c();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar5;
    pdVar7 = _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_b8;
    local_118 = PTR___NSConcreteStackBlock_02578660;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = FUN_015ab6ac;
    local_100 = &DAT_02586fb8;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar4 = local_60;
    local_f8 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    lVar3 = local_40;
    local_d8 = ppuVar4;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_c0;
    local_f0 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_90;
    local_e8 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = puVar5;
    local_d0 = local_28;
    local_c8 = local_b0;
    _dispatch_async(pdVar7,&local_118);
    (*(code *)PTR__objc_release_02578630)(pdVar7);
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_68,0);
    local_58 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

