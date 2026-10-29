@interface WCFinderEventPosterViewController : MMUIViewController <WCFinderEventHeaderViewDelegate, WCFinderEventDescriptionViewControllerDelegate, WCActionSheetDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    id <WCFinderEventPosterViewControllerDelegate> _delegate; // +0x68
    unsigned long long _actionType; // +0x70
    NSString * _flowId; // +0x78
    NSString * _visitId; // +0x80
    FinderEventInfo * _eventInfo; // +0x88
    UIView * _eventBackgroundContainer; // +0x90
    MMWebImageView * _backgroundImageView; // +0x98
    UIView * _gradientView; // +0xa0
    WCFinderEventHeaderView * _headerView; // +0xa8
    MMUIButton * _actionButton; // +0xb0
}
- (id)initWithEventInfo:(id)arg1;
- (void)viewDidLoad;
- (void)updateUI;
- (BOOL)useTransparentNavibar;
- (id)eventBackgroundContainer;
- (id)gradientView;
- (id)backgroundImageView;
- (id)headerView;
- (id)actionButton;
- (void)setActionType:(unsigned long long)arg1;
- (void)genJoinButton;
- (void)genExitButton;
- (void)onClickBackItem;
- (void)actionButtonDidClick;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onEventHeaderClickAuthorInfoAction:(id)arg1;
- (void)onEventHeaderClickDescriptionDetailAction:(id)arg1;
- (void)showDescriptionJumpInfoSheet;
- (void)showDescriptionViewSheet;
- (void)onEventHeaderClickDescriptionContactAction:(id)arg1;
- (void)onEventHeaderClickMiniAppEntranceAction:(id)arg1;
- (void)finderEventDescriptionViewController:(id)arg1 didClickUrl:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)actionType;
- (id)flowId;
- (void)setFlowId:(id)arg1;
- (id)visitId;
- (void)setVisitId:(id)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (void)setEventBackgroundContainer:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end

