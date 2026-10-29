@interface WCFinderGetDetailDataItemCGIConfig : NSObject
{
    double _timeout; // +0x8
    NSString * _uxinfo; // +0x10
    WCFinderPushFeedViewProductParams * _productInfo; // +0x18
}
- (id)init;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (void).cxx_destruct;
@end

