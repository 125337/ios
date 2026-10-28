@interface ScanGoodsResult : NSObject
{
    NSString * _session; // +0x8
    NSString * _action; // +0x10
    long long _biz; // +0x18
    UIImage * _oriImage; // +0x20
    NSString * _reqKey; // +0x28
    NSString * _title; // +0x30
    NSString * _link; // +0x38
    NSString * _imageUrl; // +0x40
    long long _categoryId; // +0x48
    NSData * _extraInfo; // +0x50
    id <ScanGoodsResultProtocol> _delegate; // +0x58
    CGRect _normalizeRect; // +0x60
}
+ (long long)mapFromAction:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (long long)biz;
- (void)setBiz:(long long)arg1;
- (id)oriImage;
- (void)setOriImage:(id)arg1;
- (CGRect)normalizeRect;
- (void)setNormalizeRect:(CGRect)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (long long)categoryId;
- (void)setCategoryId:(long long)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
