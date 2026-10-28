@interface WCDevicePedometer : NSObject
{
    WCDevice * device; // +0x8
    NSString * ticket; // +0x10
    NSString * displayName; // +0x18
    NSString * iconUrl; // +0x20
}
- (id)device;
- (void)setDevice:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (void).cxx_destruct;
@end
