// FUN_00555480 @ 00555480

undefined1 FUN_00555480(void)

{
  long lVar1;
  long local_20;
  
  FUN_005522d4();
  local_20 = 0;
  while( true ) {
    if (1 < local_20) {
      return 0;
    }
    lVar1 = *(long *)(&DAT_028cb390 + local_20 * 8);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
    if ((lVar1 != 0) || (((&DAT_028cb410)[local_20] & 1) != 0)) break;
    local_20 = local_20 + 1;
  }
  return 1;
}

