@interface WCAdBreakFrameReportInfo : NSObject
{
    unsigned int _videoSeekCount; // +0x8
    WCADVideoPlayInfo * _playInfo; // +0x10
}
- (id)init;
- (id)playInfo;
- (void)setPlayInfo:(id)arg1;
- (unsigned int)videoSeekCount;
- (void)setVideoSeekCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
