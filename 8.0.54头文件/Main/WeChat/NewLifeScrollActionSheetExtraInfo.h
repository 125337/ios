@interface NewLifeScrollActionSheetExtraInfo : NSObject
{
    BOOL _fastForward; // +0x8
    NSString * _forwardUsername; // +0x10
    NSString * _timelineSessionId; // +0x18
}
- (BOOL)fastForward;
- (void)setFastForward:(BOOL)arg1;
- (id)forwardUsername;
- (void)setForwardUsername:(id)arg1;
- (id)timelineSessionId;
- (void)setTimelineSessionId:(id)arg1;
- (void).cxx_destruct;
@end

