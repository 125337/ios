@interface MMFinderLiveShopShelfItemReplayInvalidTipsView : UIView
{
    MMWebImageView * _iconView; // +0x8
    UILabel * _label; // +0x10
}
+ (double)preferHeight;
+ (BOOL)willDisplayWithReplayInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithReplayInfo:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end
