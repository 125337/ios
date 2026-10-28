@interface WCFinderSelectGridModel : NSObject
{
    BOOL _isAllFlag; // +0x8
    BOOL _isSelect; // +0x9
    NSString * _content; // +0x10
    long long _flag; // +0x18
}
- (id)content;
- (void)setContent:(id)arg1;
- (long long)flag;
- (void)setFlag:(long long)arg1;
- (BOOL)isAllFlag;
- (void)setIsAllFlag:(BOOL)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end
