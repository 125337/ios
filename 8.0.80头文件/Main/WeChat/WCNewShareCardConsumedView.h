@interface WCNewShareCardConsumedView : MMUIView <IWCShareCardPkgExt>
{
    double _enterTimeForState; // +0x8
    BOOL _followCheckBoxSelected; // +0x10
    BOOL _bIsStatusBarBlack; // +0x11
    BOOL _isSelectTagGroup; // +0x12
    id <WCNewShareCardConsumedViewDelegate> _delegate; // +0x18
    NSArray * _shareCardTPInfoList; // +0x20
    WCShareCardData * _curShareCardData; // +0x28
    NSString * _consumedBoxId; // +0x30
    NSString * _subAppUserName; // +0x38
    NSString * _subAppWording; // +0x40
    NSString * _retMsg; // +0x48
    UIScrollView * _contentView; // +0x50
    MMUIView * _topContainerView; // +0x58
    MMUIView * _bottomContainerView; // +0x60
    MMUIView * _whoCanSeeContainerView; // +0x68
    MMUIView * _shareInfoContainerView; // +0x70
    UIButton * _closeBtn; // +0x78
    UIImageView * _line1ImageView; // +0x80
    UIImageView * _line2ImageView; // +0x88
    MMLoadingView * _loadingViewX; // +0x90
    MMUILabel * _whoCanSeeResultLabel; // +0x98
    NSMutableArray * _arrGroupUser; // +0xa0
    NSMutableArray * _arrBlackUser; // +0xa8
    NSMutableArray * _arrGroupUserLabelID; // +0xb0
    NSMutableArray * _arrBlackUserLabelID; // +0xb8
    unsigned long long _fromScene; // +0xc0
}
- (id)initWithFrame:(CGRect)arg1 withConsumedInfo:(id)arg2 consumedCardID:(id)arg3 consumedBoxId:(id)arg4 subscribeAppUserName:(id)arg5 subscribeWording:(id)arg6 fromScene:(unsigned long long)arg7 retMsg:(id)arg8;
- (void)showConsumedViewWithAnimation:(BOOL)arg1 isStatusBarBlack:(BOOL)arg2;
- (void)closeConsumedView;
- (void)layoutSubviews;
- (void)initView;
- (void)initNormalView;
- (void)initTopContainerViewWithError:(BOOL)arg1;
- (void)initBottomContainerView;
- (void)initShareInfoContainerView;
- (void)initWhoCanSeeEntranceView;
- (void)onCloseBtnClicked:(id)arg1;
- (void)onShareBtnClicked:(id)arg1;
- (void)onAttentionBtnClicked:(id)arg1;
- (void)clickWhoCanSeeBtn:(id)arg1;
- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)stopLoading;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)onShareCard:(id)arg1 TpID:(id)arg2 andCardInfo:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)shareCardTPInfoList;
- (void)setShareCardTPInfoList:(id)arg1;
- (id)curShareCardData;
- (void)setCurShareCardData:(id)arg1;
- (id)consumedBoxId;
- (void)setConsumedBoxId:(id)arg1;
- (id)subAppUserName;
- (void)setSubAppUserName:(id)arg1;
- (id)subAppWording;
- (void)setSubAppWording:(id)arg1;
- (id)retMsg;
- (void)setRetMsg:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)topContainerView;
- (void)setTopContainerView:(id)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)whoCanSeeContainerView;
- (void)setWhoCanSeeContainerView:(id)arg1;
- (id)shareInfoContainerView;
- (void)setShareInfoContainerView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)line1ImageView;
- (void)setLine1ImageView:(id)arg1;
- (id)line2ImageView;
- (void)setLine2ImageView:(id)arg1;
- (id)loadingViewX;
- (void)setLoadingViewX:(id)arg1;
- (id)whoCanSeeResultLabel;
- (void)setWhoCanSeeResultLabel:(id)arg1;
- (BOOL)followCheckBoxSelected;
- (void)setFollowCheckBoxSelected:(BOOL)arg1;
- (BOOL)bIsStatusBarBlack;
- (void)setBIsStatusBarBlack:(BOOL)arg1;
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
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
