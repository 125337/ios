@interface WCEditVideoPostReportInfo : NSObject
{
    BOOL _isStoryPortraitVideo; // +0x8
    NSString * _storyHorizenVideoMd5; // +0x10
    NSString * _originVideoPath; // +0x18
    double _originVideoDuration; // +0x20
    double _editedVideoDuration; // +0x28
}
- (BOOL)isStoryPortraitVideo;
- (void)setIsStoryPortraitVideo:(BOOL)arg1;
- (id)storyHorizenVideoMd5;
- (void)setStoryHorizenVideoMd5:(id)arg1;
- (id)originVideoPath;
- (void)setOriginVideoPath:(id)arg1;
- (double)originVideoDuration;
- (void)setOriginVideoDuration:(double)arg1;
- (double)editedVideoDuration;
- (void)setEditedVideoDuration:(double)arg1;
- (void).cxx_destruct;
@end

