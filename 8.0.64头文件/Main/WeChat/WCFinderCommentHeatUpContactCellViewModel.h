@interface WCFinderCommentHeatUpContactCellViewModel : NSObject
{
    BOOL _displayAvator; // +0x8
    BOOL _isSelf; // +0x9
    NSString * _imageURL; // +0x10
    NSString * _nickName; // +0x18
    NSString * _urlKey; // +0x20
}
- (id)initWithPromotionInfo:(id)arg1;
- (void)setImageURL:(id)arg1;
- (unsigned long long)hash;
- (id)imageURL;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (BOOL)displayAvator;
- (void)setDisplayAvator:(BOOL)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (id)urlKey;
- (void)setUrlKey:(id)arg1;
- (void).cxx_destruct;
@end
