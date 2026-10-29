@interface GlobalSearchInputSheetConfig : NSObject
{
    BOOL _isTransparent; // +0x8
    NSString * _title; // +0x10
    NSString * _type; // +0x18
    NSString * _liteAppPath; // +0x20
    NSString * _liteAppId; // +0x28
    NSDictionary * _liteAppQuery; // +0x30
    NSString * _minVersion; // +0x38
}
- (id)description;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)liteAppPath;
- (void)setLiteAppPath:(id)arg1;
- (id)liteAppId;
- (void)setLiteAppId:(id)arg1;
- (id)liteAppQuery;
- (void)setLiteAppQuery:(id)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (void).cxx_destruct;
@end
