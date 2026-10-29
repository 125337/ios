@interface MMCanvas26632ReportItem : NSObject
{
    BOOL _hasHeight; // +0x8
    BOOL _contextExist; // +0x9
    BOOL _preload; // +0xa
    unsigned int _height; // +0xc
    NSString * _biz; // +0x10
    NSString * _cardId; // +0x18
    unsigned long long _contextLaunchTs; // +0x20
    unsigned long long _preloadTs; // +0x28
    unsigned long long _exposeTs; // +0x30
}
- (id)biz;
- (void)setBiz:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (BOOL)hasHeight;
- (void)setHasHeight:(BOOL)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (BOOL)contextExist;
- (void)setContextExist:(BOOL)arg1;
- (BOOL)preload;
- (void)setPreload:(BOOL)arg1;
- (unsigned long long)contextLaunchTs;
- (void)setContextLaunchTs:(unsigned long long)arg1;
- (unsigned long long)preloadTs;
- (void)setPreloadTs:(unsigned long long)arg1;
- (unsigned long long)exposeTs;
- (void)setExposeTs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

