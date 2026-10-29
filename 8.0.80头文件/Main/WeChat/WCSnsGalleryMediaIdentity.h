@interface WCSnsGalleryMediaIdentity : NSObject
{
    unsigned int _feedIndex; // +0x8
    unsigned int _createTime; // +0xc
    NSString * _feedId; // +0x10
    NSString * _mediaId; // +0x18
}
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)mediaId;
- (void)setMediaId:(id)arg1;
- (unsigned int)feedIndex;
- (void)setFeedIndex:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
