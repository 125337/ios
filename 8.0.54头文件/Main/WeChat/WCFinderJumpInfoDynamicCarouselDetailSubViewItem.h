@interface WCFinderJumpInfoDynamicCarouselDetailSubViewItem : NSObject
{
    BOOL _showsBorder; // +0x8
    int _type; // +0xc
    FinderJumpInfo_PartialCarouselCardStyle_SubCarouselDesc * _subDesc; // +0x10
    NSURL * _iconURL; // +0x18
    NSString * _iconName; // +0x20
    long long _iconFileType; // +0x28
    UIColor * _iconColor; // +0x30
    double _iconAlpha; // +0x38
    NSString * _detailText; // +0x40
    NSAttributedString * _detailAttributedText; // +0x48
    UIColor * _detailTextColor; // +0x50
    UIColor * _borderColor; // +0x58
    CGSize _iconSize; // +0x60
}
+ (id)defaultContentColor;
- (id)initWithSubDesc:(id)arg1;
- (id)init;
- (void)_init;
- (id)iconColor;
- (id)detailTextColor;
- (id)borderColor;
- (void)reloadViewProperties;
- (void)updateTypicalViewProperties;
- (BOOL)shouldUpdateTypicalViewPropertiesConstantly;
- (BOOL)isCountdownEnded;
- (BOOL)isCountdownEndedAtTime:(unsigned long long)arg1;
- (id)generateCountdownDetailText;
- (id)generateScoreDetailAttributedText;
- (id)subDesc;
- (int)type;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (long long)iconFileType;
- (void)setIconFileType:(long long)arg1;
- (CGSize)iconSize;
- (void)setIconSize:(CGSize)arg1;
- (void)setIconColor:(id)arg1;
- (double)iconAlpha;
- (void)setIconAlpha:(double)arg1;
- (id)detailText;
- (void)setDetailText:(id)arg1;
- (id)detailAttributedText;
- (void)setDetailAttributedText:(id)arg1;
- (void)setDetailTextColor:(id)arg1;
- (BOOL)showsBorder;
- (void)setShowsBorder:(BOOL)arg1;
- (void)setBorderColor:(id)arg1;
- (void).cxx_destruct;
@end

