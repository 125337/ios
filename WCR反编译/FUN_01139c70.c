// FUN_01139c70 @ 01139c70

bool FUN_01139c70(long param_1)

{
  long lVar1;
  
  FUN_00a59890();
  _os_unfair_lock_lock();
  lVar1 = DAT_028e35d8;
  _os_unfair_lock_unlock(&DAT_028e35c8);
  return lVar1 != 0 && lVar1 != param_1;
}

