@interface WCStoryCommentsForSelfShowViewModel : NSObject <WCStoryFacadeExt, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _hadBubble; // +0x8
    NSMutableArray * _comments; // +0x10
    NSString * _tid; // +0x18
    NSMutableArray * _cellFrameArray; // +0x20
    WCStoryDataItem * _dataItem; // +0x28
    id /* block */ _configBlock; // +0x30
    id /* block */ _updateBlock; // +0x38
}
+ (id)viewModelWithDataItemId:(id)arg1;
- (id)initWithDataItemId:(id)arg1;
- (id)init;
- (id)commentsWithDataItem:(id)arg1;
- (id)cellFrameArrayWithDataItem:(id)arg1;
- (BOOL)checkHadBubble:(id)arg1;
- (id)debugDescription;
- (void)setConfigBlock:(id /* block */)arg1;
- (unsigned long long)indexOfComment:(id)arg1;
- (void)deleteComment:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)commitBubbleWithReportObj:(id)arg1;
- (void)commitWithText:(id)arg1 forReplyComment:(id)arg2 reportObj:(id)arg3;
- (void)reload;
- (double)tableViewHeightFromTopToRow:(unsigned long long)arg1;
- (unsigned long long)visitorCount;
- (BOOL)isVideoPostBySelf;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onDataItemHasUpdate:(id)arg1;
- (id)comments;
- (void)setComments:(id)arg1;
- (id)tid;
- (id)cellFrameArray;
- (void)setCellFrameArray:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)hadBubble;
- (void)setHadBubble:(BOOL)arg1;
- (id /* block */)configBlock;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

