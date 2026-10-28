@interface MMLiveBeautyOperationPanelConfig : NSObject
{
    id <MMLiveBeautyLogicProvider> _beautyLogicProvider; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    MMLiveBeautySuite * _suite; // +0x18
}
+ (id)config;
- (id)beautyLogicProvider;
- (void)setBeautyLogicProvider:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)suite;
- (void)setSuite:(id)arg1;
- (void).cxx_destruct;
@end
