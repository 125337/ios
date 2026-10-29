@interface MMFinderLiveFloatMsgDecorationInfo : NSObject
{
    unsigned int _decorationLevel; // +0x8
    NSString * _productId; // +0x10
    NSString * _name; // +0x18
    unsigned long long _priceInWecoin; // +0x20
    NSArray * _wordColors; // +0x28
    NSArray * _borderColors; // +0x30
    NSArray * _decorationItems; // +0x38
}
- (BOOL)readyForDisplay;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)priceInWecoin;
- (void)setPriceInWecoin:(unsigned long long)arg1;
- (id)wordColors;
- (void)setWordColors:(id)arg1;
- (id)borderColors;
- (void)setBorderColors:(id)arg1;
- (unsigned int)decorationLevel;
- (void)setDecorationLevel:(unsigned int)arg1;
- (id)decorationItems;
- (void)setDecorationItems:(id)arg1;
- (void).cxx_destruct;
@end

