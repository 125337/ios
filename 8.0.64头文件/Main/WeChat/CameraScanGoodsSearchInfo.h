@interface CameraScanGoodsSearchInfo : NSObject
{
    unsigned int _h5TmplVersion; // +0x8
    unsigned int _searchScene; // +0xc
    NSString * _phashStr; // +0x10
    NSString * _phashVersion; // +0x18
    NSString * _fromURL; // +0x20
}
- (unsigned int)h5TmplVersion;
- (void)setH5TmplVersion:(unsigned int)arg1;
- (unsigned int)searchScene;
- (void)setSearchScene:(unsigned int)arg1;
- (id)phashStr;
- (void)setPhashStr:(id)arg1;
- (id)phashVersion;
- (void)setPhashVersion:(id)arg1;
- (id)fromURL;
- (void)setFromURL:(id)arg1;
- (void).cxx_destruct;
@end
