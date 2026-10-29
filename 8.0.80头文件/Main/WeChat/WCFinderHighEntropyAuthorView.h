@interface WCFinderHighEntropyAuthorView : UIView
{
    id <WCFinderHighEntropyAuthorViewDelegate> _delegate; // +0x8
    UILabel * _nicknameLabel; // +0x10
    WCFinderAuthInfoIconView * _authView; // +0x18
    UILabel * _relationTagLabel; // +0x20
    UILabel * _timeLabel; // +0x28
    NSString * _currentUserName; // +0x30
    WCFinderFeedContentVM * _currentContentVM; // +0x38
}
+ (double)viewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateFonts;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithContentVM:(id)arg1;
- (void)onNicknameTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)authView;
- (void)setAuthView:(id)arg1;
- (id)relationTagLabel;
- (void)setRelationTagLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)currentUserName;
- (void)setCurrentUserName:(id)arg1;
- (id)currentContentVM;
- (void)setCurrentContentVM:(id)arg1;
- (void).cxx_destruct;
@end
