@interface FinderLiveNoticeProductList : NSObject
{
    long long _type; // +0x8
    unsigned long long _totalCount; // +0x10
    FinderJumpInfo * _finderJumpInfo; // +0x18
    NSArray * _imageURLs; // +0x20
}
+ (id)listFromPendingSaleList:(id)arg1;
+ (id)listFromPreviewInfo:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (id)finderJumpInfo;
- (void)setFinderJumpInfo:(id)arg1;
- (id)imageURLs;
- (void)setImageURLs:(id)arg1;
- (void).cxx_destruct;
@end
