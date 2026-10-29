@interface SWAMSInfo : NSObject
{
    void * area; // +0x8
    void * platID; // +0x18
    void * partition; // +0x28
    void * roleID; // +0x38
    void * roleName; // +0x48
}
- (id)area;
- (id)platID;
- (id)partition;
- (id)roleID;
- (id)roleName;
- (id)initWithArea:(id)arg1 platID:(id)arg2 partition:(id)arg3 roleID:(id)arg4 roleName:(id)arg5;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
