@interface WCPayLQTDepositControlLogic : WCPayControlLogic <LQTDepositPreAddPlanAfterDeleteDelegate, LQTDepositPlanIndexAfterDeleteDelegate, LQTDepositPlanIndexAfterDetailDelegate, LQTDepositPlanDeleteDelegate, LQTDepositPlanIndexAfterModifyDelegate, LQTDepositPlanIndexlAfterManageDelegate, WCPayLQTDepositDetailViewControllerDelegate, WCPayQryLqtAutoPlanOrderListCgiDelegate, WCPayLQTDepositPlanIndexCgiDelegate, WCPayLQTDepositPreAddPlanCgiDelegate, WCPayAddPayCardDelegate, WCPayLQTDepositAddPlanCgiDelegate, WCPayLQTDepositFillInfoViewControllerDelegate, WCPayLQTDepositEntryViewControllerDelegate, WCPayLQTDepositPlanListViewControllerDelegate, WCPayLQTDepositModifyPlanCgiDelegate, WCPayLQTDepositManagePlanCgiDelegate, MMTipsViewControllerDelegate>
{
    long long m_logicState; // +0x38
    BOOL _hasDeleteAllPlan; // +0x40
    BOOL _isRefetchUsrPlanId; // +0x41
    BOOL _isPlanDetailEnd; // +0x42
    unsigned long long _entryScene; // +0x48
    WCPayLQTDepositPlanIndexCgi * _planIndexCgi; // +0x50
    WCPayLQTDepositPreAddPlanCgi * _preAddPlanCgi; // +0x58
    NSString * _bindSerialFromNewCard; // +0x60
    WCPayPayPwdViewController * _pwdVC; // +0x68
    WCPayLQTDepositAddPlanCgi * _addPlanCgi; // +0x70
    WCPayLQTDepositManagePlanCgi * _managePlanCgi; // +0x78
    WCPayLQTDepositModifyPlanCgi * _modifyPlanCgi; // +0x80
    QryAutoPlanOrderListResp * _planDetailResp; // +0x88
    WCPayQryLqtAutoPlanOrderListCgi * _planDetailCgi; // +0x90
    PlanIndexResp_PlanItem * _selectedItem; // +0x98
    LQTDepositPlanIndexAfterModify * _afterModifyLogic; // +0xa0
    LQTDepositPlanIndexlAfterManage * _afterManageLogic; // +0xa8
    LQTDepositPlanDelete * _afterDeleteLogic; // +0xb0
    LQTDepositPlanIndexAfterDelete * _planIndexAfterDeleteLogic; // +0xb8
    LQTDepositPlanIndexAfterDetail * _planIndexAfterDetailLogic; // +0xc0
    LQTDepositPreAddPlanAfterDelete * _preAddPlanAfterDeleteLogic; // +0xc8
    WCPayLQTDepositManagePlanCgi * _deletePlanCgi; // +0xd0
    WCPayLQTDepositPlanIndexCgi * _planIndexAfterDeleteCgi; // +0xd8
    WCPayLQTDepositPlanIndexCgi * _planIndexAfterDetailCgi; // +0xe0
    WCPayLQTDepositPreAddPlanCgi * _preAddPlanAfterDeleteCgi; // +0xe8
    WCPayLQTDepositPlanIndexCgi * _planIndexAfterManageCgi; // +0xf0
    WCPayLQTDepositPlanIndexCgi * _planIndexAfterModifyCgi; // +0xf8
}
- (id)initWithData:(id)arg1;
- (void)setExtraInfo:(id)arg1;
- (BOOL)AddScene;
- (void)startLogic;
- (void)onWCPayLQTDepositPlanIndexCgiResponseOK:(id)arg1 fromServer:(BOOL)arg2;
- (void)onWCPayLQTDepositPlanIndexCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)startBlockedWithTip:(id)arg1 delay:(double)arg2;
- (void)onWCPayLQTDepositEntryViewControllerNewPlan;
- (void)onWCPayLQTDepositPreAddPlanCgiReponseOK:(id)arg1;
- (void)onWCPayLQTDepositPreAddPlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)activeTextField;
- (void)onWCPayLQTDepositEntryViewControllerCancel;
- (void)onWCPayLQTDepositFillInfoViewControllerCancel;
- (void)onWCPayLQTDepositFillInfoViewControllerChooseAddCard;
- (void)onAddPayCardResult:(BOOL)arg1 newCardBindSerial:(id)arg2;
- (void)onWCPayLQTDepositFillInfoViewControllerNext;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)onWCPayLQTDepositAddPlanCgiResponseOK:(id)arg1;
- (void)onWCPayLQTDepositAddPlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositPlanListViewControllerToDetail:(id)arg1;
- (void)onWCPayLQTDepositPlanListViewControllerBack;
- (void)onWCPayLQTDepositPlanListViewControllerClickAddPlan;
- (void)onWCPayLQTDepositPlanListViewControllerOpearte:(id)arg1 operateType:(int)arg2;
- (void)onWCPayLQTDepositManagePlanCgiResponseOK:(id)arg1;
- (void)onWCPayLQTDepositManagePlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onWCPayLQTDepositModifyPlanCgiResponseOK:(id)arg1;
- (void)onWCPayLQTDepositModifyPlanCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)popToViewController:(Class)arg1 animated:(BOOL)arg2;
- (void)popToViewController:(Class)arg1 andPush:(id)arg2 animated:(BOOL)arg3 delegate:(id)arg4;
- (void)onWCPayQryLqtAutoPlanOrderListCgiResp:(id)arg1;
- (void)onWCPayQryLqtAutoPlanOrderListCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)startDetailCgi;
- (void)onWCPayLQTDepositDetailViewControllerBack;
- (BOOL)onWCPayLQTDepositDetailViewControllerNoMoreData;
- (void)onWCPayLQTDepositDetailViewControllerLoadMore;
- (void)onWCPayLQTDepositDetailViewControllerOpen:(id)arg1;
- (void)onWCPayLQTDepositDetailViewControllerStop:(id)arg1;
- (void)onWCPayLQTDepositDetailViewControllerDelete:(id)arg1;
- (void)onWCPayLQTDepositDetailViewControllerModify:(id)arg1;
- (id)onWCPayLQTDepositDetailViewControllerDetailResp;
- (id)onWCPayLQTDepositDetailViewControllerPlanItem;
- (void)onLQTDepositPlanDeleteResponseOK:(id)arg1;
- (void)onLQTDepositPlanDeleteError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanIndexAfterModifyResp:(id)arg1;
- (void)onLQTDepositPlanIndexAfterModifyError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanIndexlAfterManageResp:(id)arg1;
- (void)onLQTDepositPlanIndexlAfterManageError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPlanIndexAfterDeleteResponseOK:(id)arg1;
- (void)onLQTDepositPlanIndexAfterDeleteError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)startPreAddPlanCgiAfterDelete;
- (void)onLQTDepositPlanIndexAfterDetailResponseOK:(id)arg1;
- (void)onLQTDepositPlanIndexAfterDetailError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onLQTDepositPreAddPlanAfterDeleteReponseOK:(id)arg1;
- (void)onLQTDepositPreAddPlanAfterDeleteError:(id)arg1 errorCode:(unsigned int)arg2;
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (id)planIndexCgi;
- (void)setPlanIndexCgi:(id)arg1;
- (id)preAddPlanCgi;
- (void)setPreAddPlanCgi:(id)arg1;
- (id)bindSerialFromNewCard;
- (void)setBindSerialFromNewCard:(id)arg1;
- (id)pwdVC;
- (void)setPwdVC:(id)arg1;
- (id)addPlanCgi;
- (void)setAddPlanCgi:(id)arg1;
- (id)managePlanCgi;
- (void)setManagePlanCgi:(id)arg1;
- (id)modifyPlanCgi;
- (void)setModifyPlanCgi:(id)arg1;
- (BOOL)hasDeleteAllPlan;
- (void)setHasDeleteAllPlan:(BOOL)arg1;
- (BOOL)isRefetchUsrPlanId;
- (void)setIsRefetchUsrPlanId:(BOOL)arg1;
- (id)planDetailResp;
- (void)setPlanDetailResp:(id)arg1;
- (id)planDetailCgi;
- (void)setPlanDetailCgi:(id)arg1;
- (BOOL)isPlanDetailEnd;
- (void)setIsPlanDetailEnd:(BOOL)arg1;
- (id)selectedItem;
- (void)setSelectedItem:(id)arg1;
- (id)afterModifyLogic;
- (void)setAfterModifyLogic:(id)arg1;
- (id)afterManageLogic;
- (void)setAfterManageLogic:(id)arg1;
- (id)afterDeleteLogic;
- (void)setAfterDeleteLogic:(id)arg1;
- (id)planIndexAfterDeleteLogic;
- (void)setPlanIndexAfterDeleteLogic:(id)arg1;
- (id)planIndexAfterDetailLogic;
- (void)setPlanIndexAfterDetailLogic:(id)arg1;
- (id)preAddPlanAfterDeleteLogic;
- (void)setPreAddPlanAfterDeleteLogic:(id)arg1;
- (id)deletePlanCgi;
- (void)setDeletePlanCgi:(id)arg1;
- (id)planIndexAfterDeleteCgi;
- (void)setPlanIndexAfterDeleteCgi:(id)arg1;
- (id)planIndexAfterDetailCgi;
- (void)setPlanIndexAfterDetailCgi:(id)arg1;
- (id)preAddPlanAfterDeleteCgi;
- (void)setPreAddPlanAfterDeleteCgi:(id)arg1;
- (id)planIndexAfterManageCgi;
- (void)setPlanIndexAfterManageCgi:(id)arg1;
- (id)planIndexAfterModifyCgi;
- (void)setPlanIndexAfterModifyCgi:(id)arg1;
- (void).cxx_destruct;
@end
