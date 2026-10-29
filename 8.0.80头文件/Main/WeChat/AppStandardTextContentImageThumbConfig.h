@interface AppStandardTextContentImageThumbConfig : NSObject
{
    BOOL _classicVideoStyle; // +0x8
    unsigned long long _type; // +0x10
    unsigned long long _videoDurationInSeconds; // +0x18
    CGSize _size; // +0x20
}
- (id)init;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)videoDurationInSeconds;
- (void)setVideoDurationInSeconds:(unsigned long long)arg1;
- (BOOL)classicVideoStyle;
- (void)setClassicVideoStyle:(BOOL)arg1;
@end
