@interface ScanItemBase : NSObject <NSCoding>
{
    int _itemType; // +0x8
    id _scanItem; // +0x10
    NSString * _barcode; // +0x18
}
+ (id)getScanItemFromXml:(id)arg1 andType:(int)arg2;
+ (id)getBaseItemOfType:(int)arg1 rootNode:(XmlReaderNode_t *)arg2;
+ (id)parseCommonActionXML:(XmlReaderNode_t *)arg1;
+ (id)parseGirdActionXML:(XmlReaderNode_t *)arg1;
+ (id)parseActionXML:(XmlReaderNode_t *)arg1;
+ (id)parseProductXML:(XmlReaderNode_t *)arg1;
+ (id)parseNotFoundXML:(XmlReaderNode_t *)arg1;
+ (id)parseUserXML:(XmlReaderNode_t *)arg1;
+ (id)parseUrlXML:(XmlReaderNode_t *)arg1;
+ (id)parseWeAppXML:(XmlReaderNode_t *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)itemType;
- (void)setItemType:(int)arg1;
- (id)scanItem;
- (void)setScanItem:(id)arg1;
- (id)barcode;
- (void)setBarcode:(id)arg1;
- (void).cxx_destruct;
@end

