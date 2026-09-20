// FUN_01cbfabc @ 01cbfabc

void FUN_01cbfabc(long param_1)

{
  long local_50;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (local_20 == 0) {
    local_50 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_50 = local_20;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeCallback_ok_payload__026c34d0,
             *(undefined8 *)(param_1 + 0x28),1,local_50);
  _objc_storeStrong(&local_20,0);
  return;
}

