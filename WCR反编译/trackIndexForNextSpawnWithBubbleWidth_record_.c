// trackIndexForNextSpawnWithBubbleWidth:record: @ 00ff45cc

/* Function Stack Size: 0x20 bytes */

long_long WCRefineKeywordAlertDanmakuPresenter::trackIndexForNextSpawnWithBubbleWidth_record_
                    (ID param_1,SEL param_2,double param_3,ID param_4)

{
  long lVar1;
  long_long lVar2;
  ID IVar3;
  ID IVar4;
  long local_50;
  undefined8 local_38;
  double local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_maxTrackCountForRecord__026ad6e8,local_38);
  if ((long)IVar3 < 1) {
    local_18 = 0x7fffffffffffffff;
  }
  else {
    for (local_50 = 0; local_50 < (long)IVar3; local_50 = local_50 + 1) {
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nextTrackRoundRobin_026ad6f0);
      lVar1 = 0;
      if (IVar3 != 0) {
        lVar1 = (long)(IVar4 + local_50) / (long)IVar3;
      }
      lVar2 = (IVar4 + local_50) - lVar1 * IVar3;
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,local_20,PTR_s_canSpawnOnTrack_bubbleWidth_maxT_026ad6f8,lVar2,IVar3);
      if ((IVar4 & 1) != 0) {
        lVar1 = 0;
        if (IVar3 != 0) {
          lVar1 = (long)(lVar2 + 1) / (long)IVar3;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_setNextTrackRoundRobin__026ad700,(lVar2 + 1) - lVar1 * IVar3);
        local_18 = lVar2;
        goto LAB_00ff4724;
      }
    }
    local_18 = 0x7fffffffffffffff;
  }
LAB_00ff4724:
  _objc_storeStrong(&local_38,0);
  return local_18;
}

