// FUN_0077d704 @ 0077d704

void FUN_0077d704(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *local_30;
  undefined1 local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR__OBJC_CLASS___NSValue_026ce1f0;
  local_21 = param_3;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithBytes_objCType__026a7fc8,&local_21,
             "B");
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  _objc_setAssociatedObject(local_18,FUN_0077d610,puVar1,1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

