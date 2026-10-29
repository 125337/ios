@interface WCAdShowroomLayerItem : NSObject <NSCoding, WCAdParserProtocol>
{
    double _parallaxFactor; // +0x8
    unsigned long long _deliveryIndex; // +0x10
    NSArray * _itemList; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (double)parallaxFactor;
- (void)setParallaxFactor:(double)arg1;
- (unsigned long long)deliveryIndex;
- (void)setDeliveryIndex:(unsigned long long)arg1;
- (id)itemList;
- (void)setItemList:(id)arg1;
- (void).cxx_destruct;
@end
