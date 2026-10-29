@interface WCCollectedAdInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _isCollectedAd; // +0x8
    NSString * _themeId; // +0x10
    long long _collectedAdType; // +0x18
    NSArray * _subAdItemList; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isCollectedAd;
- (void)setIsCollectedAd:(BOOL)arg1;
- (id)themeId;
- (void)setThemeId:(id)arg1;
- (long long)collectedAdType;
- (void)setCollectedAdType:(long long)arg1;
- (id)subAdItemList;
- (void)setSubAdItemList:(id)arg1;
- (void).cxx_destruct;
@end
