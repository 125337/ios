@interface MMFinderLiveCommentBlurButtonBackView : WCLiveBlurButtonBackView
{
    BOOL _canShowTalkButton; // +0x8
    BOOL _canShowEmoticonInputButton; // +0x9
    UIView * _seperateLineView; // +0x10
    MMUIButton * _commentTalkButton; // +0x18
    MMUIButton * _emoticonInputButton; // +0x20
}
- (void)layoutUI;
- (void)layoutCommentTalkButton;
- (void)layoutSeperateLineView;
- (void)layoutEmotionInputButton;
- (void)setCanShowTalkButton:(BOOL)arg1;
- (void)setCanShowEmoticonInputButton:(BOOL)arg1;
- (BOOL)canShowTalkButton;
- (BOOL)canShowEmoticonInputButton;
- (id)seperateLineView;
- (void)setSeperateLineView:(id)arg1;
- (id)commentTalkButton;
- (void)setCommentTalkButton:(id)arg1;
- (id)emoticonInputButton;
- (void)setEmoticonInputButton:(id)arg1;
- (void).cxx_destruct;
@end
