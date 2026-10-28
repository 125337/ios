@interface OMJModelInfo : NSObject
{
    NSString * _name; // +0x8
    NSString * _filePath; // +0x10
    NSString * _version; // +0x18
}
- (id)initWithName:(id)arg1 filePath:(id)arg2 version:(id)arg3;
- (id)description;
- (id)name;
- (id)filePath;
- (id)version;
- (void).cxx_destruct;
@end
