@interface WCFinderResUpdateItem : NSObject
{
    unsigned int _resType; // +0x8
    NSArray * _subTypes; // +0x10
    NSString * _resBaseDir; // +0x18
    NSString * _manifestFile; // +0x20
}
+ (id)resItemWithResType:(unsigned int)arg1 subTypes:(id)arg2 resBaseDir:(id)arg3 manifestFile:(id)arg4;
+ (id)resItemWithResType:(unsigned int)arg1 resBaseDir:(id)arg2;
- (unsigned int)resType;
- (void)setResType:(unsigned int)arg1;
- (id)subTypes;
- (void)setSubTypes:(id)arg1;
- (id)resBaseDir;
- (void)setResBaseDir:(id)arg1;
- (id)manifestFile;
- (void)setManifestFile:(id)arg1;
- (void).cxx_destruct;
@end

