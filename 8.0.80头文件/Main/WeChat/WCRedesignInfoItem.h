@interface WCRedesignInfoItem : WCRedesignBaseItem
{
    NSString * _subtitle; // +0x40
    UIColor * _subtitleColor; // +0x48
    MMUILabel * _subtitleLabel; // +0x50
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)initContentView;
- (void)onLayoutContentViewSubviews;
- (void)setM_title:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleColor:(id)arg1;
- (id)getValue;
- (void)updateSubtitle;
- (void)updateAccessibility;
- (id)subtitle;
- (id)subtitleColor;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
