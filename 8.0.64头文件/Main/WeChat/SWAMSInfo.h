@interface SWAMSInfo : NSObject
{
     area; // +0x8
     platID; // +0x18
     partition; // +0x28
     roleID; // +0x38
     roleName; // +0x48
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
