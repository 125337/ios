@interface FavStreamVideoItem : FavoritesModel
{
    unsigned int _streamVideoTotalTime; // +0x8
    NSString * _streamVideoUrl; // +0x10
    NSString * _streamVideoTitle; // +0x18
    NSString * _streamVideoWording; // +0x20
    NSString * _streamVideoWebUrl; // +0x28
    NSString * _streamVideoThumbUrl; // +0x30
    NSString * _streamVideoPublishId; // +0x38
    NSString * _streamVideoAdUxInfo; // +0x40
}
- (id)streamVideoUrl;
- (void)setStreamVideoUrl:(id)arg1;
- (id)streamVideoTitle;
- (void)setStreamVideoTitle:(id)arg1;
- (id)streamVideoWording;
- (void)setStreamVideoWording:(id)arg1;
- (id)streamVideoWebUrl;
- (void)setStreamVideoWebUrl:(id)arg1;
- (unsigned int)streamVideoTotalTime;
- (void)setStreamVideoTotalTime:(unsigned int)arg1;
- (id)streamVideoThumbUrl;
- (void)setStreamVideoThumbUrl:(id)arg1;
- (id)streamVideoPublishId;
- (void)setStreamVideoPublishId:(id)arg1;
- (id)streamVideoAdUxInfo;
- (void)setStreamVideoAdUxInfo:(id)arg1;
- (void).cxx_destruct;
@end

