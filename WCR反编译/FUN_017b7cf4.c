// FUN_017b7cf4 @ 017b7cf4

void FUN_017b7cf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_11 = (byte)puVar2;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_25 = (byte)puVar2;
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_26 = (byte)puVar2;
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_27 = (byte)puVar2;
  if (((((DAT_028e4254 & 1) == 0) || ((DAT_028e4250 & 1) != (local_11 & 1))) ||
      ((DAT_028e4251 & 1) != (local_25 & 1))) ||
     (((DAT_028e4252 & 1) != (local_26 & 1) || ((DAT_028e4253 & 1) != (local_27 & 1))))) {
    DAT_028e4254 = 1;
    DAT_028e4250 = local_11 & 1;
    DAT_028e4251 = local_25 & 1;
    DAT_028e4252 = local_26 & 1;
    DAT_028e4253 = local_27 & 1;
    puVar1 = PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar1;
    if ((local_11 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stopMonitoring_026aa308);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_startMonitoring_026aa300);
    }
    if (((local_11 & 1) == 0) || ((local_26 & 1) == 0)) {
      puVar1 = PTR_LogFloatingBall_026cea78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_LogFloatingBall_026cea78,PTR_s_sharedNavigationInstance_026a9ee0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      puVar1 = PTR_LogFloatingBall_026cea78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_LogFloatingBall_026cea78,PTR_s_sharedNavigationInstance_026a9ee0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if ((local_25 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stopNSLogMonitoring_026aa320);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_startNSLogMonitoring_026aa318);
    }
    if (((local_25 & 1) == 0) || ((local_27 & 1) == 0)) {
      puVar1 = PTR_LogFloatingBall_026cea78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_LogFloatingBall_026cea78,PTR_s_sharedNSLogInstance_026aa238);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      puVar1 = PTR_LogFloatingBall_026cea78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_LogFloatingBall_026cea78,PTR_s_sharedNSLogInstance_026aa238);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

