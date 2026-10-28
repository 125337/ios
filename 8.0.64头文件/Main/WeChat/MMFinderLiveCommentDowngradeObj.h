@interface MMFinderLiveCommentDowngradeObj : NSObject
{
    NSString * _replaceString; // +0x8
    NSString * _clientMsgId; // +0x10
    NSString * _localClientMsgId; // +0x18
}
- (id)initWithJoinliveMsgRecallInfo:(id)arg1;
- (id)initWithLiveRoomRecallInfo:(id)arg1;
- (BOOL)checkNeedDowngradeCommentDataItem:(id)arg1;
- (BOOL)isCommentSupportDowngrade:(id)arg1;
- (id)replaceString;
- (void)setReplaceString:(id)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (id)localClientMsgId;
- (void)setLocalClientMsgId:(id)arg1;
- (void).cxx_destruct;
@end
