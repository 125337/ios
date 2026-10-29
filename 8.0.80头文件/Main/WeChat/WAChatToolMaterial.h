@interface WAChatToolMaterial : NSObject
{
    NSString * _fromUsername; // +0x8
    long long _timeStamp; // +0x10
    long long _msgLocalId; // +0x18
    NSDictionary * _materialInfo; // +0x20
    NSString * _type; // +0x28
    NSString * _path; // +0x30
    NSString * _name; // +0x38
    long long _size; // +0x40
    NSString * _content; // +0x48
}
- (id)init;
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (long long)timeStamp;
- (void)setTimeStamp:(long long)arg1;
- (long long)msgLocalId;
- (void)setMsgLocalId:(long long)arg1;
- (id)materialInfo;
- (void)setMaterialInfo:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (long long)size;
- (void)setSize:(long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
