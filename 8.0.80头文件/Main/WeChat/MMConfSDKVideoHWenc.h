@interface MMConfSDKVideoHWenc : NSObject
{
    int mStatus; // +0x8
    int mEncScene; // +0xc
    int mReinitGap; // +0x10
    int mCurEncIdx; // +0x14
    int mEncFrmCount; // +0x18
    int mEncErrCount; // +0x1c
    int mEncNoRtnCount; // +0x20
    int mEncNoFrmCount; // +0x24
    unsigned int muiHWEncExceptionMask; // +0x28
    int mIreqFlag; // +0x2c
    BOOL mIsScreen; // +0x30
    OpaqueVTCompressionSession * mEncodingSession; // +0x38
    opaqueCMFormatDescription * mFormat; // +0x40
    struct * mTimingInfo; // +0x48
    _opaque_pthread_mutex_t mLock; // +0x50
    BufNode * mQHead; // +0x90
    BufNode * mQTail; // +0x98
    unsigned long long mFirstFrmTs; // +0xa0
    unsigned long long mLastFrmTs; // +0xa8
    int mCurCodec; // +0xb0
    int mFPS; // +0xb4
    int mBR; // +0xb8
    int mWidth; // +0xbc
    int mHeight; // +0xc0
    int mKeyFrmInterval; // +0xc4
    int mMinQP; // +0xc8
    int mHpp; // +0xcc
    NSString * mErrorStr; // +0xd0
    NSRecursiveLock * mVideoHWEncLock; // +0xd8
    id <MMConfSDKVideoHWencDelegate> _mHWEncDelegate; // +0xe0
}
+ (IWXConfService *)getConfInst;
- (void)ClearFrameQueue;
- (void)InitAllMembers;
- (id)init;
- (void)setHWEncBR_Common:(int)arg1 bLock:(BOOL)arg2;
- (void)setHWEncBR:(int)arg1;
- (void)setHWEncFPS_Common:(int)arg1 bLock:(BOOL)arg2;
- (void)setHWEncFPS:(int)arg1;
- (void)setHWEncKeyRequest:(int)arg1;
- (void)setHWEncMinQP:(int)arg1;
- (BOOL)GetAndSendParaSet:(opaqueCMSampleBuffer *)arg1;
- (void)GetAndSendHWStream:(opaqueCMSampleBuffer *)arg1 isKeyFrame:(BOOL)arg2;
- (int)initEncode:(int)arg1 width:(int)arg2 height:(int)arg3 bitrate:(int)arg4 framerate:(int)arg5 iFrmGap:(int)arg6 encIdx:(int)arg7 isScreen:(BOOL)arg8 encScene:(int)arg9 hppLayer:(int)arg10;
- (int)encode:(__CVBuffer *)arg1;
- (void)endEncode;
- (void)forcePopFrame;
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
- (int)mHpp;
- (void)setMHpp:(int)arg1;
- (id)mVideoHWEncLock;
- (void)setMVideoHWEncLock:(id)arg1;
- (id)mHWEncDelegate;
- (void)setMHWEncDelegate:(id)arg1;
- (void).cxx_destruct;
@end
