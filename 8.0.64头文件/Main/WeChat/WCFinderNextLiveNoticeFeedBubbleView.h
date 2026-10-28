@interface WCFinderNextLiveNoticeFeedBubbleView : WCFinderFeedBubbleView <WCFinderJumpInfoViewProtocol>
{
    BOOL _nextLiveReserved; // +0x8
    WCFinderInteractivePanelConfigParamsModel * _paramsModel; // +0x10
}
- (void)updateButtonTitle:(id)arg1 image:(id)arg2;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)onClickActionButton;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (BOOL)nextLiveReserved;
- (void)setNextLiveReserved:(BOOL)arg1;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (void).cxx_destruct;
@end
