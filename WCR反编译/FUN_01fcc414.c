// FUN_01fcc414 @ 01fcc414

void FUN_01fcc414(undefined8 param_1)

{
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _os_unfair_lock_lock();
  _objc_storeStrong(&local_20,DAT_028e4910);
  _objc_storeStrong(&DAT_028e4910,local_18);
  _os_unfair_lock_unlock(&DAT_028e4980);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

