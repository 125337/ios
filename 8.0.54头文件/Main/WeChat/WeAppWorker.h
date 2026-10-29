@interface WeAppWorker : NSObject <WAJSEventHandlerContextDelegate, WAWorkerDelegate>
{
    WAWorkerRuntime * _context; // +0x8
    unsigned int _workerId; // +0x10
    int _bufferId; // +0x14
    WAJSCoreService * _service; // +0x18
    NSString * _workerPath; // +0x20
    NSMutableSet * _eventHandlers; // +0x28
    NSString * _userFile; // +0x30
    long long _dataSize; // +0x38
}
- (id)init:(id)arg1 workerId:(unsigned int)arg2 service:(id)arg3;
- (void)dealloc;
- (void)initWebView;
- (void)initJSContext:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)stopWorker;
- (void)releaseWorker;
- (unsigned int)getWorkerId;
- (void)onCreate;
- (id)getFrame;
- (void)onMessage:(id)arg1;
- (id)getFrameData;
- (id)getFileData:(id)arg1;
- (id)getCompressedFileData:(id)arg1 compressionAlgorithm:(id)arg2;
- (id)getAppId;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getEventHandler:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (void)setListenBuffer:(int)arg1;
- (id)getBase64Buffer;
- (id)getWAContact;
- (void)sendResultBeforeEnd:(id)arg1 resultType:(long long)arg2 handler:(id)arg3;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (BOOL)isParentViewControllerDidAppear:(id)arg1;
- (id)sourceOpenSDKAppID;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (id)service;
- (void)setService:(id)arg1;
- (unsigned int)workerId;
- (void)setWorkerId:(unsigned int)arg1;
- (int)bufferId;
- (void)setBufferId:(int)arg1;
- (id)workerPath;
- (void)setWorkerPath:(id)arg1;
- (id)eventHandlers;
- (void)setEventHandlers:(id)arg1;
- (id)userFile;
- (void)setUserFile:(id)arg1;
- (long long)dataSize;
- (void)setDataSize:(long long)arg1;
- (void).cxx_destruct;
@end

