@interface StickerInfo : NSObject
{
    BOOL _isProcessed; // +0x8
    NSString * _path; // +0x10
    NSString * _md5; // +0x18
    NSString * _title; // +0x20
    NSNumber * _len; // +0x28
    NSNumber * _active; // +0x30
}
- (id)initWithParam:(id)arg1;
- (id)getDic;
- (BOOL)isActiveValid;
- (id)path;
- (void)setPath:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)len;
- (void)setLen:(id)arg1;
- (id)active;
- (void)setActive:(id)arg1;
- (BOOL)isProcessed;
- (void)setIsProcessed:(BOOL)arg1;
- (void).cxx_destruct;
@end

