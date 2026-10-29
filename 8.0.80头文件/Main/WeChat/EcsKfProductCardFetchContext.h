@interface EcsKfProductCardFetchContext : NSObject
{
    NSString * _talker; // +0x8
    long long _msgSvrId; // +0x10
    long long _msgCreateTime; // +0x18
    NSArray * _productIds; // +0x20
    NSMutableArray * _completions; // +0x28
}
- (id)talker;
- (void)setTalker:(id)arg1;
- (long long)msgSvrId;
- (void)setMsgSvrId:(long long)arg1;
- (long long)msgCreateTime;
- (void)setMsgCreateTime:(long long)arg1;
- (id)productIds;
- (void)setProductIds:(id)arg1;
- (id)completions;
- (void)setCompletions:(id)arg1;
- (void).cxx_destruct;
@end
