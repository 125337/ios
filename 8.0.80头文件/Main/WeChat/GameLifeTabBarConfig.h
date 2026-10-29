@interface GameLifeTabBarConfig : NSObject
{
    BOOL _isFromFindTab; // +0x8
    unsigned int _sourceScene; // +0xc
    NSDictionary * _extra; // +0x10
    GCOpenReportParam * _reportParam; // +0x18
    NSDictionary * _addtionUrlParams; // +0x20
    id /* block */ _onCloseBlock; // +0x28
}
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (BOOL)isFromFindTab;
- (void)setIsFromFindTab:(BOOL)arg1;
- (id)extra;
- (void)setExtra:(id)arg1;
- (id)reportParam;
- (void)setReportParam:(id)arg1;
- (id)addtionUrlParams;
- (void)setAddtionUrlParams:(id)arg1;
- (id /* block */)onCloseBlock;
- (void)setOnCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
