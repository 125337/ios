@interface WCAdRandomSelectCardItemsInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _pedestalImageUrl; // +0x8
    NSString * _pedestalImageUrlDark; // +0x10
    NSString * _backgroundImageUrl; // +0x18
    NSString * _starImageUrl; // +0x20
    NSString * _starDropImageUrl; // +0x28
    double _cardGap; // +0x30
    double _cardDistance; // +0x38
    double _itemScaleRatio; // +0x40
    NSArray * _cardItems; // +0x48
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)pedestalImageUrl;
- (void)setPedestalImageUrl:(id)arg1;
- (id)pedestalImageUrlDark;
- (void)setPedestalImageUrlDark:(id)arg1;
- (id)backgroundImageUrl;
- (void)setBackgroundImageUrl:(id)arg1;
- (id)starImageUrl;
- (void)setStarImageUrl:(id)arg1;
- (id)starDropImageUrl;
- (void)setStarDropImageUrl:(id)arg1;
- (double)cardGap;
- (void)setCardGap:(double)arg1;
- (double)cardDistance;
- (void)setCardDistance:(double)arg1;
- (double)itemScaleRatio;
- (void)setItemScaleRatio:(double)arg1;
- (id)cardItems;
- (void)setCardItems:(id)arg1;
- (void).cxx_destruct;
@end
