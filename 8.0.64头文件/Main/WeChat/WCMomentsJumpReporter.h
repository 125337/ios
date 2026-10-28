@interface WCMomentsJumpReporter : NSObject
{
    WCMomentsJumpData * _jumpData; // +0x8
}
- (void)report;
- (id)getEventId:(long long)arg1;
- (id)jumpData;
- (void)setJumpData:(id)arg1;
- (void).cxx_destruct;
@end
