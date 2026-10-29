@interface WCFinderLiveHomePageNoticeCell : WCFinderLiveFeedBaseStyleableCell <WCActionSheetDelegate, WCFinderLiveGenericFeedVMDelegate, MMWebImageViewDelegate, WCFinderLiveFeedGenericCardCellProtocol, WCFinderLiveFeedGenericCoverReportProtocol>
{
    int _commentScene; // +0x8
    id <WCFinderLiveHomePageNoticeCellDelegate> _delegate; // +0x10
    MMWebImageView * _coverImageView; // +0x18
    UIImageView * _logoView; // +0x20
    UILabel * _noticeTitleLabel; // +0x28
    WCFinderHeadImageView * _avatarImageView; // +0x30
    UILabel * _nicknameLabel; // +0x38
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x40
    UILabel * _noticeTimeLabel; // +0x48
    UILabel * _noticeDescLabel; // +0x50
    MMLiveIconButton * _actionButton; // +0x58
    UIView * _coverMaskView; // +0x60
    WCFinderLiveGenericFeedVM * _feedVM; // +0x68
    unsigned long long _containerId; // +0x70
    WCFinderLiveFeedGenericCoverReportInfo * _coverReportInfo; // +0x78
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)updateStyle;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)arg1;
- (void)initViews;
- (BOOL)showLogo;
- (void)setFrame:(CGRect)arg1;
- (void)layoutUI;
- (void)onActionButtonClicked:(id)arg1;
- (void)updateActionButton;
- (void)updateActionButtonForConcert;
- (void)presentConcertTicketForNoticeInfo:(id)arg1 byViewController:(id)arg2;
- (void)onFeedNoticeCardStatusUpdate;
- (void)onFeedNoticeCardCheckPresentConcertTicket;
- (void)onLoadImageOK:(id)arg1;
- (id)getCoverReportInfo;
- (void)resetCoverReportInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (id)noticeTitleLabel;
- (void)setNoticeTitleLabel:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)noticeTimeLabel;
- (void)setNoticeTimeLabel:(id)arg1;
- (id)noticeDescLabel;
- (void)setNoticeDescLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)coverMaskView;
- (void)setCoverMaskView:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (unsigned long long)containerId;
- (void)setContainerId:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)coverReportInfo;
- (void)setCoverReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
