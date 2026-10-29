@interface DialectFeedbackHelper : NSObject
{
    id <DialectFeedbackHelperDelegate> _delegate; // +0x8
    VoiceMessageViewModel * _currentViewModel; // +0x10
}
+ (void)clearPendingFeedbackForChat:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)switchToMsg:(id)arg1;
- (void)restorePendingState;
- (void)saveDialectFeedbackPendingMsgId:(long long)arg1 forChat:(id)arg2;
- (long long)loadDialectFeedbackPendingMsgIdForChat:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentViewModel;
- (void)setCurrentViewModel:(id)arg1;
- (void).cxx_destruct;
@end
