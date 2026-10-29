@interface MMGrowTextViewExtConfig : NSObject
{
    BOOL _enableColorTopicTag; // +0x8
    BOOL _enableInputSharpHelperMenu; // +0x9
    BOOL _enableTopicSearchMenu; // +0xa
    BOOL _enableTranslateTool; // +0xb
    BOOL _enableFullScreenInput; // +0xc
    BOOL _disableBackgroundImageInsets; // +0xd
    BOOL _disableLineFragmentPadding; // +0xe
    BOOL _enablePlaceholderPinText; // +0xf
    BOOL _useDefaultReturnKey; // +0x10
    BOOL _donotNeedTextViewContentTopBottomInset; // +0x11
    UIColor * _topicColor; // +0x18
}
- (BOOL)enableColorTopicTag;
- (void)setEnableColorTopicTag:(BOOL)arg1;
- (BOOL)enableInputSharpHelperMenu;
- (void)setEnableInputSharpHelperMenu:(BOOL)arg1;
- (BOOL)enableTopicSearchMenu;
- (void)setEnableTopicSearchMenu:(BOOL)arg1;
- (BOOL)enableTranslateTool;
- (void)setEnableTranslateTool:(BOOL)arg1;
- (BOOL)enableFullScreenInput;
- (void)setEnableFullScreenInput:(BOOL)arg1;
- (id)topicColor;
- (void)setTopicColor:(id)arg1;
- (BOOL)disableBackgroundImageInsets;
- (void)setDisableBackgroundImageInsets:(BOOL)arg1;
- (BOOL)disableLineFragmentPadding;
- (void)setDisableLineFragmentPadding:(BOOL)arg1;
- (BOOL)enablePlaceholderPinText;
- (void)setEnablePlaceholderPinText:(BOOL)arg1;
- (BOOL)useDefaultReturnKey;
- (void)setUseDefaultReturnKey:(BOOL)arg1;
- (BOOL)donotNeedTextViewContentTopBottomInset;
- (void)setDonotNeedTextViewContentTopBottomInset:(BOOL)arg1;
- (void).cxx_destruct;
@end

