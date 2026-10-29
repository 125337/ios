@interface MMFinderLiveReplayKitViewModel : NSObject <MMFinderReplayKitVideoEncoderDelegate>
{
    OpaqueVTPixelRotationSession * _rotation_session_; // +0x8
    BOOL _isPrivacy; // +0x10
    unsigned short _fps; // +0x12
    unsigned short _enableDatalimitsRC; // +0x14
    unsigned int _recordLiveMemTime; // +0x18
    MMFinderLiveReplayKitManager * _replayKitManager; // +0x20
    RPSystemBroadcastPickerView * _broadcastPickerView; // +0x28
    MMFinderScreenRecordGuideView * _screenRecordGuideView; // +0x30
    MMFinderLiveAnchorRecordShowView * _anchorRecordTipView; // +0x38
    __CVBuffer * _privacyPushPixelBuffer; // +0x40
    MMFinderRecordVideoFrame * _videoFrame; // +0x48
    unsigned long long _lastPixelBufferTime; // +0x50
    MMFinderLiveGameUserInfo * _gameUserInfo; // +0x58
    MMTimer * _privacyCheckTimer; // +0x60
    NSFileHandle * _recordLiveFileHandle; // +0x68
    NSMutableArray * _recordLiveMemArray; // +0x70
    long long _videoFrameId; // +0x78
    long long _videoFrameDecodeId; // +0x80
    long long _videoFrameLostId; // +0x88
    long long _videoFrameLostCount; // +0x90
    long long _videoFrameDecodeLostCount; // +0x98
    MMUILabel * _videoFrameLabel; // +0xa0
    CIContext * _rotateContext; // +0xa8
    long long _videoType; // +0xb0
    unsigned long long _lastReportStrTime; // +0xb8
    MMFinderReplayKitVideoEncoder * _encoder; // +0xc0
    NSLock * _videoFrameLock; // +0xc8
    CGSize _sizeOfPixelBuffer; // +0xd0
    CGSize _sizeOfPrivacyPixelBuffer; // +0xe0
}
- (id)init;
- (double)videoInterval;
- (BOOL)userH264DirectSend;
- (void)updatePrivacy:(BOOL)arg1;
- (void)checkEncodeImage:(id)arg1 isLandscape:(BOOL)arg2 isPrivacy:(BOOL)arg3;
- (void)onEncodeOneFrame:(id)arg1;
- (id)videoFrameLock;
- (id)encoder;
- (__CVBuffer *)newRotateCVPixelBuffer:(__CVBuffer *)arg1;
- (__CVBuffer *)newRotateCVPixelBuffer:(__CVBuffer *)arg1 rotation:(int)arg2;
- (void)dealloc;
- (void)stop;
- (void)createCIContext;
- (BOOL)RotateCVPixelBufferIOS16:(__CVBuffer *)arg1 destination:(__CVBuffer *)arg2 rotation:(int)arg3;
- (void)onServiceSockeReportStr:(id)arg1;
- (void)checkCurMem:(long long)arg1;
- (void)handleVideoFrameId:(long long)arg1;
- (void)createFileHandle;
- (void)clearFileHandle;
- (void)fileHanddleWriteAudioData:(id)arg1;
- (void)fileHanddleWriteVideoData:(id)arg1;
- (void)handleVideoDecoderFrameId:(long long)arg1;
- (void)clearPrivacyTimer;
- (id)replayKitManager;
- (void)setReplayKitManager:(id)arg1;
- (id)broadcastPickerView;
- (void)setBroadcastPickerView:(id)arg1;
- (id)screenRecordGuideView;
- (void)setScreenRecordGuideView:(id)arg1;
- (id)anchorRecordTipView;
- (void)setAnchorRecordTipView:(id)arg1;
- (__CVBuffer *)privacyPushPixelBuffer;
- (void)setPrivacyPushPixelBuffer:(__CVBuffer *)arg1;
- (id)videoFrame;
- (void)setVideoFrame:(id)arg1;
- (unsigned long long)lastPixelBufferTime;
- (void)setLastPixelBufferTime:(unsigned long long)arg1;
- (id)gameUserInfo;
- (void)setGameUserInfo:(id)arg1;
- (id)privacyCheckTimer;
- (void)setPrivacyCheckTimer:(id)arg1;
- (id)recordLiveFileHandle;
- (void)setRecordLiveFileHandle:(id)arg1;
- (id)recordLiveMemArray;
- (void)setRecordLiveMemArray:(id)arg1;
- (unsigned int)recordLiveMemTime;
- (void)setRecordLiveMemTime:(unsigned int)arg1;
- (CGSize)sizeOfPixelBuffer;
- (void)setSizeOfPixelBuffer:(CGSize)arg1;
- (CGSize)sizeOfPrivacyPixelBuffer;
- (void)setSizeOfPrivacyPixelBuffer:(CGSize)arg1;
- (long long)videoFrameId;
- (void)setVideoFrameId:(long long)arg1;
- (long long)videoFrameDecodeId;
- (void)setVideoFrameDecodeId:(long long)arg1;
- (long long)videoFrameLostId;
- (void)setVideoFrameLostId:(long long)arg1;
- (long long)videoFrameLostCount;
- (void)setVideoFrameLostCount:(long long)arg1;
- (long long)videoFrameDecodeLostCount;
- (void)setVideoFrameDecodeLostCount:(long long)arg1;
- (id)videoFrameLabel;
- (void)setVideoFrameLabel:(id)arg1;
- (id)rotateContext;
- (void)setRotateContext:(id)arg1;
- (long long)videoType;
- (void)setVideoType:(long long)arg1;
- (unsigned long long)lastReportStrTime;
- (void)setLastReportStrTime:(unsigned long long)arg1;
- (unsigned short)fps;
- (void)setFps:(unsigned short)arg1;
- (unsigned short)enableDatalimitsRC;
- (void)setEnableDatalimitsRC:(unsigned short)arg1;
- (void)setEncoder:(id)arg1;
- (void)setVideoFrameLock:(id)arg1;
- (BOOL)isPrivacy;
- (void)setIsPrivacy:(BOOL)arg1;
- (void).cxx_destruct;
@end
