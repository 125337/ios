// toDoImageHasAlpha: @ 01ece110

/* Function Stack Size: 0x18 bytes */

bool WCRefineToDoListSettingsViewController::toDoImageHasAlpha_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  long lVar2;
  long local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_CGImage_0269e0e8);
  if (lVar2 == 0) {
    local_11 = false;
  }
  else {
    _CGImageGetAlphaInfo();
    iVar1 = (int)lVar2;
    local_11 = true;
    if ((((iVar1 != 4) && (local_11 = true, iVar1 != 3)) && (local_11 = true, iVar1 != 2)) &&
       (local_11 = true, iVar1 != 1)) {
      local_11 = iVar1 == 7;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

