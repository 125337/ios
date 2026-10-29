@interface MMFinderLiveFansGroupAnchorEditFansNoticeInfo : NSObject <NSCopying>
{
    unsigned int _levelRequired; // +0x8
    unsigned int _visibility; // +0xc
    unsigned long long _maxLevelAvailable; // +0x10
    NSString * _notice; // +0x18
    NSString * _imageUrlString; // +0x20
    UIImage * _image; // +0x28
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)levelRequired;
- (void)setLevelRequired:(unsigned int)arg1;
- (unsigned long long)maxLevelAvailable;
- (void)setMaxLevelAvailable:(unsigned long long)arg1;
- (id)notice;
- (void)setNotice:(id)arg1;
- (id)imageUrlString;
- (void)setImageUrlString:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (unsigned int)visibility;
- (void)setVisibility:(unsigned int)arg1;
- (void).cxx_destruct;
@end
