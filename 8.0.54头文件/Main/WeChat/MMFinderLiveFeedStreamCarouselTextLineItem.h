@interface MMFinderLiveFeedStreamCarouselTextLineItem : MMFinderLiveFeedStreamCarouselBaseItem <MMFinderLiveFeedStreamCarouselItemProtocol>
{
    BOOL _hideTitle; // +0x10
    BOOL _showHardAdLogo; // +0x11
    NSString * _title; // +0x18
}
- (unsigned long long)type;
- (unsigned long long)duration;
- (unsigned long long)uiStyle;
- (id)itemIdentifier;
- (id)description;
- (BOOL)hideTitle;
- (void)setHideTitle:(BOOL)arg1;
- (BOOL)showHardAdLogo;
- (void)setShowHardAdLogo:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

