@interface SWMidasReprovideResp : NSObject
{
    SWMidasUser * user; // +0x8
    void * billID; // +0x10
    void * portalSerialID; // +0x20
}
- (id)user;
- (id)billID;
- (id)portalSerialID;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
