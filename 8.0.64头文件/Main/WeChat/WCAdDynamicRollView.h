@interface WCAdDynamicRollView : WCAdRollView
{
    WCAdDynamicFeedElementRollTextInfo * _styleInfo; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 iconUrl:(id)arg3 textList:(id)arg4 styleInfo:(id)arg5;
- (void)updateDynamicStyle;
- (void)updateDynamicRollTextWithTextList:(id)arg1;
- (void)layoutSubviews;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (void).cxx_destruct;
@end
