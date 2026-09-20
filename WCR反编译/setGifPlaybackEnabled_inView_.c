// setGifPlaybackEnabled:inView: @ 010e7310

/* Function Stack Size: 0x1c bytes */

void WCRefineNameplateHelper::setGifPlaybackEnabled_inView_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  undefined8 local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonUtil_026ce1c8,PTR_s_setAnimatedImagePlaybackEnabled__026ae9b8,
             local_21 & 1);
  _objc_storeStrong(&local_30,0);
  return;
}

