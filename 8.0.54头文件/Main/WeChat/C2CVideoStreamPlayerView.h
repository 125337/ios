@interface C2CVideoStreamPlayerView : VideoStreamPlayerView
{
    CMessageWrap * m_oMessageWrap; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 MessageWrap:(id)arg2;
- (void)updateVideoArgs;
- (void)genThumbIfNeed;
- (id)getFormalVideoPath;
- (BOOL)isStreamingPlayMode;
- (void).cxx_destruct;
@end

