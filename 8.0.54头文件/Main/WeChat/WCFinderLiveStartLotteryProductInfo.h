@interface WCFinderLiveStartLotteryProductInfo : NSObject
{
    NSString * _imgUrl; // +0x8
    NSString * _title; // +0x10
    NSString * _productId; // +0x18
    NSString * _platform; // +0x20
    NSData * _productJumpInfo; // +0x28
}
+ (id)getProductInfoWithNSDictionary:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)platform;
- (void)setPlatform:(id)arg1;
- (id)productJumpInfo;
- (void)setProductJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

