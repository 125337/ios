@interface MMFinderLiveCommentBlurButtonBackView : WCLiveBlurButtonBackView
{
    BOOL _canShowTalkButton; // +0x8
    UIView * _seperateLineView; // +0x10
    MMUIButton * _commentTalkButton; // +0x18
}
- (void)layoutUI;
- (void)layoutCommentTalkButton;
- (void)layoutSeperateLineView;
- (void)setCanShowTalkButton:(BOOL)arg1;
- (BOOL)canShowTalkButton;
- (id)seperateLineView;
- (void)setSeperateLineView:(id)arg1;
- (id)commentTalkButton;
- (void)setCommentTalkButton:(id)arg1;
- (void).cxx_destruct;
@end

