// fetchLastCharForUser:groupUserName:completion: @ 00eaabe8

/* Function Stack Size: 0x28 bytes */

void WCRefineAuthNameHelper::fetchLastCharForUser_groupUserName_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  dispatch_time_t dVar10;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  long local_158;
  undefined *local_150 [3];
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  long local_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *local_100;
  undefined *local_f8;
  char *local_f0;
  char *local_e8;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  ID local_a0;
  ID local_98;
  undefined4 local_90;
  byte local_89;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined **local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
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
  lVar1 = local_38;
  FUN_00eaa404();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_40;
  local_50 = lVar1;
  FUN_00eaa404();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_48;
  ppuVar3 = &local_88;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_00eab654;
  local_70 = &DAT_02581a60;
  local_58 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = lVar1;
  _objc_retainBlock();
  uVar2 = local_58;
  local_60 = ppuVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  local_89 = (byte)uVar2;
  lVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)local_60[2])(local_60,&::cf___);
    local_90 = 1;
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cachedLastCharForUser__026ab140,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_98 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
    if (IVar4 == 0) {
      puVar5 = PTR_WCRefineFriendRelationChecker_026ceb00;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFriendRelationChecker_026ceb00,PTR_s_shouldExcludeUserName__026ab148,
                 local_50);
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSThread_026ce0a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
        puVar5 = PTR___dispatch_main_q_02578680;
        if (((ulong)puVar6 & 1) == 0) {
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = local_50;
          local_d8 = PTR___NSConcreteStackBlock_02578660;
          local_d0 = 0xc2000000;
          local_cc = 0;
          local_c8 = FUN_00eab878;
          local_c0 = &DAT_0257a710;
          local_a0 = local_28;
          (*(code *)PTR__objc_retain_02578638)();
          uVar2 = local_58;
          local_b8 = lVar1;
          (*(code *)PTR__objc_retain_02578638)();
          lVar1 = local_48;
          local_b0 = uVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_a8 = lVar1;
          _dispatch_async(puVar5,&local_d8);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_90 = 1;
          _objc_storeStrong(&local_a8);
          _objc_storeStrong(&local_b0,0);
          _objc_storeStrong(&local_b8,0);
        }
        else {
          FUN_00eab8c8();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          uVar7 = (ulong)puVar5 & 0xffffffff;
          if (((ulong)puVar5 & 1) == 0) {
            FUN_00eab93c();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_e0 = uVar8;
            (*(code *)PTR__objc_release_02578630)(uVar7);
            uVar7 = local_e0;
            if (local_e0 == 0) {
              pcVar9 = "WCPayBeforeTransferCgi";
              _objc_getClass();
              local_e8 = pcVar9;
              if (pcVar9 == (char *)0x0) {
                (*(code *)local_60[2])(local_60,&::cf___);
                local_90 = 1;
              }
              else {
                _objc_alloc_init();
                local_f8 = PTR_s_setGroupUsername__026ab158;
                local_f0 = pcVar9;
                if ((((pcVar9 == (char *)0x0) ||
                     ((*(code *)PTR__objc_msgSend_02578628)
                                (pcVar9,PTR_s_respondsToSelector__026ca818,
                                 PTR_s_setUsername__026a2510), ((ulong)pcVar9 & 1) == 0)) ||
                    (pcVar9 = local_f0,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f0,PTR_s_respondsToSelector__026ca818,
                               PTR_s_setDelegate__026ca910), ((ulong)pcVar9 & 1) == 0)) ||
                   ((pcVar9 = local_f0,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f0,PTR_s_respondsToSelector__026ca818,
                               PTR_s_startRequest_026ab160), ((ulong)pcVar9 & 1) == 0 ||
                    (((local_89 & 1) != 0 &&
                     (pcVar9 = local_f0,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_f0,PTR_s_respondsToSelector__026ca818,local_f8),
                     ((ulong)pcVar9 & 1) == 0)))))) {
                  (*(code *)local_60[2])(local_60,&::cf___);
                  local_90 = 1;
                }
                else {
                  puVar5 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar5;
                  FUN_00eab93c();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  (*(code *)PTR__objc_release_02578630)();
                  if (local_48 != 0) {
                    FUN_00eab93c();
                    _objc_retainAutoreleasedReturnValue();
                    puVar6 = puVar5;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    lVar1 = local_48;
                    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
                    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
                    (*(code *)PTR__objc_release_02578630)(lVar1);
                    (*(code *)PTR__objc_release_02578630)(puVar6);
                    (*(code *)PTR__objc_release_02578630)(puVar5);
                  }
                  puVar5 = PTR_WCRPayMaskCgiBridge_026ceb08;
                  _objc_alloc_init();
                  local_100 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setCgi__026ab168,local_f0);
                  _objc_initWeak(auStack_108,local_100);
                  lVar1 = local_50;
                  local_138 = PTR___NSConcreteStackBlock_02578660;
                  local_130 = 0xc2000000;
                  local_12c = 0;
                  local_128 = FUN_00eab9b0;
                  local_120 = &DAT_02581a90;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_118 = lVar1;
                  _objc_copyWeak(auStack_110,auStack_108);
                  puVar5 = local_100;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_100,PTR_s_setHandler__0269fb20,&local_138);
                  FUN_00eac5dc();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f0,PTR_s_setUsername__026a2510,local_50);
                  if ((local_89 & 1) != 0) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_f8,local_58);
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f0,PTR_s_setDelegate__026ca910,local_100);
                  dVar10 = _dispatch_time(0,12000000000);
                  puVar5 = PTR___dispatch_main_q_02578680;
                  _objc_retainAutoreleaseReturnValue();
                  _objc_retainAutoreleasedReturnValue();
                  lVar1 = local_50;
                  local_178 = PTR___NSConcreteStackBlock_02578660;
                  local_170 = 0xc2000000;
                  local_16c = 0;
                  local_168 = FUN_00eac650;
                  local_160 = &DAT_0257a7a0;
                  (*(code *)PTR__objc_retain_02578638)();
                  puVar6 = local_100;
                  local_158 = lVar1;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_150[0] = puVar6;
                  _dispatch_after(dVar10,puVar5,&local_178);
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_startRequest_026ab160);
                  _objc_storeStrong(local_150);
                  _objc_storeStrong(&local_158,0);
                  _objc_destroyWeak(auStack_110);
                  _objc_storeStrong(&local_118,0);
                  _objc_destroyWeak(auStack_108);
                  _objc_storeStrong(&local_100,0);
                  local_90 = 0;
                }
                _objc_storeStrong(&local_f0,0);
              }
            }
            else {
              if (local_48 != 0) {
                lVar1 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(lVar1);
              }
              local_90 = 1;
            }
            _objc_storeStrong(&local_e0,0);
          }
          else {
            (*(code *)local_60[2])(local_60,&::cf___);
            local_90 = 1;
          }
        }
      }
      else {
        (*(code *)local_60[2])(local_60,&::cf___);
        local_90 = 1;
      }
    }
    else {
      (*(code *)local_60[2])(local_60,local_98);
      local_90 = 1;
    }
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

