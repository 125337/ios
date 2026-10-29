@interface WCFinderVideoDragProgressReporter : NSObject
{
    BOOL _isPcr90; // +0x8
    BOOL _isPause; // +0x9
    BOOL _isDrag; // +0xa
    int _commentScene; // +0xc
    double _timePointBeforeDpb; // +0x10
    double _timePointAfterDpb; // +0x18
    long long _screenType; // +0x20
    NSString * _feedId; // +0x28
    double _videoDurationTime; // +0x30
    unsigned long long _dragStyle; // +0x38
}
- (void)report;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)isPcr90;
- (void)setIsPcr90:(BOOL)arg1;
- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg1;
- (double)timePointBeforeDpb;
- (void)setTimePointBeforeDpb:(double)arg1;
- (double)timePointAfterDpb;
- (void)setTimePointAfterDpb:(double)arg1;
- (long long)screenType;
- (void)setScreenType:(long long)arg1;
- (BOOL)isDrag;
- (void)setIsDrag:(BOOL)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (double)videoDurationTime;
- (void)setVideoDurationTime:(double)arg1;
- (unsigned long long)dragStyle;
- (void)setDragStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

