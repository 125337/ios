@interface WCAdFinderNativeDramaInfo : NSObject <NSCoding>
{
    BOOL _popDetailOnce; // +0x8
    BOOL _hasJsApiSourceInfo; // +0x9
    int _direction; // +0xc
    unsigned int _sourceType; // +0x10
    unsigned int _businessType; // +0x14
    NSString * _exportNativeDramaId; // +0x18
    NSString * _exportFromObjectId; // +0x20
    NSString * _dramaSessionBuffer; // +0x28
    NSString * _sourceBuffer; // +0x30
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)exportNativeDramaId;
- (void)setExportNativeDramaId:(id)arg1;
- (id)exportFromObjectId;
- (void)setExportFromObjectId:(id)arg1;
- (BOOL)popDetailOnce;
- (void)setPopDetailOnce:(BOOL)arg1;
- (int)direction;
- (void)setDirection:(int)arg1;
- (id)dramaSessionBuffer;
- (void)setDramaSessionBuffer:(id)arg1;
- (BOOL)hasJsApiSourceInfo;
- (void)setHasJsApiSourceInfo:(BOOL)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (id)sourceBuffer;
- (void)setSourceBuffer:(id)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
