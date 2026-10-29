@interface ChatBotVoIPAskAIAsstTalkingView : ChatBotVoIPTalkingView <MMImageLoaderObserver, ChatBotReCommendMsgViewDelegate>
{
    CMessageWrap * _transferMsg; // +0x8
    UIImageView * _backgroundView; // +0x10
    MMUIButton * _closeBtn; // +0x18
    MMUILabel * _asstNameLabel; // +0x20
    MMHeadImageView * _headView; // +0x28
    UIStackView * _topStackView; // +0x30
    MMUILabel * _topicLabel; // +0x38
    UIView * _separator; // +0x40
    ChatBotReCommendMsgView * _recommendMsgView; // +0x48
}
- (void)layoutContentViews;
- (void)layoutBackgroud;
- (void)layoutCloseBtn;
- (void)layoutHeadImageView;
- (void)layoutTopStackView;
- (void)layoutTopicLabel;
- (void)layoutBoardView;
- (void)layoutBlurView;
- (void)layoutDramaVideoListView;
- (void)layoutEnterHistoryDramaBtn;
- (void)layoutDramaTopicLabel;
- (void)layoutGoBackLatestDramaBtn;
- (id)transferCMessageWrapToTopic:(id)arg1;
- (void)layoutBottomPanel;
- (void)updateHeadImgWithUrl:(id)arg1;
- (void)layoutRecommendMsgView;
- (void)modifySideInfoWhenSendWelcome:(id)arg1;
- (void)openMic;
- (void)tryHideRecommendMsgView;
- (void)onRecvStreamText:(id)arg1 textSeq:(int)arg2 textOutputSource:(int)arg3 identifier:(id)arg4 traceMsgid:(id)arg5 appTraceId:(id)arg6;
- (void)openTextInputMode;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)onClickRecommendMsg:(id)arg1;
- (void)onRecvRecommendMsgInfo:(id)arg1;
- (id)transferMsg;
- (void)setTransferMsg:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)asstNameLabel;
- (void)setAsstNameLabel:(id)arg1;
- (id)headView;
- (void)setHeadView:(id)arg1;
- (id)topStackView;
- (void)setTopStackView:(id)arg1;
- (id)topicLabel;
- (void)setTopicLabel:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (id)recommendMsgView;
- (void)setRecommendMsgView:(id)arg1;
- (void).cxx_destruct;
@end
