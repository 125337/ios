// sendLinkCardForResult:toUsr:completion: @ 01007378

/* Function Stack Size: 0x28 bytes */

void WCRefineLinkMediaSender::sendLinkCardForResult_toUsr_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined **ppuVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_138;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  undefined **local_e8;
  uint local_dc;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined8 local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  undefined **local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_resolvedLinkCardFieldsForResult__026ad9b0,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_50;
  local_58 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_50;
  local_60 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_desc);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_50;
  local_68 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_cover);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_70 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selfHeadImageURL_026ad9b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_70;
  local_78 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    if (local_78 == (cfstringStruct *)0x0) {
      local_138 = &::cf___;
    }
    else {
      local_138 = local_78;
    }
    _objc_storeStrong(&local_70,local_138);
  }
  pcVar3 = local_78;
  ppuVar5 = &local_d8;
  local_d8 = PTR___NSConcreteStackBlock_02578660;
  local_d0 = 0xc2000000;
  local_cc = 0;
  local_c8 = FUN_0100784c;
  local_c0 = &DAT_02584130;
  local_88 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_40;
  local_b8 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar3 = local_58;
  local_b0 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar4 = local_60;
  local_a8 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar3 = local_68;
  local_a0 = pcVar4;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_48;
  local_98 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = uVar2;
  _objc_retainBlock();
  pcVar6 = local_70;
  local_80 = ppuVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  pcVar4 = local_28;
  pcVar3 = local_70;
  ppuVar5 = local_80;
  if (pcVar6 != (cfstringStruct *)0x0) {
    local_110 = PTR___NSConcreteStackBlock_02578660;
    local_108 = 0xc2000000;
    local_104 = 0;
    local_100 = FUN_01007b2c;
    local_f8 = &DAT_02584160;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = local_70;
    local_e8 = ppuVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_downloadLinkCardCover_completion_026ad9d0,pcVar3,&local_110);
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
  }
  else {
    (*(code *)local_80[2])(local_80,0);
  }
  local_dc = (uint)(pcVar6 == (cfstringStruct *)0x0);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

