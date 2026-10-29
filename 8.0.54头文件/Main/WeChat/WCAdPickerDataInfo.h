@interface WCAdPickerDataInfo : NSObject
{
    unsigned int _deep; // +0x8
    NSString * _title; // +0x10
    NSArray * _defaultData; // +0x18
    NSArray * _transferTable; // +0x20
    NSArray * _dataList; // +0x28
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned int)deep;
- (void)setDeep:(unsigned int)arg1;
- (id)defaultData;
- (void)setDefaultData:(id)arg1;
- (id)transferTable;
- (void)setTransferTable:(id)arg1;
- (id)dataList;
- (void)setDataList:(id)arg1;
- (void).cxx_destruct;
@end

