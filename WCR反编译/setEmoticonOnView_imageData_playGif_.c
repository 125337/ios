// setEmoticonOnView:imageData:playGif: @ 00f51f70

/* Function Stack Size: 0x24 bytes */

void WCRefineEmoticonUtil::setEmoticonOnView_imageData_playGif_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setEmoticonOnView_imageData_isGi_0269e0b0,local_28,local_30,param_5 & 1)
  ;
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

