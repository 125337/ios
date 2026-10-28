@interface TextStateHeaderSectionView : TextStateSectionView
{
    BOOL _shouldShowLocationDistance; // +0x8
    unsigned int _type; // +0xc
    TextStateModel * _textState; // +0x10
    id /* block */ _operateButtonHandler; // +0x18
    MMUIButton * _operateButton; // +0x20
    MMUIButton * _moreButton; // +0x28
    MMUIButton * _contactButton; // +0x30
    MMHeadImageView * _headImageView; // +0x38
    MMUILabel * _nicknameLabel; // +0x40
    MMUILabel * _shortTimeLabel; // +0x48
    MMUIImageView * _liveImageView; // +0x50
    MMExpandImageView * _privacyImageView; // +0x58
    id <WCStatusViewDelegate> _statusViewDelegate; // +0x60
    id /* block */ _moreButtonHandler; // +0x68
    id /* block */ _contactButtonHandler; // +0x70
    UIEdgeInsets _insets; // +0x78
}
+ (id)standardMoreButton;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setTextState:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setShouldShowLocationDistance:(BOOL)arg1;
- (void)setInsets:(UIEdgeInsets)arg1;
- (void)addMoreButtonWithHandler:(id /* block */)arg1;
- (void)addMoreButton:(id)arg1 withHandler:(id /* block */)arg2;
- (void)removeMoreButton;
- (BOOL)hasMoreButton;
- (void)updateSubview;
- (void)updateLayout;
- (BOOL)hasOperateButton;
- (void)updateData;
- (void)updateLive;
- (void)updateTimeAndLocation;
- (void)updateContact;
- (void)updatePrivacyView;
- (void)imageViewTapped:(id)arg1;
- (void)setStatusViewDelegate:(id)arg1;
- (void)updateVoiceOver;
- (id)liveImageView;
- (id)privacyImageView;
- (id)contactButton;
- (id)headImageView;
- (id)nicknameLabel;
- (id)shortTimeLabel;
- (id)operateButton;
- (void)setOperateButtonHandler:(id /* block */)arg1;
- (void)onTapContactButton;
- (void)onTapMoreButton;
- (id)textState;
- (id /* block */)operateButtonHandler;
- (unsigned int)type;
- (void)setOperateButton:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (BOOL)shouldShowLocationDistance;
- (UIEdgeInsets)insets;
- (void)setContactButton:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setShortTimeLabel:(id)arg1;
- (void)setLiveImageView:(id)arg1;
- (void)setPrivacyImageView:(id)arg1;
- (id)statusViewDelegate;
- (id /* block */)moreButtonHandler;
- (void)setMoreButtonHandler:(id /* block */)arg1;
- (id /* block */)contactButtonHandler;
- (void)setContactButtonHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
