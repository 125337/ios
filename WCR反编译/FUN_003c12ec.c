// FUN_003c12ec @ 003c12ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003c12ec(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long local_b8;
  long local_b0;
  long local_98;
  bool local_89;
  long local_88;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  long local_18;
  
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
       ((ulong)puVar3 & 1) == 0)) ||
      (puVar3 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_homeSessionGroupingEnabled_026a2888),
      ((ulong)puVar3 & 1) != 0)) || (local_18 == 0)) {
    local_24 = 1;
    goto LAB_003c18b0;
  }
  FUN_003c1e90();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_24 = 1;
  }
  else {
    FUN_00366324();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_18;
    local_38 = puVar3;
    FUN_003c0b48(local_18,&cf_normalSessions);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_18;
    local_40 = lVar4;
    FUN_003c0b48(local_18,&cf_allTopSessions);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = local_18;
    local_48 = lVar5;
    FUN_003c0b48(local_18,&cf_topSessions);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_40;
    local_50 = lVar4;
    FUN_003c202c(local_40,local_30,local_38);
    lVar4 = local_48;
    local_58 = lVar5;
    FUN_003c202c(local_48,local_30,local_38);
    lVar5 = local_50;
    local_60 = lVar4;
    FUN_003c202c(local_50,local_30,local_38);
    local_68 = lVar5;
    if (((local_58 == 0x7fffffffffffffff) && (local_60 == 0x7fffffffffffffff)) &&
       (lVar5 == 0x7fffffffffffffff)) {
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
                    (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,lVar5);
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
        if (local_60 != 0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_removeObjectAtIndex__0269d530,local_60);
        }
        lVar4 = local_50;
        FUN_003c202c(local_50,local_30,local_38);
        local_68 = lVar4;
        if (lVar4 != 0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectAtIndex__0269d530,lVar4);
        }
        lVar4 = local_18;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        lVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithLongLong__0269d808,lVar5);
        _objc_retainAutoreleasedReturnValue();
        FUN_00367110(lVar4,&cf_totalTopSessionCount);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        lVar4 = local_40;
        FUN_003c202c(local_40,local_30,local_38);
        local_58 = lVar4;
        if (lVar4 != 0x7fffffffffffffff) {
          if (lVar4 == 0) {
            local_24 = 1;
            goto LAB_003c1858;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectAtIndex__0269d530,lVar4);
        }
        lVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
        if (lVar4 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addObject__0269d180,local_70);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_insertObject_atIndex__0269eac0,local_70,0);
        }
        local_24 = 0;
      }
LAB_003c1858:
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30,0);
LAB_003c18b0:
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

