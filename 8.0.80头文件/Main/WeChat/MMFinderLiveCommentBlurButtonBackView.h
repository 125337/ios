@interface MMFinderLiveCommentBlurButtonBackView : WCLiveBlurButtonBackView
{
    BOOL _canShowEmoticonInputButton; // +0x8
    MMUIButton * _emoticonInputButton; // +0x10
}
- (void)layoutUI;
- (void)layoutEmotionInputButton;
- (void)setCanShowEmoticonInputButton:(BOOL)arg1;
- (BOOL)canShowEmoticonInputButton;
- (id)emoticonInputButton;
- (void)setEmoticonInputButton:(id)arg1;
- (void).cxx_destruct;
@end
