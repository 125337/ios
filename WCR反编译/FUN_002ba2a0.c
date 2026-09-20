// FUN_002ba2a0 @ 002ba2a0

bool FUN_002ba2a0(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tag_026cab98);
  bVar1 = true;
  if ((((lVar2 != 0x24f749) && (bVar1 = true, lVar2 != 0x24f74a)) &&
      (bVar1 = true, lVar2 != 0x24f74b)) &&
     (((bVar1 = true, lVar2 != 0x24f750 && (bVar1 = true, lVar2 != 0x24f751)) &&
      ((bVar1 = true, lVar2 != 0x24f752 && (bVar1 = true, lVar2 != 0x24f754)))))) {
    bVar1 = lVar2 == 0x24f757;
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

