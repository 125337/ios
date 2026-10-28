@interface WCStoryAggregateCommentBubbleViewModel : NSObject <WCStoryFacadeExt>
{
    id <WCStoryAggregateCommentBubbleViewModelDelegate> _delegate; // +0x8
    NSString * _tid; // +0x10
    WCStoryDataItem * _dataItem; // +0x18
    NSMutableArray * _commentCellHeights; // +0x20
    unsigned long long _listReadState; // +0x28
    WCStoryPreviewReportObj * _reportObj; // +0x30
}
+ (id)viewModelWithTid:(id)arg1;
- (id)initWithTid:(id)arg1;
- (void)markVisitListHasReaded;
- (void)makeVisitListAllReaded;
- (void)makeVisitListUnReaded;
- (BOOL)isVisitListReaded;
- (void)markCommentListHasReaded;
- (void)makeCommentListAllReaded;
- (void)makeCommentListUnReaded;
- (BOOL)isCommentListReaded;
- (id)visitors;
- (id)comments;
- (id)cellHeights;
- (BOOL)hasUnreadComment;
- (BOOL)hasUnreadVisitor;
- (BOOL)isDataItemExpiredOrInvisible;
- (void)commitWithText:(id)arg1 forReplyComment:(id)arg2;
- (void)deleteComment:(id)arg1 successFul:(id /* block */)arg2 failed:(id /* block */)arg3;
- (void)exposeReportPageType:(unsigned long long)arg1;
- (id)genCellHeightsWithDataItem:(id)arg1;
- (void)onDataItemHasUpdate:(id)arg1;
- (void)onRelatedCommentAdd:(id)arg1;
- (void)setDataItem:(id)arg1;
- (void)setPreviewReportObj:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)dataItem;
- (id)commentCellHeights;
- (void)setCommentCellHeights:(id)arg1;
- (unsigned long long)listReadState;
- (void)setListReadState:(unsigned long long)arg1;
- (id)reportObj;
- (void)setReportObj:(id)arg1;
- (void).cxx_destruct;
@end
