// sendClonedVoiceForText:toChatName:completion: @ 015a8470

/* Function Stack Size: 0x28 bytes */

void WCRefineVoiceCloneHelper::sendClonedVoiceForText_toChatName_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  ID IVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined **local_90;
  ID local_88;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  uVar1 = local_48;
  ppuVar3 = &local_78;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_015a8738;
  local_60 = &DAT_02582318;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar1;
  _objc_retainBlock();
  puVar4 = PTR_WCRefineConfig_026cdf58;
  local_50 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    (*(code *)local_50[2])(local_50,0,&cf_KQ_g);
    local_7c = 1;
  }
  else {
    lVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    IVar2 = local_28;
    uVar1 = local_38;
    ppuVar3 = local_50;
    if (lVar6 == 0) {
      (*(code *)local_50[2])(local_50,0,&cf_ONX__W);
      local_7c = 1;
    }
    else {
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_015a88d4;
      local_a0 = &DAT_02582558;
      (*(code *)PTR__objc_retain_02578638)();
      lVar6 = local_40;
      local_90 = ppuVar3;
      local_88 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_synthesizeText_completion__026b0b98,uVar1,&local_b8);
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
      local_7c = 0;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

