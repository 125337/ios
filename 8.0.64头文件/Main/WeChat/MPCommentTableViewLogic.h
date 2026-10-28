@interface MPCommentTableViewLogic : MMObject <UITableViewDelegate, UITableViewDataSource, MPCommentViewCellDelegate>
{
    BOOL _isNoMoreComment; // +0x8
    BOOL _onlyFansCanComment; // +0x9
    BOOL _funcEnable; // +0xa
    BOOL _isMultiReplySwitchOn; // +0xb
    unsigned int _commentCellTheme; // +0xc
    int _commentNextOffset; // +0x10
    MPLandingPageCgiHandler * _cgiHandler; // +0x18
    MPLandingPageOpenParameter * _openParam; // +0x20
    NSMutableArray * _commentMsgArr; // +0x28
    MPLandingPageReportLogic * _reportLogic; // +0x30
    MMUIViewController * _viewController; // +0x38
    MMTableView * _tableView; // +0x40
    id <MPCommentTableViewLogicDelete> _delegate; // +0x48
    MPCommentMsg * _deletingCommentMsg; // +0x50
    MPCommentReplyCellViewModel * _deletingReplyViewModel; // +0x58
    NSMutableSet * _commentMsgIdSet; // +0x60
    NSMutableArray * _arrSectionData; // +0x68
}
- (id)init;
- (void)clearAndFetchComment;
- (void)tryFetchMoreComment;
- (void)handleGetCommentList:(id)arg1 funcEnable:(BOOL)arg2 nextOffset:(int)arg3 onlyFansCanComment:(BOOL)arg4 resetData:(BOOL)arg5;
- (BOOL)hasComment;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onClickDeleteBtn:(id)arg1;
- (void)onClickReplyBtn:(id)arg1;
- (void)onClickLikeBtn:(id)arg1;
- (void)doDeleteSelectCommentMsg;
- (void)localDeleteCommentMsg:(id)arg1;
- (void)doDeleteSelectCommentReply;
- (void)cancelDeleteSelectCommentMsg;
- (id)cgiHandler;
- (void)setCgiHandler:(id)arg1;
- (id)openParam;
- (void)setOpenParam:(id)arg1;
- (unsigned int)commentCellTheme;
- (void)setCommentCellTheme:(unsigned int)arg1;
- (id)commentMsgArr;
- (BOOL)isNoMoreComment;
- (void)setIsNoMoreComment:(BOOL)arg1;
- (BOOL)onlyFansCanComment;
- (BOOL)funcEnable;
- (BOOL)isMultiReplySwitchOn;
- (void)setIsMultiReplySwitchOn:(BOOL)arg1;
- (id)reportLogic;
- (void)setReportLogic:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)deletingCommentMsg;
- (void)setDeletingCommentMsg:(id)arg1;
- (id)deletingReplyViewModel;
- (void)setDeletingReplyViewModel:(id)arg1;
- (int)commentNextOffset;
- (void)setCommentNextOffset:(int)arg1;
- (id)commentMsgIdSet;
- (void)setCommentMsgIdSet:(id)arg1;
- (id)arrSectionData;
- (void)setArrSectionData:(id)arg1;
- (void).cxx_destruct;
@end
