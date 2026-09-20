// persistBallPosition @ 015e9114

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::persistBallPosition(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  double in_d2;
  double in_d3;
  double local_128;
  double local_120;
  double local_100;
  double local_f8;
  undefined *local_58 [3];
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  if ((1.0 <= in_d2) && (1.0 <= in_d3)) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    local_40 = in_d2;
    local_38 = in_d3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = 0.0;
    IVar2 = local_28;
    local_58[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f8 = local_f8 / local_40;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_f8 <= 0.0) {
      local_f8 = 0.0;
    }
    if (local_f8 <= 1.0) {
      local_100 = local_f8;
    }
    else {
      local_100 = 1.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,puVar1,PTR_s_setDouble_forKey__026a0790,&cf_WCRQCBallCenterXRatio);
    puVar1 = local_58[0];
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_ball_026b11a0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_120 = local_f8 / local_38;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_120 <= 0.0) {
      local_120 = 0.0;
    }
    if (local_120 <= 1.0) {
      local_128 = local_120;
    }
    else {
      local_128 = 1.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_128,puVar1,PTR_s_setDouble_forKey__026a0790,&cf_WCRQCBallCenterYRatio);
    puVar1 = local_58[0];
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_idleSnapped_026b1350);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setBool_forKey__026a9618,IVar2,&cf_WCRQCBallIdleSnapped);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58[0],PTR_s_setBool_forKey__026a9618,1,&cf_WCRQCBallPositionSaved);
    _objc_storeStrong(local_58,0);
  }
  return;
}

