@interface WAPlateAuthorizeSheetInfo : WAAuthorizeSheetInfo
{
    BOOL _isAcceptProtocol; // +0x8
    NSMutableArray * _plateList; // +0x10
    NSString * _defaultPlateStr; // +0x18
    NSString * _createSubDesc; // +0x20
}
+ (id)convertPlateListFromProto:(id)arg1;
- (id)init;
- (void)configInfoWithIconUrl:(id)arg1 appName:(id)arg2;
- (BOOL)configPlateInfoFromProto:(id)arg1;
- (id)plateList;
- (void)setPlateList:(id)arg1;
- (id)defaultPlateStr;
- (void)setDefaultPlateStr:(id)arg1;
- (id)createSubDesc;
- (void)setCreateSubDesc:(id)arg1;
- (BOOL)isAcceptProtocol;
- (void)setIsAcceptProtocol:(BOOL)arg1;
- (void).cxx_destruct;
@end
