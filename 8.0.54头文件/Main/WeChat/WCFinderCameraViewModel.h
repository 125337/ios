@interface WCFinderCameraViewModel : NSObject
{
    MMImagePickerManagerOptionObj * _optionObj; // +0x8
    NSString * _templateFollowFeedId; // +0x10
    NSString * _musicSongId; // +0x18
    NSString * _finderUsername; // +0x20
}
- (id)initWithFinderUsername:(id)arg1;
- (id)init;
- (id)createFinderCameraOptionBy:(id)arg1;
- (id)createFinderLiveCameraCoverOption;
- (id)createFinderPickerOption;
- (id)createSightDraftWithVideoPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3;
- (id)dataItemForSight:(id)arg1;
- (id)dataItemWithImagePathArray:(id)arg1;
- (id)optionObj;
- (void)setOptionObj:(id)arg1;
- (id)templateFollowFeedId;
- (void)setTemplateFollowFeedId:(id)arg1;
- (id)musicSongId;
- (void)setMusicSongId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end

