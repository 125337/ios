@interface MMNexusImageSchemeHandler : NSObject <WKURLSchemeHandler>
{
    NSMutableSet * _activeTasks; // +0x8
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x10
}
+ (id)sharedInstance;
+ (id)_sniffMimeFromData:(id)arg1;
- (id)init;
- (id)scheme;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (BOOL)_isTaskActive:(id)arg1;
- (void)_removeTask:(id)arg1;
- (void)stopTask:(id)arg1 withError:(id)arg2;
- (void)finishTask:(id)arg1 withResponse:(id)arg2 data:(id)arg3;
- (id)activeTasks;
- (void)setActiveTasks:(id)arg1;
- (id)syncQueue;
- (void)setSyncQueue:(id)arg1;
- (void).cxx_destruct;
@end
