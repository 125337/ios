@interface WCFinderMusicEventHeadTableViewCellData : NSObject
{
    NSString * _coverUrl; // +0x8
    NSString * _title; // +0x10
    NSString * _authorName; // +0x18
    NSString * _authIconUrl; // +0x20
    NSString * _recommendReason; // +0x28
    NSString * _buttonIcon; // +0x30
    NSString * _buttonTitle; // +0x38
}
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)authorName;
- (void)setAuthorName:(id)arg1;
- (id)authIconUrl;
- (void)setAuthIconUrl:(id)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)buttonIcon;
- (void)setButtonIcon:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (void).cxx_destruct;
@end
