@interface EmoticonSecurityInfoList : NSObject
{
    NSArray * _items; // +0x8
}
+ (id)fromEditImageAttr:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (BOOL)mergeFromItems:(id)arg1;
- (id)toXML;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
