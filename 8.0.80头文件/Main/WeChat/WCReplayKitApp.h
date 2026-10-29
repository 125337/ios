@interface WCReplayKitApp : NSObject <WCLocalSocketServerDelegate, MMFinderReplayKitVideoDecoderDelegate>
{
    BOOL _serviceSocketSuccess; // +0x8
    BOOL _pausedByMainApp; // +0x9
    unsigned short _fps; // +0xa
    unsigned short _rcLimit; // +0xc
    int _videoType; // +0x10
    int _serviceConfigIndex; // +0x14
    id <MMFinderLiveReplayKitManagerDelegate> _delegate; // +0x18
    struct * _recvBuffer; // +0x20
    MMFinderReplayKitVideoDecoder * _videoDecode; // +0x28
    long long _orientation; // +0x30
    WCLocalSocketServer * _socketServer; // +0x38
    NSObject<OS_dispatch_queue> * _analyzeQueue; // +0x40
    MMFinderGCDAsyncSocket * _currentSocket; // +0x48
    NSObject<OS_dispatch_queue> * _handleDataQueue; // +0x50
    struct _config; // +0x58
    struct _header; // +0x78
}
+ (id)sharedManager;
- (void)startRecordLive;
- (void)stopSocket;
- (void)stopRecordLive;
- (void)cleanDataWhileClientSotp;
- (void)didReadDataError:(id)arg1;
- (void)socket:(id)arg1 didReadData:(id)arg2;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socketDidCloseReadStream:(id)arg1;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)handleRecvBuffer:(unsigned long long)arg1 dataLen:(unsigned long long)arg2 videoFrameId:(long long)arg3 videoFrameWidth:(unsigned int)arg4 videoFrameHeight:(unsigned int)arg5 videoFrameType:(unsigned int)arg6;
- (void)onRecvVideoData:(id)arg1;
- (void)onRecvH264VideoData:(id)arg1 videoFrameId:(long long)arg2 videoFrameWidth:(unsigned int)arg3 videoFrameHeight:(unsigned int)arg4 videoFrameType:(unsigned int)arg5;
- (void)onDecoderPixelBuffer:(__CVBuffer *)arg1 videoFrameId:(long long)arg2;
- (void)updateConfig;
- (void)setUpConfig;
- (void)sendConfig;
- (id)configData;
- (id)dictionaryToJson:(id)arg1;
- (BOOL)hasConfig:(struct)arg1;
- (void)updatePausedByMainApp:(unsigned short)arg1;
- (void)updateVideoType:(unsigned short)arg1;
- (void)updateOrientation:(unsigned short)arg1;
- (void)updateConfigWithPausedByMainApp:(unsigned short)arg1 videoType:(unsigned short)arg2 orientation:(unsigned short)arg3 fps:(unsigned short)arg4 rcLimit:(unsigned short)arg5;
- (id)socketServer;
- (BOOL)isServiceSocketSuccess;
- (void)resetHeader;
- (void)showLogErrorString:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)serviceSocketSuccess;
- (struct *)recvBuffer;
- (void)setRecvBuffer:(struct *)arg1;
- (id)videoDecode;
- (void)setVideoDecode:(id)arg1;
- (struct)config;
- (void)setConfig:(struct)arg1;
- (struct)header;
- (void)setHeader:(struct)arg1;
- (BOOL)pausedByMainApp;
- (void)setPausedByMainApp:(BOOL)arg1;
- (int)videoType;
- (void)setVideoType:(int)arg1;
- (int)serviceConfigIndex;
- (void)setServiceConfigIndex:(int)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (unsigned short)fps;
- (void)setFps:(unsigned short)arg1;
- (unsigned short)rcLimit;
- (void)setRcLimit:(unsigned short)arg1;
- (void)setSocketServer:(id)arg1;
- (id)analyzeQueue;
- (void)setAnalyzeQueue:(id)arg1;
- (id)currentSocket;
- (void)setCurrentSocket:(id)arg1;
- (id)handleDataQueue;
- (void)setHandleDataQueue:(id)arg1;
- (void).cxx_destruct;
@end
