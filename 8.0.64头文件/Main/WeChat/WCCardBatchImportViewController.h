@interface WCCardBatchImportViewController : MMUIViewController <WCCardPkgBackViewDelegate, IWCCardPkgExt, IWCShareCardPkgExt>
{
    id <WCCardBatchImportViewControllerDelegate> _delegate; // +0x70
    BOOL _isLoading; // +0x78
    WCCardAcceptCardListInfo * _cardListInfo; // +0x80
    NSMutableArray * _cardList; // +0x88
    WCCardChooseEmptyView * _emptyView; // +0x90
    UIButton * _sureButton; // +0x98
    unsigned int _genType; // +0xa0
    BOOL _isSelectTagGroup; // +0xa4
    unsigned int _uiScene; // +0xa8
    WCCardPkgBackView * _backview; // +0xb0
    NSMutableArray * _arrGroupUser; // +0xb8
    NSMutableArray * _arrBlackUser; // +0xc0
    NSMutableArray * _arrGroupUserLabelID; // +0xc8
    NSMutableArray * _arrBlackUserLabelID; // +0xd0
    NSString * _privateWording; // +0xd8
    WCCardChoosePeopleLabelView * _peopleLabelView; // +0xe0
    WeToast * _toastVC; // +0xe8
}
- (id)initWithDelegate:(id)arg1 cardListInfo:(id)arg2;
- (void)viewDidLoad;
- (void)initData;
- (void)initBaseUI;
- (void)initEmptyView;
- (void)initBackView;
- (void)initBottomPeopleView;
- (id)toastVC;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)showEmptyView;
- (void)showBackView;
- (void)showPeopleLabelView;
- (void)onShareCard:(id)arg1 TpID:(id)arg2 andCardInfo:(id)arg3;
- (void)onGetBulkInfo:(id)arg1 errCode:(int)arg2;
- (void)onImportBulkCard:(id)arg1 errCode:(int)arg2;
- (void)performDismiss;
- (void)onShareSelectedCardList;
- (void)onImportSelectedCardList;
- (void)onCancel;
- (void)onPop;
- (void)setCardWhoCanSee;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)stopLoadingWithFailText:(id)arg1;
- (double)wcCardPkgBackViewMaxHeight;
- (void)wcCardSureButtonDidSelected;
- (void)wcIsHaveAvailabledCard:(BOOL)arg1;
- (id)sortByGuideSameWithCardList:(id)arg1;
- (void)cardDataList:(id)arg1 tpCardDataList:(id)arg2;
- (unsigned int)uiScene;
- (void)setUiScene:(unsigned int)arg1;
- (id)backview;
- (void)setBackview:(id)arg1;
- (BOOL)isSelectTagGroup;
- (void)setIsSelectTagGroup:(BOOL)arg1;
- (id)arrGroupUser;
- (void)setArrGroupUser:(id)arg1;
- (id)arrBlackUser;
- (void)setArrBlackUser:(id)arg1;
- (id)arrGroupUserLabelID;
- (void)setArrGroupUserLabelID:(id)arg1;
- (id)arrBlackUserLabelID;
- (void)setArrBlackUserLabelID:(id)arg1;
- (id)privateWording;
- (void)setPrivateWording:(id)arg1;
- (id)peopleLabelView;
- (void)setPeopleLabelView:(id)arg1;
- (void)setToastVC:(id)arg1;
- (void).cxx_destruct;
@end
