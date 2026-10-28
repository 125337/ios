@interface MMMusicLiveVCTopBarView : UIView
{
    id <MMMusicLiveVCTopBarViewDelegate> _delegate; // +0x8
    UIImageView * _backView; // +0x10
    WCLiveBlurButton * _closeButton; // +0x18
    MMUILabel * _titleView; // +0x20
    MMUIButton * _musicianView; // +0x28
    MMMusicLiveVCTopBarMusicSourceButton * _musicSourceButton; // +0x30
    MusicAudioTypeButton * _audioTypeButton; // +0x38
    MusicSourceViewInfo * _musicSourceViewInfo; // +0x40
    MusicLiveGetSongStatusResp_MusicianInfo * _musician; // +0x48
    double _titleMaxWidth; // +0x50
}
- (id)initWithDelegate:(id)arg1;
- (id)iconImageFromDelegate;
- (id)appNameFromDelegate;
- (void)reloadData;
- (void)setupSourceViewInfo;
- (void)layoutSubviews;
- (BOOL)canJumpMusician;
- (void)customLayout;
- (void)layoutSubviewsIfClear:(BOOL)arg1;
- (void)setTitleText:(id)arg1 singer:(id)arg2;
- (void)setMusician:(id)arg1;
- (void)onClickAudioTypeButton;
- (void)onSourceViewBtnClicked:(id)arg1;
- (void)onClickCloseBtn;
- (void)onClickMusician;
- (id)musicSourceButton;
- (id)closeButton;
- (id)titleView;
- (id)musicianView;
- (id)audioTypeButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backView;
- (void)setBackView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setMusicianView:(id)arg1;
- (void)setMusicSourceButton:(id)arg1;
- (void)setAudioTypeButton:(id)arg1;
- (id)musicSourceViewInfo;
- (void)setMusicSourceViewInfo:(id)arg1;
- (id)musician;
- (double)titleMaxWidth;
- (void)setTitleMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end
