@interface MMMusicLiveVCTopBarMusicSourceButton : MMUIButton
{
    UIImageView * _musicSourceIconView; // +0x8
    MMUILabel * _musicSourceLabel; // +0x10
    UIImageView * _musicSourceArrow; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 iconImage:(id)arg2 appName:(id)arg3;
- (void)layoutSubviews;
- (void)reloadWithIconImage:(id)arg1 appName:(id)arg2;
- (id)musicSourceLabel;
- (id)musicSourceIconView;
- (id)musicSourceArrow;
- (void)setMusicSourceIconView:(id)arg1;
- (void)setMusicSourceLabel:(id)arg1;
- (void)setMusicSourceArrow:(id)arg1;
- (void).cxx_destruct;
@end
