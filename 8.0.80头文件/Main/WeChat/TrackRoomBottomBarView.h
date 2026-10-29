@interface TrackRoomBottomBarView : MMUIView
{
    BOOL _isDarkMode; // +0x8
    id <TrackRoomBottomBarViewDelegate> _delegate; // +0x10
    UIView * _contentView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIView * _convTapView; // +0x28
    UIView * _voipButtonContainer; // +0x30
    UIImageView * _voipIconView; // +0x38
    UIButton * _exitButton; // +0x40
    NSArray * _userList; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)setupGestures;
- (void)layoutSubviews;
- (void)updateUserList:(id)arg1;
- (id)arrowAttributedWithFont:(id)arg1;
- (id)trailingArrowSegmentWithFont:(id)arg1;
- (long long)numberOfLinesForAttributedString:(id)arg1 maxWidth:(double)arg2;
- (unsigned long long)firstLineCharCountForString:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (double)widthOfAttributedString:(id)arg1;
- (id)attributedTitleForUserList:(id)arg1 maxWidth:(double)arg2;
- (void)onVoipButtonTap;
- (void)onConversationTap;
- (void)onExitButtonTap;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)convTapView;
- (void)setConvTapView:(id)arg1;
- (id)voipButtonContainer;
- (void)setVoipButtonContainer:(id)arg1;
- (id)voipIconView;
- (void)setVoipIconView:(id)arg1;
- (id)exitButton;
- (void)setExitButton:(id)arg1;
- (id)userList;
- (void)setUserList:(id)arg1;
- (BOOL)isDarkMode;
- (void)setIsDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
