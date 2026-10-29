@interface MMHevcHelper : NSObject
{
    unsigned int _idKeyID; // +0x8
    NSMutableArray * _idKeys; // +0x10
    NSString * _imgUrl; // +0x18
}
- (id)initWithIdKeyId:(unsigned int)arg1 imgUrl:(id)arg2;
- (void)reportIdKeyEvent:(unsigned long long)arg1;
- (void)reportIdKeyEvent:(unsigned long long)arg1 value:(unsigned int)arg2;
- (void)flushIdKeyEvent:(BOOL)arg1;
- (void)reportKvStat:(unsigned int)arg1 value:(id)arg2;
- (id)idKeys;
- (void)setIdKeys:(id)arg1;
- (unsigned int)idKeyID;
- (void)setIdKeyID:(unsigned int)arg1;
- (id)imgUrl;
- (void).cxx_destruct;
@end

