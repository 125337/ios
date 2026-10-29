@interface WCFinderProfileMuiscRadioRightButtonStyleView : UIView <ILinkEventExt>
{
    BOOL _displayCoveredMode; // +0x8
    int _scene; // +0xc
    id /* block */ _onTapCallBack; // +0x10
    id /* block */ _onJumpMusicianCategoryCallBack; // +0x18
    UIButton * _bgCircleView; // +0x20
    UIImageView * _playBtnView; // +0x28
    MMUILabel * _playWordingLabel; // +0x30
    MMUILabel * _radioTitleLabel; // +0x38
    RichTextView * _consumeDataLabel; // +0x40
    UIImageView * _coverView; // +0x48
    UIView * _highlightMask; // +0x50
    MMListenFinderSingerProfileShowInfo * _showInfo; // +0x58
    MMListenCategoryItem * _singerRadioCategory; // +0x60
    RichTextView * _extraDescLabel; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onTapPlay;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setDisplayCoveredMode:(BOOL)arg1;
- (BOOL)showDarkStyle;
- (void)applyRadioInfo:(id)arg1;
- (id)genRichText:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)genReportParams;
- (BOOL)displayCoveredMode;
- (int)scene;
- (void)setScene:(int)arg1;
- (id /* block */)onTapCallBack;
- (void)setOnTapCallBack:(id /* block */)arg1;
- (id /* block */)onJumpMusicianCategoryCallBack;
- (void)setOnJumpMusicianCategoryCallBack:(id /* block */)arg1;
- (id)bgCircleView;
- (void)setBgCircleView:(id)arg1;
- (id)playBtnView;
- (void)setPlayBtnView:(id)arg1;
- (id)playWordingLabel;
- (void)setPlayWordingLabel:(id)arg1;
- (id)radioTitleLabel;
- (void)setRadioTitleLabel:(id)arg1;
- (id)consumeDataLabel;
- (void)setConsumeDataLabel:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)highlightMask;
- (void)setHighlightMask:(id)arg1;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (id)singerRadioCategory;
- (void)setSingerRadioCategory:(id)arg1;
- (id)extraDescLabel;
- (void)setExtraDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

