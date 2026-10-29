@interface WCFinderCgiObjectBaseInfoKey : NSObject
{
    NSString * _tid; // +0x8
    NSString * _extraKey; // +0x10
}
+ (id)infoKeyWithTid:(id)arg1 extraKey:(id)arg2;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)extraKey;
- (void)setExtraKey:(id)arg1;
- (void).cxx_destruct;
@end

