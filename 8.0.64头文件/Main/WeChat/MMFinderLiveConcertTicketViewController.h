@interface MMFinderLiveConcertTicketViewController : MMCPUIViewController <MMFinderLiveConcertTicketViewDelegate, MMScrollActionSheetDelegate, MMFinderLiveConcertRecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    MMFinderLiveConcertTicketStyleItem * _styleItem; // +0x70
    id <MMFinderLiveConcertTicketViewControllerDelegate> _delegate; // +0x78
    UIImageView * _backgroundView; // +0x80
    MMFinderLiveConcertTicketView * _ticketView; // +0x88
    MMUIButton * _shareButton; // +0x90
    UIView * _bottomButtonsContainerView; // +0x98
    NSArray * _bottomButtonsSeparators; // +0xa0
    MMUIButton * _nextStyleButton; // +0xa8
    MMUIButton * _saveImageButton; // +0xb0
    MMScrollActionSheet * _shareActionSheetForImageContent; // +0xb8
    MMFinderLiveConcertRecentForwardScrollViewDelegateProxy * _recentForwardDelegateProxyForImageContent; // +0xc0
    MMScrollActionSheet * _shareActionSheetForWebPageContent; // +0xc8
    MMFinderLiveConcertRecentForwardScrollViewDelegateProxy * _recentForwardDelegateProxyForWebPageContent; // +0xd0
    ForwardMessageLogicController * _forwardLogic; // +0xd8
    MMFinderLiveConcertTicketViewControllerReportingContext * _reportingContext; // +0xe0
    unsigned long long _sourceScene; // +0xe8
    MMUIButton * _itemButton; // +0xf0
    NSString * _currentItemUrl; // +0xf8
}
- (id)initWithSourceScene:(unsigned long long)arg1 reportingContext:(id)arg2;
- (id)shareActionSheetForImageContent;
- (id)shareActionSheetForWebPageContent;
- (void)updateWithTicketStyleItem:(id)arg1 hasOtherStyles:(BOOL)arg2;
- (void)playEntryAnimation;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onShareButtonTapped;
- (void)onNextStyleButtonTapped;
- (void)onSaveImageButtonTapped;
- (void)onItemButtonTapped;
- (void)onTicketViewReadyForDisplay:(id)arg1;
- (void)onTicketViewLoadFailed:(id)arg1;
- (void)onTicketViewExternalNavigationRequested:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1 proxy:(id)arg2;
- (void)relayoutScrollSheetForProxy:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)initializeComponents;
- (void)initializeShareActionSheetForImageContent;
- (void)initializeShareActionSheetForWebPageContent;
- (void)shareTicketWebPage;
- (void)shareTicketImage;
- (void)shareToChat:(id)arg1 contentType:(unsigned long long)arg2;
- (void)shareToMomentWithContentType:(unsigned long long)arg1;
- (BOOL)needPageItem;
- (BOOL)webPageShareAvailable;
- (id)shareActionSheetForContentType:(unsigned long long)arg1;
- (id)webPageShareUriForTarget:(unsigned long long)arg1;
- (id)styleItem;
- (void)setStyleItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)ticketView;
- (void)setTicketView:(id)arg1;
- (id)shareButton;
- (void)setShareButton:(id)arg1;
- (id)bottomButtonsContainerView;
- (void)setBottomButtonsContainerView:(id)arg1;
- (id)bottomButtonsSeparators;
- (void)setBottomButtonsSeparators:(id)arg1;
- (id)nextStyleButton;
- (void)setNextStyleButton:(id)arg1;
- (id)saveImageButton;
- (void)setSaveImageButton:(id)arg1;
- (void)setShareActionSheetForImageContent:(id)arg1;
- (id)recentForwardDelegateProxyForImageContent;
- (void)setRecentForwardDelegateProxyForImageContent:(id)arg1;
- (void)setShareActionSheetForWebPageContent:(id)arg1;
- (id)recentForwardDelegateProxyForWebPageContent;
- (void)setRecentForwardDelegateProxyForWebPageContent:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)reportingContext;
- (void)setReportingContext:(id)arg1;
- (unsigned long long)sourceScene;
- (void)setSourceScene:(unsigned long long)arg1;
- (id)itemButton;
- (void)setItemButton:(id)arg1;
- (id)currentItemUrl;
- (void)setCurrentItemUrl:(id)arg1;
- (void).cxx_destruct;
@end
