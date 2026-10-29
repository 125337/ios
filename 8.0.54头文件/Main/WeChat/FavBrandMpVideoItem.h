@interface FavBrandMpVideoItem : FavoritesModel
{
    NSString * _bizUsrName; // +0x8
    NSString * _bizNickName; // +0x10
    NSString * _mpUrl; // +0x18
    NSString * _vid; // +0x20
    NSString * _videoUrl; // +0x28
    double _duration; // +0x30
    NSString * _thumbUrl; // +0x38
    double _thumbWidth; // +0x40
    double _thumbHeight; // +0x48
}
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (BOOL)checkData;
- (id)description;
- (id)bizUsrName;
- (void)setBizUsrName:(id)arg1;
- (id)bizNickName;
- (void)setBizNickName:(id)arg1;
- (id)mpUrl;
- (void)setMpUrl:(id)arg1;
- (id)vid;
- (void)setVid:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (double)thumbWidth;
- (void)setThumbWidth:(double)arg1;
- (double)thumbHeight;
- (void)setThumbHeight:(double)arg1;
- (void).cxx_destruct;
@end

