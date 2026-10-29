@interface WCAdDynamicCountdownView : WCAdCountdownView
{
    WCAdDynamicFeedElementPromotionInfo * _styleInfo; // +0x70
}
- (id)initWithTitle:(id)arg1 endTime:(long long)arg2 maxWidth:(double)arg3 styleInfo:(id)arg4;
- (void)updateDynamicStyle;
- (void)setDynamicMaxWidth:(double)arg1;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (void).cxx_destruct;
@end

