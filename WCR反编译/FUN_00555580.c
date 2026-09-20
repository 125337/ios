// FUN_00555580 @ 00555580

void FUN_00555580(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_1c0;
  ulong local_1a0;
  ulong local_188;
  ulong local_168;
  ulong local_120;
  ulong local_100;
  undefined *local_b0;
  undefined *local_a8;
  ulong local_a0;
  ulong local_98;
  byte local_89;
  ulong local_88;
  ulong local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  byte local_45;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
    goto LAB_00555de4;
  }
  if ((DAT_028cb368 & 1) != 0) {
    local_2c = 1;
    goto LAB_00555de4;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsFakeEngagementEnabled_026a4f80);
  if (((ulong)puVar2 & 1) == 0) {
    local_2c = 1;
  }
  else {
    uVar3 = local_28;
    FUN_00555f08();
    if ((uVar3 & 1) == 0) {
      uVar3 = local_28;
      FUN_0054ac0c();
      local_45 = (byte)uVar3;
      local_50 = 0xffffffffffffffff;
      local_58 = 0xffffffffffffffff;
      uVar3 = local_28;
      FUN_005560bc(local_28,&local_50,&local_58);
      local_59 = (undefined1)uVar3;
      if (((local_45 & 1) == 0) && ((uVar3 & 1) != 0)) {
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentsFakeRefreshEachOpen_026a4e90);
        if (((ulong)puVar2 & 1) != 0) {
          FUN_00546e94(local_28);
        }
        FUN_00545778(local_28,local_50,local_58,1);
        local_2c = 1;
      }
      else if (((local_45 & 1) == 0) || ((uVar3 & 1) == 0)) {
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentsFakeOnlySelfEnabled_026a4f88);
        if (((ulong)puVar2 & 1) == 0) {
          uVar3 = local_28;
          FUN_00552d34();
          local_5a = (byte)uVar3;
          uVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_likeFlag_026a4708);
          local_5b = (byte)uVar3;
          puVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_momentsFakeOwnPostsAutoEnable_026a4f90);
          bVar1 = 0;
          if (((ulong)puVar2 & 1) != 0) {
            bVar1 = local_5a;
          }
          local_5c = bVar1 & 1;
          if (((local_5b & 1) == 0) && ((bVar1 & 1) == 0)) {
            puVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_momentsFakeRefreshEachOpen_026a4e90);
            if (((ulong)puVar2 & 1) != 0) {
              FUN_00546e94(local_28);
            }
            FUN_00547070(local_28);
            local_2c = 1;
          }
          else {
            uVar3 = local_28;
            FUN_0054ac0c();
            if ((uVar3 & 1) != 0) {
              uVar3 = local_28;
              FUN_00556684();
              if ((uVar3 & 1) != 0) {
                local_2c = 1;
                goto LAB_00555dd4;
              }
            }
            local_71 = 0;
            puVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentsFakeKeepOriginal_026a4e80);
            if (((ulong)puVar2 & 1) == 0) {
              local_100 = *(ulong *)PTR____NSArray0___02578280;
            }
            else {
              local_100 = local_28;
              FUN_0054ace0();
              _objc_retainAutoreleasedReturnValue();
              local_71 = 1;
              local_70 = local_100;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_68 = local_100;
            if ((local_71 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_70);
            }
            local_89 = 0;
            puVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_momentsFakeKeepOriginal_026a4e80);
            if (((ulong)puVar2 & 1) == 0) {
              local_120 = *(ulong *)PTR____NSArray0___02578280;
            }
            else {
              local_120 = local_28;
              FUN_0054af3c();
              _objc_retainAutoreleasedReturnValue();
              local_89 = 1;
              local_88 = local_120;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_80 = local_120;
            if ((local_89 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_88);
            }
            uVar4 = local_28;
            FUN_00556a24();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_28;
            uVar5 = local_28;
            local_98 = uVar4;
            FUN_00556fc8();
            _objc_retainAutoreleasedReturnValue();
            FUN_0054d068();
            _objc_retainAutoreleasedReturnValue();
            local_a0 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            if (local_68 == 0) {
              local_168 = *(ulong *)PTR____NSArray0___02578280;
            }
            else {
              local_168 = local_68;
            }
            puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,
                       local_168);
            _objc_retainAutoreleasedReturnValue();
            if (local_98 == 0) {
              local_188 = *(ulong *)PTR____NSArray0___02578280;
            }
            else {
              local_188 = local_98;
            }
            local_a8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_addObjectsFromArray__0269d540,local_188);
            if (local_80 == 0) {
              local_1a0 = *(ulong *)PTR____NSArray0___02578280;
            }
            else {
              local_1a0 = local_80;
            }
            puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithArray__0269eab8,
                       local_1a0);
            _objc_retainAutoreleasedReturnValue();
            if (local_a0 == 0) {
              local_1c0 = *(ulong *)PTR____NSArray0___02578280;
            }
            else {
              local_1c0 = local_a0;
            }
            local_b0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_addObjectsFromArray__0269d540,local_1c0);
            DAT_028cb368 = 1;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLikeUsers__026a4e98,local_a8);
            puVar2 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLikeCount__026a4ea0,puVar2);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCommentUsers__026a4ea8,local_b0)
            ;
            puVar2 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCommentCount__026a4eb0,puVar2);
            FUN_0054e514(local_28,1);
            DAT_028cb368 = 0;
            _objc_storeStrong(&local_b0);
            _objc_storeStrong(&local_a8,0);
            _objc_storeStrong(&local_a0,0);
            _objc_storeStrong(&local_98,0);
            _objc_storeStrong(&local_80,0);
            _objc_storeStrong(&local_68,0);
            local_2c = 0;
          }
        }
        else {
          local_2c = 1;
        }
      }
      else {
        local_2c = 1;
      }
    }
    else {
      FUN_00547070(local_28);
      local_2c = 1;
    }
  }
LAB_00555dd4:
  _objc_storeStrong(&local_38,0);
LAB_00555de4:
  _objc_storeStrong(&local_28,0);
  return;
}

