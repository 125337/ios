@interface ChatHistoryAuthMessageScope : NSObject
{
    BOOL _applies; // +0x8
    NSArray * _scopedMsgIds; // +0x10
    NSNumber * _requestMsgId; // +0x18
}
- (BOOL)applies;
- (void)setApplies:(BOOL)arg1;
- (id)scopedMsgIds;
- (void)setScopedMsgIds:(id)arg1;
- (id)requestMsgId;
- (void)setRequestMsgId:(id)arg1;
- (void).cxx_destruct;
@end
