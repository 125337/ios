@interface MMFavTextComponentData : MMComponentData
{
    BOOL _leftHasImage; // +0x8
    BOOL _isFromExcerpt; // +0x9
    NSString * _title; // +0x10
    NSString * _des; // +0x18
    NSArray * _chatNames; // +0x20
    NSArray * _chatContents; // +0x28
    long long _favType; // +0x30
}
- (void)fixComponentWidthWith:(unsigned long long)arg1 hasThumbAtRight:(BOOL)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)des;
- (void)setDes:(id)arg1;
- (BOOL)leftHasImage;
- (void)setLeftHasImage:(BOOL)arg1;
- (id)chatNames;
- (void)setChatNames:(id)arg1;
- (id)chatContents;
- (void)setChatContents:(id)arg1;
- (long long)favType;
- (void)setFavType:(long long)arg1;
- (BOOL)isFromExcerpt;
- (void)setIsFromExcerpt:(BOOL)arg1;
- (void).cxx_destruct;
@end

