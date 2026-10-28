@interface WCFinderOriginalStateDeclareActionConfig : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _exportId; // +0x10
    NSString * _nonceId; // +0x18
    NSString * _username; // +0x20
    unsigned long long _mediaType; // +0x28
}
- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
