@interface MidasEvent : NSObject
{
     id; // +0x8
     seq; // +0x18
     createdAt; // +0x20
     format; // +0x28
     openID; // +0x30
     offerID; // +0x40
     platform; // +0x50
     sessionID; // +0x60
     sessionType; // +0x70
     processUUID; // +0x80
     deviceGUID; // +0x90
     deviceModel; // +0xa0
     deviceSystemVersion; // +0xb0
     deviceType; // +0xc0
     action; // +0xd0
     billID; // +0xd8
     billUUID; // +0xe8
     resultInfo; // +0xf8
     error; // +0x100
}
- (id)id;
- (void)setId:(id)arg1;
- (long long)seq;
- (void)setSeq:(long long)arg1;
- (double)createdAt;
- (void)setCreatedAt:(double)arg1;
- (id)openID;
- (id)offerID;
- (id)platform;
- (id)sessionID;
- (id)sessionType;
- (id)processUUID;
- (id)deviceGUID;
- (id)deviceModel;
- (id)deviceSystemVersion;
- (id)deviceType;
- (id)billID;
- (id)billUUID;
- (id)formatString;
- (id)actionString;
- (id)errorString;
- (id)resultInfoString;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
