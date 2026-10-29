@interface WeClawBotStatusRequest : NSObject
{
    id <WeClawBotStatusRequestDelegate> _delegate; // +0x8
    NSString * _username; // +0x10
}
- (id)initWithUsername:(id)arg1;
- (void)startRequest;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (void).cxx_destruct;
@end
