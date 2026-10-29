@interface BatteryStrategy : NSObject
{
    BOOL _enabled; // +0x8
    NSMutableArray * _arg_list; // +0x10
}
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)arg_list;
- (void)setArg_list:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

