@interface MMLiveSemanticVersion : NSObject
{
    unsigned long long _major; // +0x8
    unsigned long long _minor; // +0x10
    unsigned long long _patch; // +0x18
    NSString * _previewTag; // +0x20
    NSString * _buildTag; // +0x28
}
+ (id)semanticVersionFromString:(id)arg1;
- (id)description;
- (unsigned long long)major;
- (void)setMajor:(unsigned long long)arg1;
- (unsigned long long)minor;
- (void)setMinor:(unsigned long long)arg1;
- (unsigned long long)patch;
- (void)setPatch:(unsigned long long)arg1;
- (id)previewTag;
- (void)setPreviewTag:(id)arg1;
- (id)buildTag;
- (void)setBuildTag:(id)arg1;
- (void).cxx_destruct;
@end

