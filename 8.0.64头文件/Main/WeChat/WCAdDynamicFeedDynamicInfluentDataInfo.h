@interface WCAdDynamicFeedDynamicInfluentDataInfo : NSObject <NSCoding>
{
    WCAdDynamicFeedInfluentDataInfo * _influentData; // +0x8
    WCAdFinderLiveProductInfo * _adFinderLiveProductInfo; // +0x10
    NSString * _dynamicUpdateMD5; // +0x18
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)influentData;
- (void)setInfluentData:(id)arg1;
- (id)adFinderLiveProductInfo;
- (void)setAdFinderLiveProductInfo:(id)arg1;
- (id)dynamicUpdateMD5;
- (void)setDynamicUpdateMD5:(id)arg1;
- (void).cxx_destruct;
@end
