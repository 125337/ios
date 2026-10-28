@interface MMWebPrefetchPkgResInfo : MMObject
{
    NSString * _htmlTag; // +0x8
    NSString * _pathInPkg; // +0x10
    NSArray * _arrAttr; // +0x18
}
- (id)htmlTag;
- (void)setHtmlTag:(id)arg1;
- (id)pathInPkg;
- (void)setPathInPkg:(id)arg1;
- (id)arrAttr;
- (void)setArrAttr:(id)arg1;
- (void).cxx_destruct;
@end
