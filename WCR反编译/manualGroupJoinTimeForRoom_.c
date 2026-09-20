// manualGroupJoinTimeForRoom: @ 014e188c

/* Function Stack Size: 0x18 bytes */

double __thiscall
WCRefineSessionStatsEngine::manualGroupJoinTimeForRoom_
          (WCRefineSessionStatsEngine *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  double in_d0;
  double local_70;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_014dfa54();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0.0;
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,local_38)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_70 = in_d0;
    if (in_d0 <= 1000000000.0) {
      local_70 = 0.0;
    }
    local_18 = local_70;
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

