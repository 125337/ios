@interface SWMidasEvent : NSObject
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
     appleProductID; // +0xd8
     displayPrice; // +0xe8
     price; // +0xf8
     currency; // +0x108
     quantity; // +0x118
     billID; // +0x128
     billUUID; // +0x138
     resultInfo; // +0x148
     metaTrackEventID; // +0x150
     environment; // +0x160
     error; // +0x168
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
- (id)appleProductID;
- (id)displayPrice;
- (id)price;
- (id)currency;
- (id)quantity;
- (id)billID;
- (id)billUUID;
- (id)metaTrackEventID;
- (void)setMetaTrackEventID:(id)arg1;
- (long long)environment;
- (id)formatString;
- (id)actionString;
- (id)errorString;
- (id)resultInfoString;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end

