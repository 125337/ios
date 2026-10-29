@interface WCPayPaidDetailJumpInfo : NSObject
{
    long long _type; // +0x8
    WCPayPaidDetailLeadTailCmdData * _cmd_data; // +0x10
    RouteInfo * _route_info; // +0x18
}
- (long long)type;
- (void)setType:(long long)arg1;
- (id)cmd_data;
- (void)setCmd_data:(id)arg1;
- (id)route_info;
- (void)setRoute_info:(id)arg1;
- (void).cxx_destruct;
@end

