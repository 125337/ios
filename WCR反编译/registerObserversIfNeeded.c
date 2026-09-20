// registerObserversIfNeeded @ 00eba1b8

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::registerObserversIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_observersRegistered_026ab450);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setObserversRegistered__026ab458,1);
    puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addObserver_selector_name_object_0269caf8,local_18,
               PTR_s_appDidEnterBackground_026ab460,
               *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_025780b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addObserver_selector_name_object_0269caf8,local_18,
               PTR_s_appWillEnterForeground_026ab468,
               *(undefined8 *)PTR__UIApplicationWillEnterForegroundNotification_025780e8,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addObserver_selector_name_object_0269caf8,local_18,
               PTR_s_appDidBecomeActive_026ab470,
               *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_025780b0,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addObserver_selector_name_object_0269caf8,local_18,
               PTR_s_audioSessionMayHaveChanged__026ab478,
               *(undefined8 *)PTR__AVAudioSessionRouteChangeNotification_025784e0,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addObserver_selector_name_object_0269caf8,local_18,
               PTR_s_audioSessionMayHaveChanged__026ab478,
               *(undefined8 *)PTR__AVAudioSessionInterruptionNotification_025784c0,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addObserver_selector_name_object_0269caf8,local_18,
               PTR_s_audioSessionMayHaveChanged__026ab478,
               *(undefined8 *)PTR__AVAudioSessionSilenceSecondaryAudioHintNotification_025784e8,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

