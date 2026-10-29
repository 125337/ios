@interface WAMediaCastingUpnpServicePoll : NSObject
{
    id <WAMediaCastingUpnpServicePollDelegate> _delegate; // +0x8
    NSTimer * _timer; // +0x10
}
- (void)dealloc;
- (void)startPollWithTimeInterval:(double)arg1;
- (void)stopPoll;
- (void)timeTick;
- (void)callDelegate;
- (BOOL)isActive;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end

