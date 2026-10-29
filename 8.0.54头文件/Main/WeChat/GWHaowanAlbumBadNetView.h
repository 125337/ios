@interface GWHaowanAlbumBadNetView : GWHostBaseView
{
    id <GWHaowanAlbumBadNetViewDelegate> _delegate; // +0x8
    NSString * _badNetTip; // +0x10
    NSString * _reloadDesc; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)tapReloadAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)badNetTip;
- (void)setBadNetTip:(id)arg1;
- (id)reloadDesc;
- (void)setReloadDesc:(id)arg1;
- (void).cxx_destruct;
@end

