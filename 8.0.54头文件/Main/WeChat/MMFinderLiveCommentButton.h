@interface MMFinderLiveCommentButton : WCLiveBottomTextButton
{
    BOOL _isSynchronizeLayout; // +0x8
    id /* block */ _commentTalkButtonDidTapBlock; // +0x10
    id /* block */ _commentButtonHiddenChangeCallback; // +0x18
    id /* block */ _commentButtonAlphaChangeCallback; // +0x20
}
- (id)getBlurButtonBackView;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (id)commentBlurBackView;
- (void)updateCanShowTalkButton:(BOOL)arg1;
- (void)onCommentTalkButtonClick;
- (id /* block */)commentTalkButtonDidTapBlock;
- (void)setCommentTalkButtonDidTapBlock:(id /* block */)arg1;
- (id /* block */)commentButtonHiddenChangeCallback;
- (void)setCommentButtonHiddenChangeCallback:(id /* block */)arg1;
- (id /* block */)commentButtonAlphaChangeCallback;
- (void)setCommentButtonAlphaChangeCallback:(id /* block */)arg1;
- (BOOL)isSynchronizeLayout;
- (void)setIsSynchronizeLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end

