@interface WCCanvasRandomLayoutTransitionAnimationInfo : MMObject <NSCoding>
{
    NSString * _url; // +0x8
    NSString * _fileMD5; // +0x10
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (void).cxx_destruct;
@end

