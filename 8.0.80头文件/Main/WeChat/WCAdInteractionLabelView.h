@interface WCAdInteractionLabelView : UIView <WCAdInteractionLabelLogicDelegate>
{
    WCAdInteractionLabelInfo * _labelInfo; // +0x8
    WCDataItem * _dataItem; // +0x10
    unsigned long long _contentItemScene; // +0x18
    WCAdInteractionLabelLogic * _labelLogic; // +0x20
    PAGView * _iconView; // +0x28
    UILabel * _titleLabel; // +0x30
    WCAdInteractionRollingLabelView * _rollingLabelView; // +0x38
}
+ (CGSize)calcViewSizeForLabelInfo:(id)arg1 maxWidth:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 labelInfo:(id)arg2 dataItem:(id)arg3 scene:(unsigned long long)arg4;
- (void)generateViews;
- (void)layoutSubviews;
- (id)iconView;
- (id)titleLabel;
- (id)fetchThemeColor;
- (id)rollingLabelView;
- (id)labelLogic;
- (void)onInteractionLabelLogicSwitchToIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)onInteractionLabelLogicSetIconPlaying:(BOOL)arg1 reset:(BOOL)arg2;
- (id)labelInfo;
- (void)setLabelInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void)setLabelLogic:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setRollingLabelView:(id)arg1;
- (void).cxx_destruct;
@end
