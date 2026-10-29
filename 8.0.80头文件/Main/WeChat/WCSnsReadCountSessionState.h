@interface WCSnsReadCountSessionState : NSObject
{
    NSString * _sessionId; // +0x8
    NSMutableSet * _exposedFeedIds; // +0x10
}
- (id)init;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)exposedFeedIds;
- (void)setExposedFeedIds:(id)arg1;
- (void).cxx_destruct;
@end
