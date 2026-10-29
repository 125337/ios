@interface MMConfSDKVideoHWenc : NSObject
{
    int mStatus; // +0x8
    int mCurEncIdx; // +0xc
    int mEncFrmCount; // +0x10
    int mEncErrCount; // +0x14
    int mEncNoRtnCount; // +0x18
    int mEncNoFrmCount; // +0x1c
    unsigned int muiHWEncExceptionMask; // +0x20
    int mIreqFlag; // +0x24
    BOOL mIsScreen; // +0x28
    OpaqueVTCompressionSession * mEncodingSession; // +0x30
    opaqueCMFormatDescription * mFormat; // +0x38
    struct * mTimingInfo; // +0x40
    _opaque_pthread_mutex_t mLock; // +0x48
    BufNode * mQHead; // +0x88
    BufNode * mQTail; // +0x90
    int mCurCodec; // +0x98
    int mFPS; // +0x9c
    int mBR; // +0xa0
    int mWidth; // +0xa4
    int mHeight; // +0xa8
    int mKeyFrmInterval; // +0xac
    int mMinQP; // +0xb0
    NSString * mErrorStr; // +0xb8
    unsigned long long mFirstFrmTs; // +0xc0
    NSRecursiveLock * mVideoHWEncLock; // +0xc8
    id <MMConfSDKVideoHWencDelegate> _mHWEncDelegate; // +0xd0
}
- (void)ClearFrameQueue;
- (void)InitAllMembers;
- (id)init;
- (void)setHWEncBR:(int)arg1;
- (void)setHWEncFPS:(int)arg1;
- (void)setHWEncKeyRequest:(int)arg1;
- (void)setHWEncMinQP:(int)arg1;
- (BOOL)GetAndSendParaSet:(opaqueCMSampleBuffer *)arg1;
- (void)GetAndSendHWStream:(opaqueCMSampleBuffer *)arg1 isKeyFrame:(BOOL)arg2;
- (int)initEncode:(int)arg1 width:(int)arg2 height:(int)arg3 bitrate:(int)arg4 framerate:(int)arg5 iFrmGap:(int)arg6 encIdx:(int)arg7 isScreen:(BOOL)arg8;
- (int)encode:(__CVBuffer *)arg1;
- (void)endEncode;
- (id)mErrorStr;
- (void)setMErrorStr:(id)arg1;
- (int)mCurCodec;
- (void)setMCurCodec:(int)arg1;
- (int)mFPS;
- (void)setMFPS:(int)arg1;
- (int)mBR;
- (void)setMBR:(int)arg1;
- (int)mWidth;
- (void)setMWidth:(int)arg1;
- (int)mHeight;
- (void)setMHeight:(int)arg1;
- (int)mKeyFrmInterval;
- (void)setMKeyFrmInterval:(int)arg1;
- (int)mMinQP;
- (void)setMMinQP:(int)arg1;
- (unsigned long long)mFirstFrmTs;
- (void)setMFirstFrmTs:(unsigned long long)arg1;
- (id)mVideoHWEncLock;
- (void)setMVideoHWEncLock:(id)arg1;
- (id)mHWEncDelegate;
- (void)setMHWEncDelegate:(id)arg1;
- (void).cxx_destruct;
@end

