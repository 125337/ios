@interface TingCoverInfo : NSObject
{
    unsigned int _style; // +0x8
    NSArray * _arrCoverUrls; // +0x10
    unsigned long long _coverNum; // +0x18
    MMListenCategoryItem * _categoryItem; // +0x20
}
+ (id)coverVMFromUrl:(id)arg1;
+ (id)coverVMFromCategoryItem:(id)arg1;
- (unsigned long long)coverNum;
- (BOOL)isPagStyle;
- (BOOL)isEqualToCoverInfo:(id)arg1;
- (unsigned long long)maxFetchingCount;
- (unsigned int)style;
- (void)setStyle:(unsigned int)arg1;
- (id)arrCoverUrls;
- (void)setArrCoverUrls:(id)arg1;
- (void)setCoverNum:(unsigned long long)arg1;
- (id)categoryItem;
- (void)setCategoryItem:(id)arg1;
- (void).cxx_destruct;
@end
