@interface TextStateVideoPickResult : NSObject
{
    NSString * _videoPath; // +0x8
    UIImage * _thumbImage; // +0x10
    EditVideoAttr * _editVideoAttr; // +0x18
    MMShortVideoParamModel * _videoParamModel; // +0x20
    WCEditVideoPostReportInfo * _reportInfo; // +0x28
}
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)editVideoAttr;
- (void)setEditVideoAttr:(id)arg1;
- (id)videoParamModel;
- (void)setVideoParamModel:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
