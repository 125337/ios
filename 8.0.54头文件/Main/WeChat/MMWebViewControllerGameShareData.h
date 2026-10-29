@interface MMWebViewControllerGameShareData : NSObject
{
    BOOL _needUploadFirst; // +0x8
    int _shareType; // +0xc
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _imageUrl; // +0x20
    NSString * _link; // +0x28
    NSString * _appId; // +0x30
    NSDictionary * _reportExtInfo; // +0x38
    NSString * _fromScene; // +0x40
    NSString * _floatBallTitle; // +0x48
    NSString * _videoId; // +0x50
    GameShareDataTailInfo * _tailInfo; // +0x58
    GameShareDataImageModel * _imageModel; // +0x60
}
- (id)description;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (id)fromScene;
- (void)setFromScene:(id)arg1;
- (id)floatBallTitle;
- (void)setFloatBallTitle:(id)arg1;
- (BOOL)needUploadFirst;
- (void)setNeedUploadFirst:(BOOL)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (id)tailInfo;
- (void)setTailInfo:(id)arg1;
- (id)imageModel;
- (void)setImageModel:(id)arg1;
- (int)shareType;
- (void)setShareType:(int)arg1;
- (void).cxx_destruct;
@end

