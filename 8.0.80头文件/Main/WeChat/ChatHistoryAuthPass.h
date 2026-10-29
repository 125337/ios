@interface ChatHistoryAuthPass : NSObject
{
    ChatHistoryAuthOutcome * _outcome; // +0x8
    ChatHistoryAuthQueryScope * _scope; // +0x10
}
+ (id)pass;
- (id)outcome;
- (void)setOutcome:(id)arg1;
- (id)scope;
- (void)setScope:(id)arg1;
- (void).cxx_destruct;
@end
