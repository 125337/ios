@interface QBWebDebugConfig : NSObject
{
    BOOL _isLive; // +0x8
    NSString * _businessID; // +0x10
    NSString * _randomKey; // +0x18
}
+ (id)configWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)businessID;
- (void)setBusinessID:(id)arg1;
- (id)randomKey;
- (void)setRandomKey:(id)arg1;
- (BOOL)isLive;
- (void)setIsLive:(BOOL)arg1;
@end
