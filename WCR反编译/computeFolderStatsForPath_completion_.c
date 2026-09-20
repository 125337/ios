// computeFolderStatsForPath:completion: @ 015b1880

/* Function Stack Size: 0x20 bytes */

void WCRefineVoicePackStore::computeFolderStatsForPath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    if (local_40 != 0) {
      (**(code **)(local_40 + 0x10))(local_40,0);
    }
    local_44 = 1;
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_cachedFolderStatsForPath__026b0bf0,local_38);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_40;
    local_50 = IVar4;
    if (IVar4 == 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isUIAccessActive_026b0c08);
      if ((IVar4 & 1) == 0) {
        if (local_40 != 0) {
          (**(code **)(local_40 + 0x10))(local_40,0);
        }
        local_44 = 1;
      }
      else {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
        lVar3 = local_40;
        uVar1 = DAT_028e3ad0;
        local_98 = PTR___NSConcreteStackBlock_02578660;
        local_90 = 0xc2000000;
        local_8c = 0;
        local_88 = FUN_015b1b9c;
        local_80 = &DAT_02582be8;
        local_60 = local_28;
        local_68 = IVar4;
        local_58 = IVar4;
        (*(code *)PTR__objc_retain_02578638)();
        lVar2 = local_38;
        local_70 = lVar3;
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = lVar2;
        _dispatch_async(uVar1,&local_98);
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
        local_44 = 0;
      }
    }
    else {
      if (local_40 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_count);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar6 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_size);
        _objc_retainAutoreleasedReturnValue();
        IVar7 = IVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (**(code **)(lVar3 + 0x10))(lVar3,IVar5,IVar7);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        (*(code *)PTR__objc_release_02578630)(IVar4);
      }
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

