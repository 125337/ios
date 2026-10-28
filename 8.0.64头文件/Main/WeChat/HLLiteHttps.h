@interface HLLiteHttps : NSObject <NSURLSessionDelegate>
{
    BOOL _newUser; // +0x8
    NSString * _appVersion; // +0x10
    long long _appID; // +0x18
    NSOperationQueue * _operateQueue; // +0x20
    NSMutableDictionary * _mapIDToPacket; // +0x28
    NSURLSession * _session; // +0x30
    NSObject<OS_dispatch_queue> * _callbackQueue; // +0x38
}
+ (id)shareInstance;
- (id)init;
- (void)setAppVersion:(id)arg1;
- (id)session;
- (id)doBlockInOperateQueue:(id /* block */)arg1;
- (id)doBlockAsync:(BOOL)arg1 inOperateQueue:(id /* block */)arg2;
- (void)asyncDoHttp:(id)arg1;
- (void)asyncCancel:(unsigned long long)arg1;
- (void)cancel:(unsigned long long)arg1;
- (void)doHttp:(id)arg1 data:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)appVersion;
- (long long)appID;
- (void)setAppID:(long long)arg1;
- (BOOL)newUser;
- (void)setNewUser:(BOOL)arg1;
- (id)operateQueue;
- (id)mapIDToPacket;
- (void)setMapIDToPacket:(id)arg1;
- (void)setSession:(id)arg1;
- (id)callbackQueue;
- (void).cxx_destruct;
@end
