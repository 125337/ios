@interface MMFinderLiveTestLiveInfoConfirmItem : NSObject
{
    BOOL _displayValueIsPlaceholder; // +0x8
    long long _type; // +0x10
    NSString * _title; // +0x18
    NSString * _displayValue; // +0x20
    id _originalValue; // +0x28
    id _modifiedValue; // +0x30
    UIImage * _coverThumbnailImage; // +0x38
    NSString * _coverThumbnailURL; // +0x40
    MMFinderLiveSettingVisivilitySettingInfo * _visibilitySettingInfo; // +0x48
}
- (BOOL)hasModification;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)displayValue;
- (void)setDisplayValue:(id)arg1;
- (id)originalValue;
- (void)setOriginalValue:(id)arg1;
- (id)modifiedValue;
- (void)setModifiedValue:(id)arg1;
- (BOOL)displayValueIsPlaceholder;
- (void)setDisplayValueIsPlaceholder:(BOOL)arg1;
- (id)coverThumbnailImage;
- (void)setCoverThumbnailImage:(id)arg1;
- (id)coverThumbnailURL;
- (void)setCoverThumbnailURL:(id)arg1;
- (id)visibilitySettingInfo;
- (void)setVisibilitySettingInfo:(id)arg1;
- (void).cxx_destruct;
@end
