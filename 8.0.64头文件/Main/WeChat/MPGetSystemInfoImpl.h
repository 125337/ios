@interface MPGetSystemInfoImpl : NSObject
{
    id _context; // +0x8
}
- (id)handleJSEvent:(id)arg1;
- (id)fillAllInfo;
- (void)makeWindowInfo:(id)arg1 result:(id)arg2;
- (void)copyInfo:(id)arg1 from:(id)arg2 to:(id)arg3;
- (id)fillDeviceInfo;
- (id)fillWindowInfo;
- (id)fillAppBaseInfo;
- (id)fillOneInfo:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
