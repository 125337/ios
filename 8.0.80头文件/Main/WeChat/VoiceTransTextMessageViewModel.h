@interface VoiceTransTextMessageViewModel : TextMessageViewModel <VoiceTransLogicObserver, IMsgExt, ISendMessageExt>
{
    BOOL _didReceiveEnd; // +0xa0
    BOOL _didFail; // +0xa1
    unsigned int _loadingIndex; // +0xa4
    MMTimer * _loadingTimer; // +0xa8
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)updateUI;
- (id)cellViewClassName;
- (BOOL)isLongSplitMessage;
- (id)contentText;
- (double)tableOffsetToScroll;
- (void)adjustTableOffset:(double)arg1;
- (id)msgContent;
- (void)onVoiceTransDidEnd:(int)arg1;
- (void)deleteMsg:(id)arg1;
- (void)modMsgContent:(id)arg1;
- (void)sendMsg:(id)arg1;
- (void)onVoiceTransFail:(long long)arg1;
- (void)OnMsgSendSuccess:(id)arg1;
- (void)OnSendMessageSuccess:(id)arg1;
- (BOOL)didReceiveEnd;
- (void)setDidReceiveEnd:(BOOL)arg1;
- (unsigned int)loadingIndex;
- (void)setLoadingIndex:(unsigned int)arg1;
- (id)loadingTimer;
- (void)setLoadingTimer:(id)arg1;
- (BOOL)didFail;
- (void)setDidFail:(BOOL)arg1;
- (void).cxx_destruct;
@end
