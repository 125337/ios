@interface WCNoteInfo : NSObject <WCContentShareable, PBCoderNSCodingBridge>
{
    int _favLocalId; // +0x8
    int _editTime; // +0xc
    int _fromScene; // +0x10
    NSString * _editUsr; // +0x18
    NSArray * _dataList; // +0x20
    NSData * _dataListNSCodingData; // +0x28
}
+ (void)PBArrayAdd_favLocalId;
+ (void)PBArrayAdd_editTime;
+ (void)PBArrayAdd_editUsr;
+ (void)PBArrayAdd_dataListNSCodingData;
+ (void)initialize;
+ (BOOL)isSupport:(XmlReaderNode_t *)arg1;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)xmlTag;
+ (id)dataListFromXmlNode:(XmlReaderNode_t *)arg1;
+ (id)XmlOfNoteInfoDataList:(id)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)beforePBCoderProcess;
- (void)afterPBCoderProcess;
- (id)toXML;
- (int)favLocalId;
- (void)setFavLocalId:(int)arg1;
- (int)editTime;
- (void)setEditTime:(int)arg1;
- (id)editUsr;
- (void)setEditUsr:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)dataList;
- (void)setDataList:(id)arg1;
- (id)dataListNSCodingData;
- (void)setDataListNSCodingData:(id)arg1;
- (void).cxx_destruct;
@end
