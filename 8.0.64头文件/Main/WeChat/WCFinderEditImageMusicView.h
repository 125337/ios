@interface WCFinderEditImageMusicView : MMUIView
{
    WCFinderMelodyView * _melodyImageView; // +0x8
    UIImageView * _arrowImageView; // +0x10
    UILabel * _chooseBGMTipsLabel; // +0x18
    UILabel * _durationLabel; // +0x20
    UILabel * _songInfoLabel; // +0x28
}
+ (double)getImageMusicViewWidthWith:(id)arg1 useEduTips:(BOOL)arg2 screenSize:(CGSize)arg3 duration:(int)arg4 hiddenArrow:(BOOL)arg5;
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpSubViews;
- (void)initDurationLabel;
- (void)initMelodyImageView;
- (void)initSongInfoLabel;
- (void)initArrowImageView;
- (void)initChooseBGMTipsLabel;
- (void)updateContentViewWith:(id)arg1 useEduTips:(BOOL)arg2 screenSize:(CGSize)arg3 duration:(int)arg4 hiddenArrow:(BOOL)arg5;
- (id)melodyImageView;
- (void)setMelodyImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)chooseBGMTipsLabel;
- (void)setChooseBGMTipsLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)songInfoLabel;
- (void)setSongInfoLabel:(id)arg1;
- (void).cxx_destruct;
@end
