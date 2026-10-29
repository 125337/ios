@interface GeneralFastLoadPageDataRequestUrlInfo : NSObject
{
    unsigned int _preloadType; // +0x8
    unsigned int _openScene; // +0xc
    unsigned int _itemShowType; // +0x10
    NSString * _url; // +0x18
}
+ (id)generateRequestUrlInfoIfSupport:(BOOL)arg1 itemShowType:(unsigned int)arg2 url:(id)arg3 openScene:(unsigned int)arg4 preloadType:(unsigned int)arg5;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)preloadType;
- (void)setPreloadType:(unsigned int)arg1;
- (unsigned int)openScene;
- (void)setOpenScene:(unsigned int)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

