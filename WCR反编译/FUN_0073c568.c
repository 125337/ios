// FUN_0073c568 @ 0073c568

void FUN_0073c568(void)

{
  char *pcVar1;
  
  pcVar1 = "AVCaptureSession";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setSessionPreset__026a7bb0,FUN_0073c5b0,&DAT_028cc598);
  return;
}

