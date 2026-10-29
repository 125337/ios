@interface BrandMPVideoOpenParams : NSObject
{
    CMessageWrap * _wrapMsg; // +0x8
    double _videoCurrTime; // +0x10
    UIImage * _currFrameImage; // +0x18
    NSData * _videoThumbData; // +0x20
    CContact * _contact; // +0x28
    CGRect _originRect; // +0x30
}
- (id)initWithDict:(id)arg1;
- (id)initWithFavData:(id)arg1;
- (id)initWithWCDataItem:(id)arg1;
- (id)videoItem;
- (id)wrapMsg;
- (id)genEmptyMpVideoMsg;
- (id)description;
- (double)videoCurrTime;
- (void)setVideoCurrTime:(double)arg1;
- (id)currFrameImage;
- (void)setCurrFrameImage:(id)arg1;
- (CGRect)originRect;
- (void)setOriginRect:(CGRect)arg1;
- (id)videoThumbData;
- (void)setVideoThumbData:(id)arg1;
- (id)contact;
- (void).cxx_destruct;
@end

