@interface CgiReportDataController : NSObject <IExptServiceExt>
{
    NSMutableDictionary * _controllMap; // +0x8
}
- (id)init;
- (BOOL)checkCanReport:(unsigned int)arg1 andItemId:(id)arg2 andEventId:(id)arg3;
- (void)initDefaultConfig;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onExptItemListChange;
- (void)readExptConfig;
- (id)controllMap;
- (void)setControllMap:(id)arg1;
- (void).cxx_destruct;
@end
