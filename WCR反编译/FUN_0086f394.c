// FUN_0086f394 @ 0086f394

long FUN_0086f394(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  long lVar2;
  long local_58 [3];
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_38 = 0;
  local_30 = param_5;
  local_28 = param_4;
  _objc_storeStrong(&local_38,param_6);
  lVar2 = local_28;
  pcVar1 = DAT_028cd760;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(lVar2,local_30,local_38);
  local_40 = lVar2;
  if ((lVar2 != 0) && ((DAT_028cd85c & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setHidden__026ca970,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,0,local_58[0],PTR_s_setFrame__026ca960);
    _objc_storeStrong(local_58,0);
  }
  lVar2 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return lVar2;
}

