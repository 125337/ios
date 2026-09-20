// FUN_0089e384 @ 0089e384

void FUN_0089e384(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  if ((DAT_028cdd4a & 1) == 0) {
    DAT_028cdd4a = 1;
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_18 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_removeObjectForKey__0269d700,&cf_wcr_hotUpdateColdLoadDefer_pending)
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_removeObjectForKey__0269d700,
                 &cf_wcr_hotUpdateColdLoadDefer_crashCount);
    }
    else {
      puVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_boolForKey__0269f3d8,&cf_wcr_hotUpdateColdLoadDefer_pending);
      if (((ulong)puVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_removeObjectForKey__0269d700,
                   &cf_wcr_hotUpdateColdLoadDefer_crashCount);
      }
      else {
        puVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_integerForKey__026a9600,&cf_wcr_hotUpdateColdLoadDefer_crashCount)
        ;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_removeObjectForKey__0269d700,
                   &cf_wcr_hotUpdateColdLoadDefer_pending);
        if ((long)(puVar1 + 1) < 2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setInteger_forKey__026a9610,puVar1 + 1,
                     &cf_wcr_hotUpdateColdLoadDefer_crashCount);
        }
        else {
          puVar1 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineConfig_026cdf58,PTR_s_flushConfigWriteSync_026a2e38);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_removeObjectForKey__0269d700,
                     &cf_wcr_hotUpdateColdLoadDefer_crashCount);
          _NSLog(&cf_wcrcold_startdeferdisabledafter_ldconsecutivecrashes);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_synchronize_026a0798);
      }
    }
    _objc_storeStrong(&local_18,0);
  }
  return;
}

