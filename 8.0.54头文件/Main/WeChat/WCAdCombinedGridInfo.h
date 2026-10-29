@interface WCAdCombinedGridInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    long long _displayMode; // +0x8
    WCAdCardBtnInfo * _clickActionInfo; // +0x10
    NSArray * _gridItems; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isDisplayModeBig;
- (long long)displayMode;
- (void)setDisplayMode:(long long)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (id)gridItems;
- (void)setGridItems:(id)arg1;
- (void).cxx_destruct;
@end

