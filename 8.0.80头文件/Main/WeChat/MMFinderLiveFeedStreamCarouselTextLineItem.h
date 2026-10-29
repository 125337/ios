@interface MMFinderLiveFeedStreamCarouselTextLineItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>
{
    BOOL _hideTitle; // +0x10
    BOOL _showHardAdLogo; // +0x11
    NSString * _title; // +0x18
    unsigned long long _maxLineNum; // +0x20
    NSString * _customPrefixLabel; // +0x28
}
- (unsigned long long)cellType;
- (unsigned long long)duration;
- (unsigned long long)uiStyle;
- (id)itemIdentifier;
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)hideTitle;
- (void)setHideTitle:(BOOL)arg1;
- (BOOL)showHardAdLogo;
- (void)setShowHardAdLogo:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)maxLineNum;
- (void)setMaxLineNum:(unsigned long long)arg1;
- (id)customPrefixLabel;
- (void)setCustomPrefixLabel:(id)arg1;
- (void).cxx_destruct;
@end
