@interface WCAdScanInfo : NSObject <NSCoding>
{
    int _scanGestureType; // +0x8
    NSString * _bgView; // +0x10
    NSString * _desc; // +0x18
    NSString * _detectSucIcon; // +0x20
    NSString * _descIcon; // +0x28
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)valid;
- (id)fetchAllImageUrls;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)detectSucIcon;
- (void)setDetectSucIcon:(id)arg1;
- (id)descIcon;
- (void)setDescIcon:(id)arg1;
- (int)scanGestureType;
- (void)setScanGestureType:(int)arg1;
- (void).cxx_destruct;
@end

