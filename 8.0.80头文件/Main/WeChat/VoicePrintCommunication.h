@interface VoicePrintCommunication : NSObject
+ (void)checkVoicePrintWithCompletion:(id /* block */)arg1;
+ (void)switchVoicePrint:(BOOL)arg1 completion:(id /* block */)arg2;
+ (void)deleteVoicePrintWithCompletion:(id /* block */)arg1;
+ (void)operate:(unsigned int)arg1 completion:(id /* block */)arg2;
+ (void)getTicketForUsername:(id)arg1 completion:(id /* block */)arg2;
+ (void)getTicketForUsername:(id)arg1 idcRedirectCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)getResourceWithScene:(unsigned int)arg1 ticket:(id)arg2 useRSA:(BOOL)arg3 completion:(id /* block */)arg4;
+ (void)getResourceWithScene:(unsigned int)arg1 ticket:(id)arg2 useRSA:(BOOL)arg3 completionWithXml:(id /* block */)arg4;
@end
