@interface YTRiskData : JSONModel <NSCopying>
{
    float _key1; // +0x8
    NSString * _image_name; // +0x10
    NSMutableArray * _task_type; // +0x18
    long long _key2; // +0x20
    long long _key3; // +0x28
    long long _key4; // +0x30
    NSString * _image; // +0x38
    long long _timestamp; // +0x40
    NSString * _checksum; // +0x48
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)image_name;
- (void)setImage_name:(id)arg1;
- (id)task_type;
- (void)setTask_type:(id)arg1;
- (float)key1;
- (void)setKey1:(float)arg1;
- (long long)key2;
- (void)setKey2:(long long)arg1;
- (long long)key3;
- (void)setKey3:(long long)arg1;
- (long long)key4;
- (void)setKey4:(long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (long long)timestamp;
- (void)setTimestamp:(long long)arg1;
- (id)checksum;
- (void)setChecksum:(id)arg1;
- (void).cxx_destruct;
@end
