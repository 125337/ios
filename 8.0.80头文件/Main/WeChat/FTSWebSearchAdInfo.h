@interface FTSWebSearchAdInfo : NSObject
{
    BOOL _isForOldUser; // +0x8
    NSString * _aid; // +0x10
    NSString * _text; // +0x18
    NSString * _iconURL; // +0x20
    NSString * _hintText; // +0x28
}
- (id)aid;
- (void)setAid:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)hintText;
- (void)setHintText:(id)arg1;
- (BOOL)isForOldUser;
- (void)setIsForOldUser:(BOOL)arg1;
- (void).cxx_destruct;
@end
