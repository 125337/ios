@interface SWMidasOriginalUserInfo : NSObject
{
     zoneID; // +0x8
     goodsZoneID; // +0x18
     amsInfo; // +0x28
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
