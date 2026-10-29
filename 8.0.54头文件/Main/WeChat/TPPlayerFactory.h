@interface TPPlayerFactory : NSObject
+ (id)createTPPlayerWithPlayingQueue:(id)arg1;
+ (id)createTPPlayerWithPlayingQueue:(id)arg1 delegateQueue:(id)arg2;
+ (id)createConnectMgr;
+ (id)createRichMediaSynchronizer;
+ (id)createRichMediaASyncRequester;
@end

