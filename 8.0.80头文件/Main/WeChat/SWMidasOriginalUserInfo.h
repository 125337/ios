@interface SWMidasOriginalUserInfo : NSObject
{
    void * zoneID; // +0x8
    void * goodsZoneID; // +0x18
    SWAMSInfo * amsInfo; // +0x28
}
- (id)zoneID;
- (id)goodsZoneID;
- (id)amsInfo;
- (BOOL)validate;
- (id)initWithZoneID:(id)arg1 goodsZoneID:(id)arg2 amsInfo:(id)arg3;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
