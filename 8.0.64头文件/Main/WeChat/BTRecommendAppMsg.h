@interface BTRecommendAppMsg : NSObject
{
    unsigned int _createTime; // +0x8
    unsigned int _flag; // +0xc
    unsigned int _videoWidth; // +0x10
    unsigned int _videoHeight; // +0x14
    unsigned int _styleFlag; // +0x18
    unsigned int _recRk; // +0x1c
    NSString * _title; // +0x20
    NSString * _digest; // +0x28
    NSString * _contentUrl; // +0x30
    NSString * _thumbUrl; // +0x38
    NSString * _thumbUrl_1_1; // +0x40
    NSString * _thumbUrl_235_1; // +0x48
    NSString * _videoId; // +0x50
    double _videoDuration; // +0x58
    NSString * _recommendReason; // +0x60
    NSString * _recInfo; // +0x68
    AppMsgShareItem * _shareItem; // +0x70
    NSString * _finderFeedXml; // +0x78
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)thumbUrl_1_1;
- (void)setThumbUrl_1_1:(id)arg1;
- (id)thumbUrl_235_1;
- (void)setThumbUrl_235_1:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (unsigned int)videoWidth;
- (void)setVideoWidth:(unsigned int)arg1;
- (unsigned int)videoHeight;
- (void)setVideoHeight:(unsigned int)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (unsigned int)styleFlag;
- (void)setStyleFlag:(unsigned int)arg1;
- (unsigned int)recRk;
- (void)setRecRk:(unsigned int)arg1;
- (id)recInfo;
- (void)setRecInfo:(id)arg1;
- (id)shareItem;
- (void)setShareItem:(id)arg1;
- (id)finderFeedXml;
- (void)setFinderFeedXml:(id)arg1;
- (void).cxx_destruct;
@end
