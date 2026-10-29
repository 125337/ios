@interface WCPayPaidOrderActivityMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * dicUrlToControlItem; // +0x8
}
- (id)getControlItem:(id)arg1;
- (void)setControlItem:(id)arg1;
- (void)cleanAllControlItem;
- (void).cxx_destruct;
@end

