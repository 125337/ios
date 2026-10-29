@interface WCFinderFeedStickerInfo : NSObject
{
    NSString * _wording; // +0x8
    NSString * _productId; // +0x10
}
+ (id)stickerInfoFromInfoString:(id)arg1;
- (id)covertToJsonString;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (void).cxx_destruct;
@end

