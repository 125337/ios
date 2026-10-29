@interface MMConfSDKVideoHWdec : NSObject
{
    int mStatus; // +0x8
    int mDecErrCount; // +0xc
    opaqueCMFormatDescription * m_videoFormatDes; // +0x10
    OpaqueVTDecompressionSession * m_session; // +0x18
    vector<unsigned char, std::allocator<unsigned char>> m_avcCData; // +0x20
    OpaqueCMBlockBuffer * m_videoBlock; // +0x38
    opaqueCMSampleBuffer * m_sampleBuffer; // +0x40
    int mCodecType; // +0x48
    int mFormat; // +0x4c
    int mOffset; // +0x50
    char * mHWYUVbuffer; // +0x58
    unsigned long long mHWYUVLength; // +0x60
    BOOL mCallbackErrorOccured; // +0x68
    int mMemberID; // +0x6c
    NSRecursiveLock * mVideoHWDecLock; // +0x70
    NSString * _mErrorStr; // +0x78
    id <MMConfSDKVideoHWdecDelegate> _mHWDecDelegate; // +0x80
}
- (void)InitAllMembers;
- (id)init;
- (void)dealloc;
- (int)createVideoFormatDes:(int)arg1 pXPSData:(const char *)arg2 dataLen:(int)arg3;
- (int)createSampleBufferBlock:(const char *)arg1 dataLen:(int)arg2;
- (int)decodeOneFrame:(const char *)arg1 dataLen:(int)arg2;
- (void)RenderImg:(__CVBuffer *)arg1;
- (int)UpdateHWDecSession;
- (void)releaseSampleBufferBlock;
- (int)initDecode:(int)arg1;
- (int)decode:(const char *)arg1 dataLen:(int)arg2 codecType:(int)arg3 frameType:(int)arg4 format:(int)arg5;
- (void)endDecode;
- (BOOL)CanUse;
- (int)mMemberID;
- (void)setMMemberID:(int)arg1;
- (BOOL)mCallbackErrorOccured;
- (void)setMCallbackErrorOccured:(BOOL)arg1;
- (id)mVideoHWDecLock;
- (void)setMVideoHWDecLock:(id)arg1;
- (id)mErrorStr;
- (void)setMErrorStr:(id)arg1;
- (id)mHWDecDelegate;
- (void)setMHWDecDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

