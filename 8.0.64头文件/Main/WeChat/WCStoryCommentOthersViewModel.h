@interface WCStoryCommentOthersViewModel : NSObject <WCStoryFacadeExt>
{
    id <WCStoryCommentOthersViewModelDelegate> _delegate; // +0x8
    NSString * _tid; // +0x10
    WCStoryDataItem * _dataItem; // +0x18
    NSMutableArray * _cellHeights; // +0x20
    WCStoryPreviewReportObj * _reportObj; // +0x28
}
+ (id)viewModelWithTid:(id)arg1;
- (id)initWithTid:(id)arg1;
- (void)startReceiveDataUpdate;
- (id)comments;
- (BOOL)hasComments;
- (id)cellHeights;
- (void)makeStoryUserRelatedCommentsAllReaded;
- (void)commitWithText:(id)arg1 forReplyComment:(id)arg2;
- (void)deleteComment:(id)arg1 successFul:(id /* block */)arg2 failed:(id /* block */)arg3;
- (id)genCellHeightsWithDataItem:(id)arg1;
- (void)onDataItemHasUpdate:(id)arg1;
- (void)setDataItem:(id)arg1;
- (void)setPreviewReportObj:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tid;
- (id)dataItem;
- (void)setCellHeights:(id)arg1;
- (id)reportObj;
- (void)setReportObj:(id)arg1;
- (void).cxx_destruct;
@end
