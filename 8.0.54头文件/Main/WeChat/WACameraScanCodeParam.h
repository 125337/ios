@interface WACameraScanCodeParam : NSObject
{
    BOOL _isHideAlbumBtn; // +0x8
    long long _codeType; // +0x10
    NSString * _descStr; // +0x18
}
- (long long)codeType;
- (void)setCodeType:(long long)arg1;
- (id)descStr;
- (void)setDescStr:(id)arg1;
- (BOOL)isHideAlbumBtn;
- (void)setIsHideAlbumBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end

