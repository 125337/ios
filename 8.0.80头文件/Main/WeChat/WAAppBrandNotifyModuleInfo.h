@interface WAAppBrandNotifyModuleInfo : NSObject <PBCoding>
{
    NSMutableArray * _arrModuleList; // +0x8
    NSString * _enteranceModule; // +0x10
    NSMutableDictionary * _dicModuleState; // +0x18
    NSMutableArray * _chatToolList; // +0x20
}
+ (void)PBArrayAdd_arrModuleList;
+ (void)PBArrayAdd_enteranceModule;
+ (void)PBArrayAdd_dicModuleState;
+ (void)PBArrayAdd_chatToolList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (BOOL)isUseModule;
- (id)moduleListContainJSONDictionary;
- (id)arrModuleList;
- (void)setArrModuleList:(id)arg1;
- (id)enteranceModule;
- (void)setEnteranceModule:(id)arg1;
- (id)dicModuleState;
- (void)setDicModuleState:(id)arg1;
- (id)chatToolList;
- (void)setChatToolList:(id)arg1;
- (void).cxx_destruct;
@end
