@interface PathInfo : NSObject
{
    NSString * _zoneName; // +0x8
    NSString * _fileName; // +0x10
    NSString * _typeName; // +0x18
}
- (id)zoneName;
- (void)setZoneName:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)typeName;
- (void)setTypeName:(id)arg1;
- (void).cxx_destruct;
@end
