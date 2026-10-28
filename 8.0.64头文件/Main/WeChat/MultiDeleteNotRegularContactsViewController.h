@interface MultiDeleteNotRegularContactsViewController : MMAcceptAgreementBaseViewController <ContactBatchModifyLogicDelegate, ContactInfoViewControllerDelegate, MMDeleteNotRegularContactLogicDelegate, IContactMgrExt, MMNavBarInteractiveDelegate>
{
    NSMutableArray * m_arrNeedDeleteNotRegularContact; // +0x70
    NSMutableDictionary * m_dicMultiSelect; // +0x78
    NSString * m_sessionId; // +0x80
    BOOL m_isLoading; // +0x88
    NSString * m_context; // +0x90
    BOOL m_rightBarButtonItemEnabled; // +0x98
    BOOL m_isAllDeleteLoading; // +0x99
    MMUIButton * m_sessionHeaderOperateBtn; // +0xa0
    NSMutableArray * m_arrNoAddCreateTimeUserName; // +0xa8
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0xb0
    MMTableViewInfo * m_tableViewInfo; // +0xb8
    MMTableView * m_tableView; // +0xc0
    NSString * _contactsMaxLimitSortSessionid; // +0xc8
    MultiDeleteNotRegularContactsMaskViewView * _operateButtonMaskView; // +0xd0
    MMUILabel * _emptyTitleLabel; // +0xd8
    MMUIView * _headerTitleView; // +0xe0
    MMUIButton * _deleteButton; // +0xe8
    MMUIView * _sessionHeaderView; // +0xf0
    MMUIActivityIndicatorView * _dataLoadingIndicator; // +0xf8
    MMUILabel * _descriptionLabel; // +0x100
    ContactBatchModifyLogic * _contactBatchModifyLogic; // +0x108
    MMDeleteNotRegularContactLogic * _deleteNotRegularContactLogic; // +0x110
}
- (void)viewDidLoad;
- (void)initDeleteNotRegularContactsViewData;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)setupReportData;
- (void)viewDidTransitionToNewSize;
- (BOOL)shouldInteractiveDismiss;
- (void)reloadTableData;
- (void)makeDeleteNotRegularContactCell:(id)arg1 cellInfo:(id)arg2;
- (void)handleSelectdContact:(id)arg1;
- (void)handleShowViewContact:(id)arg1;
- (void)updateSelectImageView:(BOOL)arg1 selectedImageView:(id)arg2;
- (void)initNavigationBar;
- (void)layoutHeaderView;
- (void)layoutSessionHeaderView;
- (id)genSessionHeaderTitleLable;
- (id)genSessionHeaderOperateButton;
- (void)layoutOperateButtonMaskView;
- (void)layoutEmptyTitleView;
- (void)updateOperateButtonMaskViewGradientLayer;
- (void)makeLoadingDataState:(BOOL)arg1;
- (void)removeLoadingDataState;
- (BOOL)isSelected:(id)arg1;
- (void)onDeleteButtonClick:(id)arg1;
- (void)deleteSelectedContacts;
- (void)onClickSelectdContactBtn:(id)arg1;
- (void)onRighRefreshButtonClick;
- (void)refreshAnimateRloadTableView;
- (void)updateDeleteButtonStatus;
- (void)onViewContact:(id)arg1;
- (id)getBaseParamDic;
- (id)getDeleteContactParamDic;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)handleDeteContact:(id)arg1;
- (void)OnContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(BOOL)arg4;
- (void)onDeleteFaildWithErrMsg:(id)arg1;
- (void)onDeleteFaildWithErrMsgTitle:(id)arg1 errMsgContent:(id)arg2;
- (void)onGetNeedDeleteNotRegularContactListDone:(id)arg1 context:(id)arg2;
- (void)handleNeedDeleteNotRegularContactList:(id)arg1;
- (void)onGetNeedDeleteNotRegularContactListFail:(id)arg1;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)contactsMaxLimitSortSessionid;
- (void)setContactsMaxLimitSortSessionid:(id)arg1;
- (id)operateButtonMaskView;
- (void)setOperateButtonMaskView:(id)arg1;
- (id)emptyTitleLabel;
- (void)setEmptyTitleLabel:(id)arg1;
- (id)headerTitleView;
- (void)setHeaderTitleView:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)sessionHeaderView;
- (void)setSessionHeaderView:(id)arg1;
- (id)dataLoadingIndicator;
- (void)setDataLoadingIndicator:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)contactBatchModifyLogic;
- (void)setContactBatchModifyLogic:(id)arg1;
- (id)deleteNotRegularContactLogic;
- (void)setDeleteNotRegularContactLogic:(id)arg1;
- (void).cxx_destruct;
@end
