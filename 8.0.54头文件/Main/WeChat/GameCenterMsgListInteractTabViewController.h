@interface GameCenterMsgListInteractTabViewController : GameCenterMsgListBaseTabViewController <GCInteractCellDelegate, IGameCenterMsgNotifyExt>
{
    GCTableViewSecionModel * _noticeSectionModel; // +0xe0
    GameInteractContentServer * _interActServer; // +0xe8
    GameLifeNotifyInteractiveMsgCell * _noticeCell; // +0xf0
}
- (id)init;
- (void)dealloc;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)unregisterExtension;
- (void)viewDidLoad;
- (unsigned int)showType;
- (Class)cellClassType;
- (id)cellReuseIdentifier;
- (id)msgListName;
- (BOOL)isNoticeSection:(unsigned long long)arg1;
- (id)getInteractCellModelForMsgContent:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)beginSectionModelArray;
- (id)subClassHandleCellForRowAtIndexPath:(id)arg1;
- (void)updateNoticeCellRedInfo;
- (void)subClassHandleWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)subClassHandleDidSelectRowAtIndexPath:(id)arg1;
- (void)onLoadNewList:(id)arg1;
- (void)handleContentInfoUpdate:(id)arg1;
- (void)handleBatchGetContentInfoByContentIdResponse:(id)arg1;
- (void)onGameCenterMessageRedPointInfoChange:(id)arg1;
- (void)reloadCellModel:(id)arg1;
- (BOOL)handleResponse:(id)arg1 cellModel:(id)arg2 successBlock:(id /* block */)arg3;
- (void)didClickFollowBtnWithCellModel:(id)arg1;
- (void)didTapHeadWithCellModel:(id)arg1;
- (void)onConfirmFollow:(BOOL)arg1 cellModel:(id)arg2;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4 btnTitle:(id)arg5 handler:(id /* block */)arg6;
- (void)didClickVoteBtnWithCellModel:(id)arg1;
- (void)didClickReplyBtnWithCellModel:(id)arg1;
- (void)didClickJumpAllBtnWithCellModel:(id)arg1;
- (void)checkShowEmpty;
- (id)noticeSectionModel;
- (void)setNoticeSectionModel:(id)arg1;
- (id)interActServer;
- (void)setInterActServer:(id)arg1;
- (id)noticeCell;
- (void)setNoticeCell:(id)arg1;
- (void).cxx_destruct;
@end

