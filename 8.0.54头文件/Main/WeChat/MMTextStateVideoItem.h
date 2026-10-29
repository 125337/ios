@interface MMTextStateVideoItem : NSObject
{
    NSString * _videoPath; // +0x8
    UIImage * _videoThumbImage; // +0x10
    EditVideoAttr * _editVideoAttr; // +0x18
    MMShortVideoParamModel * _videoParamModel; // +0x20
}
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)videoThumbImage;
- (void)setVideoThumbImage:(id)arg1;
- (id)editVideoAttr;
- (void)setEditVideoAttr:(id)arg1;
- (id)videoParamModel;
- (void)setVideoParamModel:(id)arg1;
- (void).cxx_destruct;
@end

