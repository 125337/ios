// FUN_006c28a4 @ 006c28a4

void FUN_006c28a4(void)

{
  char *pcVar1;
  
  pcVar1 = "CAppUtil";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_genFavRecordSubTimeStringByUInt__026a6938,FUN_006c28f8,&DAT_028cc210
                  );
  return;
}

