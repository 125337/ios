// FUN_01633184 @ 01633184

void FUN_01633184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
  puVar1 = PTR_s_PushViewController_animated__0269cd40;
  uVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_PushViewController_animated__0269cd40
            );
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_pushViewController_animated__0269d590,local_20,1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,puVar1,local_20,1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

