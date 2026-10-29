@interface WCFinderTemplateProcessVCParams : NSObject
{
    BOOL _forbidChangeMusic; // +0x8
    int _imageEntranceScene; // +0xc
    unsigned long long _pushType; // +0x10
    id <WCEditVideoViewControllerDelegate> _editVideoVCdelegate; // +0x18
    NSMutableArray * _fullVideoAssets; // +0x20
    id <WCEditImageViewControllerDelegate> _editImageVCdelegate; // +0x28
    NSMutableArray * _fullImageAssets; // +0x30
    NSMutableArray * _images; // +0x38
    unsigned long long _imageFromScene; // +0x40
    NSString * _musicId; // +0x48
    NSString * _followFeedId; // +0x50
    NSMutableArray * _omjTemplates; // +0x58
    unsigned long long _selectedIndex; // +0x60
}
- (unsigned long long)pushType;
- (void)setPushType:(unsigned long long)arg1;
- (id)editVideoVCdelegate;
- (void)setEditVideoVCdelegate:(id)arg1;
- (id)fullVideoAssets;
- (void)setFullVideoAssets:(id)arg1;
- (id)editImageVCdelegate;
- (void)setEditImageVCdelegate:(id)arg1;
- (id)fullImageAssets;
- (void)setFullImageAssets:(id)arg1;
- (id)images;
- (void)setImages:(id)arg1;
- (int)imageEntranceScene;
- (void)setImageEntranceScene:(int)arg1;
- (unsigned long long)imageFromScene;
- (void)setImageFromScene:(unsigned long long)arg1;
- (BOOL)forbidChangeMusic;
- (void)setForbidChangeMusic:(BOOL)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (id)followFeedId;
- (void)setFollowFeedId:(id)arg1;
- (id)omjTemplates;
- (void)setOmjTemplates:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

