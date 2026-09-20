// FUN_003c18d8 @ 003c18d8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003c18d8(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_b8;
  ulong local_b0;
  ulong local_98;
  bool local_89;
  ulong local_88;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_homePinFoldedChatBoxEnabled_026a2fa0);
  if ((((((ulong)puVar3 & 1) == 0) ||
       (puVar3 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_homePinFoldedChatBoxInNormalEnab_026a2f98),
       ((ulong)puVar3 & 1) != 0)) ||
      (puVar3 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_homeSessionGroupingEnabled_026a2888),
      ((ulong)puVar3 & 1) != 0)) || (local_18 == 0)) {
    local_24 = 1;
  }
  else {
    FUN_003c1e90();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_24 = 1;
    }
    else {
      FUN_00366324();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_18;
      local_38 = puVar3;
      FUN_003c0b48(local_18,&cf_normalSessions);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_18;
      local_40 = uVar4;
      FUN_003c0b48(local_18,&cf_allTopSessions);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_18;
      local_48 = uVar5;
      FUN_003c0b48(local_18,&cf_topSessions);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_40;
      local_50 = uVar4;
      FUN_003c202c(local_40,local_30,local_38);
      uVar4 = local_48;
      local_58 = uVar5;
      FUN_003c202c(local_48,local_30,local_38);
      uVar5 = local_50;
      local_60 = uVar4;
      FUN_003c202c(local_50,local_30,local_38);
      local_68 = uVar5;
      if (((local_58 == 0x7fffffffffffffff) && (local_60 == 0x7fffffffffffffff)) &&
         (uVar5 == 0x7fffffffffffffff)) {
        local_24 = 1;
      }
      else {
        bVar1 = false;
        local_89 = false;
        bVar2 = false;
        if (local_58 == 0x7fffffffffffffff) {
          bVar2 = local_60 == 0x7fffffffffffffff;
          if (bVar2) {
            local_b8 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,uVar5);
            _objc_retainAutoreleasedReturnValue();
            local_98 = local_b8;
          }
          else {
            local_b8 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_60);
            _objc_retainAutoreleasedReturnValue();
            local_88 = local_b8;
          }
          local_89 = !bVar2;
          local_b0 = local_b8;
        }
        else {
          local_b0 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_78 = local_b0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_b0;
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        if (local_89) {
          (*(code *)PTR__objc_release_02578630)(local_88);
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        if (local_70 == 0) {
          local_24 = 1;
        }
        else {
          if (local_58 != 0x7fffffffffffffff) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_removeObjectAtIndex__0269d530,local_58);
          }
          uVar4 = local_48;
          FUN_003c202c(local_48,local_30,local_38);
          local_60 = uVar4;
          if (uVar4 != 0x7fffffffffffffff) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_removeObjectAtIndex__0269d530,uVar4);
          }
          uVar4 = local_50;
          FUN_003c202c(local_50,local_30,local_38);
          local_68 = uVar4;
          if (uVar4 != 0x7fffffffffffffff) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_removeObjectAtIndex__0269d530,uVar4);
          }
          FUN_003c0f54(local_48,local_70);
          uVar4 = local_18;
          FUN_0037a830(local_18,&cf_isFoldTopSession);
          if ((uVar4 & 1) == 0) {
            FUN_003c0f54(local_50,local_70);
          }
          uVar4 = local_18;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          uVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithLongLong__0269d808,uVar5);
          _objc_retainAutoreleasedReturnValue();
          FUN_00367110(uVar4,&cf_totalTopSessionCount);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          FUN_003c2204(local_70);
          local_24 = 0;
        }
        _objc_storeStrong(&local_70,0);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

