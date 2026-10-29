@interface FTSVoiceSearchSession : NSObject
{
    BOOL _hasReportedEnd; // +0x8
    NSString * _gestureId; // +0x10
}
- (id)initWithGestureId:(id)arg1;
- (id)gestureId;
- (BOOL)hasReportedEnd;
- (void)setHasReportedEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end
