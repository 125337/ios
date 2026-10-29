@interface WCFinderProfileMusicViewCollectionCell : WCFinderSlideMenuCell
{
    BOOL _showSeperator; // +0x8
    BOOL _allowSlideDelete; // +0x9
    WCFinderProfileMusicView * _musicView; // +0x10
    UIView * _seperator; // +0x18
}
+ (double)displayHeightWithIndexPath:(id)arg1;
- (id)musicView;
- (id)displayContentView;
- (void)prepareForReuse;
- (void)setShowSeperator:(BOOL)arg1;
- (void)layoutSubviews;
- (id)curThumbImage;
- (void)setAllowSlideDelete:(BOOL)arg1;
- (void)onSlideDelete;
- (void)onSlideMenuExpose:(id)arg1;
- (void)setMusicView:(id)arg1;
- (BOOL)showSeperator;
- (BOOL)allowSlideDelete;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (void).cxx_destruct;
@end

