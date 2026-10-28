@interface WACameraScanItemParam : NSObject
{
    BOOL _isHideAlbumBtn; // +0x8
    NSString * _extInfo; // +0x10
    NSString * _descStr; // +0x18
}
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)descStr;
- (void)setDescStr:(id)arg1;
- (BOOL)isHideAlbumBtn;
- (void)setIsHideAlbumBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end
