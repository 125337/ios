@interface MMLiveBeautyControlPanelItem : NSObject
{
    BOOL _applyBlurring; // +0x8
    NSString * _label; // +0x10
    UIColor * _backgroundColor; // +0x18
    MMLiveBeautyBadgeItem * _badge; // +0x20
    id _rawItem; // +0x28
}
- (id)label;
- (void)setLabel:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)applyBlurring;
- (void)setApplyBlurring:(BOOL)arg1;
- (id)badge;
- (void)setBadge:(id)arg1;
- (id)rawItem;
- (void)setRawItem:(id)arg1;
- (void).cxx_destruct;
@end
