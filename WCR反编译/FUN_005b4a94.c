// FUN_005b4a94 @ 005b4a94

void FUN_005b4a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028cb6e0)(local_18,local_20,local_28,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_setupAlbumListSwipeGest_026a5848);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

