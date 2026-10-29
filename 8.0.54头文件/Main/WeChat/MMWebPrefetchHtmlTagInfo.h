@interface MMWebPrefetchHtmlTagInfo : MMObject
{
    NSString * _htmlTag; // +0x8
    NSString * _src; // +0x10
    NSString * _fullSrc; // +0x18
    NSArray * _arrAttr; // +0x20
}
- (id)htmlTag;
- (void)setHtmlTag:(id)arg1;
- (id)src;
- (void)setSrc:(id)arg1;
- (id)fullSrc;
- (void)setFullSrc:(id)arg1;
- (id)arrAttr;
- (void)setArrAttr:(id)arg1;
- (void).cxx_destruct;
@end

