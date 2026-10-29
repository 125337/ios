@interface GCCommonServer : GCBaseServer
- (void)getLiteConfig:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)reportEmptyGameRedpoint:(id /* block */)arg1;
- (void)pullUserMessageWithData:(unsigned int)arg1 andTransData:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)getRemindUserList:(id)arg1 context:(id)arg2 pageLimit:(unsigned int)arg3 completionBlock:(id /* block */)arg4;
@end

