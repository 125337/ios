@interface WCFinderLikeEasterEggPreviewConfiguration : NSObject
{
    NSString * _title; // +0x8
    NSString * _subtitle; // +0x10
    PAGFile * _previewPAG; // +0x18
    NSString * _confirmButtonTitle; // +0x20
    CEmoticonWrap * _emoticon; // +0x28
    unsigned long long _HighlightType; // +0x30
}
+ (id)educationConfiguration;
+ (id)previewConfigurationWithType:(unsigned long long)arg1 emoticon:(id)arg2;
+ (id)sectionConfigurationWithType:(unsigned long long)arg1 emoticon:(id)arg2;
+ (id)_educationFile;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)previewPAG;
- (void)setPreviewPAG:(id)arg1;
- (id)confirmButtonTitle;
- (void)setConfirmButtonTitle:(id)arg1;
- (id)emoticon;
- (void)setEmoticon:(id)arg1;
- (unsigned long long)HighlightType;
- (void)setHighlightType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
