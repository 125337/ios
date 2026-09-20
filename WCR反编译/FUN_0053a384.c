// FUN_0053a384 @ 0053a384

void FUN_0053a384(void)

{
  char *pcVar1;
  
  pcVar1 = "WCFacadeDynamicConfig";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_Moments_enableFlutterUserPage_026a4c68,FUN_0053a3fc,&DAT_028cb298);
  pcVar1 = "FlutterSnsProfilePlugin";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_jumpToProfileUserName_scene_erro_026a4c70,FUN_0053a464,&DAT_028cb2a0
                  );
  return;
}

