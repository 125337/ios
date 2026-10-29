@interface QMCPendingMCPCall : NSObject
{
    BOOL _needsAllMCPNotification; // +0x8
    NSArray * _commands; // +0x10
    NSDictionary * _commandIdToDayIndexMap; // +0x18
    NSDictionary * _commandIdToDataMap; // +0x20
    NSDictionary * _commandIdToRouteNameMap; // +0x28
}
+ (id)callWithCommands:(id)arg1 commandIdToDayIndexMap:(id)arg2 commandIdToDataMap:(id)arg3 commandIdToRouteNameMap:(id)arg4;
- (id)initInternal;
- (id)commands;
- (void)setCommands:(id)arg1;
- (id)commandIdToDayIndexMap;
- (void)setCommandIdToDayIndexMap:(id)arg1;
- (id)commandIdToDataMap;
- (void)setCommandIdToDataMap:(id)arg1;
- (id)commandIdToRouteNameMap;
- (void)setCommandIdToRouteNameMap:(id)arg1;
- (BOOL)needsAllMCPNotification;
- (void)setNeedsAllMCPNotification:(BOOL)arg1;
- (void).cxx_destruct;
@end
