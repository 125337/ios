// FUN_0073ef18 @ 0073ef18

byte FUN_0073ef18(long *param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long local_30;
  undefined8 local_28;
  long *local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_00740c38(param_1,"m_contact");
  lVar2 = *param_1;
  (*(code *)PTR__objc_retain_02578638)();
  bVar1 = false;
  local_30 = lVar2;
  if (lVar2 != 0) {
    FUN_0073f8a0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (bVar1) {
    local_11 = 0;
  }
  else {
    plVar3 = local_20;
    (*DAT_028cc650)(local_20,local_28);
    local_11 = (byte)plVar3 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

