@interface WCAdDynamicRollTextView : WCAdRollTextView
{
    BOOL _didLayoutOnce; // +0x38
    WCAdDynamicFeedElementRollTextInfo * _styleInfo; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 styleInfo:(id)arg2;
- (void)updateDynamicStyle;
- (void)layoutSubviews;
- (BOOL)didLayoutOnce;
- (void)setDidLayoutOnce:(BOOL)arg1;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (void).cxx_destruct;
@end
