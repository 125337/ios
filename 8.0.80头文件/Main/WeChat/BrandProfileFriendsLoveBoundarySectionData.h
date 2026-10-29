@interface BrandProfileFriendsLoveBoundarySectionData : BrandProfileBaseSectionData
{
    BOOL _showsSettingsButton; // +0x8
    NSString * _wording; // +0x10
}
- (long long)numberOfRowsInSection;
- (double)heightForHeaderInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (BOOL)showsSettingsButton;
- (void)setShowsSettingsButton:(BOOL)arg1;
- (void).cxx_destruct;
@end
