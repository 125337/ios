// FUN_007a8c38 @ 007a8c38

void FUN_007a8c38(void)

{
  char *pcVar1;
  
  pcVar1 = "MMImagePickerManager";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getImagePickerFromCameraWithOpti_026a8120,FUN_007a8c8c,&DAT_028ccb68
                  );
  return;
}

