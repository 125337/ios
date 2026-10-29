@interface WCCommentImageFlowReport : NSObject
{
    WCDataItem * _dataItem; // +0x8
    WCUserComment * _comment; // +0x10
    NSString * _snsSessionId; // +0x18
    long long _snsScene; // +0x20
    long long _picExpType; // +0x28
    long long _cmtPicCnt; // +0x30
}
- (id)toDictionary;
- (void)reportCmtBigPicReplyEvent;
- (void)reportCmtBigPicDelEvent;
- (void)reportCmtBigPicExpEvent;
- (void)reportCmtPicEvent:(BOOL)arg1;
- (void)reportCmtBigPicFoldEvent;
- (void)reportCmtBigPicUnfoldEvent;
- (void)reportCmtBigPicTxtEvent;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)snsSessionId;
- (void)setSnsSessionId:(id)arg1;
- (long long)snsScene;
- (void)setSnsScene:(long long)arg1;
- (long long)picExpType;
- (void)setPicExpType:(long long)arg1;
- (long long)cmtPicCnt;
- (void)setCmtPicCnt:(long long)arg1;
- (void).cxx_destruct;
@end
