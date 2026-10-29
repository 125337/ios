@interface CgiCollectConfig : NSObject
{
    unsigned int _collectItemSize; // +0x8
    unsigned int _collectItemTimeSeconds; // +0xc
    NSString * _businessIdStr; // +0x10
}
- (id)initWithConfig:(id)arg1;
- (id)businessIdStr;
- (void)setBusinessIdStr:(id)arg1;
- (unsigned int)collectItemSize;
- (void)setCollectItemSize:(unsigned int)arg1;
- (unsigned int)collectItemTimeSeconds;
- (void)setCollectItemTimeSeconds:(unsigned int)arg1;
- (void).cxx_destruct;
@end
