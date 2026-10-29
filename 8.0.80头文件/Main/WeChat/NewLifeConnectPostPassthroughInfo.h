@interface NewLifeConnectPostPassthroughInfo : NSObject <PBCoding>
{
    unsigned int _tagSource; // +0x8
    NSString * _sessionId; // +0x10
}
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_tagSource;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)tagSource;
- (void)setTagSource:(unsigned int)arg1;
- (void).cxx_destruct;
@end
