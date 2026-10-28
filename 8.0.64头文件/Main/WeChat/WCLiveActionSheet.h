@interface WCLiveActionSheet : WCActionSheet <ILinkEventExt>
{
    NSString * _richTitle; // +0x8
    id _extraInfo; // +0x10
    RichTextView * _richTitleLabel; // +0x18
}
+ (long long)getActionSheetWidth;
- (long long)actionSheetWidth;
- (double)containerViewOriginXInIphone;
- (id)containerViewBackgroundColor;
- (id)titleViewBackgroundColor;
- (id)sepBarBackgroundColor;
- (id)seperateLineBackgroundColor;
- (id)titleLabelTextColor;
- (id)buttonBackgroundColor;
- (id)buttonHighlightedBackgroundColor;
- (id)defaultButtonTitleColor;
- (id)cancelButtonTitleColor;
- (id)getCustomHeadView;
- (void)showInView:(id)arg1;
- (void)onDismissCompletelyWithClickedButtonIndex:(long long)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (id)richTitle;
- (void)setRichTitle:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)richTitleLabel;
- (void)setRichTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
