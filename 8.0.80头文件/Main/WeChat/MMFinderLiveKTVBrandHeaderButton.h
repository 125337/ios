@interface MMFinderLiveKTVBrandHeaderButton : UIView
{
    id <MMFinderLiveKTVBrandHeaderButtonDelegate> _delegate; // +0x8
    MMFinderLiveKTVSongItem * _currentSongItem; // +0x10
    UIView * _brandButton; // +0x18
    UIImageView * _brandIconView; // +0x20
}
- (id)init;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupBrandView;
- (void)updateBrandLogo;
- (BOOL)updateSongItem:(id)arg1;
- (void)onClick;
- (id)brandIconView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentSongItem;
- (void)setCurrentSongItem:(id)arg1;
- (id)brandButton;
- (void)setBrandButton:(id)arg1;
- (void)setBrandIconView:(id)arg1;
- (void).cxx_destruct;
@end
