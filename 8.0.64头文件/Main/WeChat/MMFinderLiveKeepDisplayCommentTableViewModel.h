@interface MMFinderLiveKeepDisplayCommentTableViewModel : NSObject <MMLiveCommentDataExt, MMLiveCommentPubbleCellFrameChangeDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _currentCommentDisabled; // +0x8
    id /* block */ _onKeepDisplayCommentUpdateCallback; // +0x10
    UITableView * _commentView; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    NSArray * _displayCommetDataItemArr; // +0x28
    NSArray * _displayCommentCellFrameArr; // +0x30
    MMLiveCommentDataItem * _anchorNoticeCommentDataItem; // +0x38
    double _contentWidth; // +0x40
    double _contentHeight; // +0x48
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)updateCommentDisabled:(BOOL)arg1;
- (void)onCommentDisable;
- (void)onCommentEnable;
- (void)onKeepDisplayCommentUpdate;
- (void)reloadDisplayCommetDataItemArr;
- (void)updateContentFrameProperty;
- (CGSize)contentSize;
- (BOOL)updateAnchorNoticeCommentDataItemWithReceivedItem:(id)arg1;
- (void)onMMLiveCommentDataAppendNeedKeepDisplayComments:(id)arg1 taskId:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)commentPubbleCellFrameExpandChangeAndTop:(BOOL)arg1 cellFrame:(id)arg2;
- (id /* block */)onKeepDisplayCommentUpdateCallback;
- (void)setOnKeepDisplayCommentUpdateCallback:(id /* block */)arg1;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)currentCommentDisabled;
- (void)setCurrentCommentDisabled:(BOOL)arg1;
- (id)displayCommetDataItemArr;
- (void)setDisplayCommetDataItemArr:(id)arg1;
- (id)displayCommentCellFrameArr;
- (void)setDisplayCommentCellFrameArr:(id)arg1;
- (id)anchorNoticeCommentDataItem;
- (void)setAnchorNoticeCommentDataItem:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (void).cxx_destruct;
@end
