@interface SWMidasEvent : NSObject
{
    void * id; // +0x8
    long long seq; // +0x18
    double createdAt; // +0x20
     format; // +0x28
    void * openID; // +0x30
    void * offerID; // +0x40
    void * platform; // +0x50
    void * sessionID; // +0x60
    void * sessionType; // +0x70
    void * processUUID; // +0x80
    void * deviceGUID; // +0x90
    void * deviceModel; // +0xa0
    void * deviceSystemVersion; // +0xb0
    void * deviceType; // +0xc0
    void * payChannel; // +0xd0
     action; // +0xe0
    void * appleProductID; // +0xe8
    void * displayPrice; // +0xf8
    void * price; // +0x108
    void * currency; // +0x118
    void * quantity; // +0x128
    void * billID; // +0x138
    void * billUUID; // +0x148
     resultInfo; // +0x158
    void * metaTrackEventID; // +0x160
    long long environment; // +0x170
     error; // +0x178
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
- (id)payChannel;
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
