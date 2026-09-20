// convertVideoAtPath:chatVC: @ 00f45c14

/* Function Stack Size: 0x20 bytes */

void WCRefineEmoticonToolsHelper::convertVideoAtPath_chatVC_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  ID local_40;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isReadableVideoAtPath__026ac1e0,local_28);
  bVar1 = (IVar3 & 1) != 0;
  if (bVar1) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    _NSLog(&cf__wcr__emoticon_videoconvertbeginpath___);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    FUN_00f45ee8(&cf_ck_WYt_);
    IVar3 = local_18;
    uVar2 = local_28;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_00f45fe0;
    local_58 = &DAT_02582dc8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_30;
    local_50 = uVar2;
    local_40 = local_18;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x403e000000000000,IVar3,PTR_s_trimVideoAtPath_maxSeconds_compl_026ac2e8,uVar2,
               &local_70);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
  }
  else {
    FUN_00f45dec(&cf_eN__gN__b);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

