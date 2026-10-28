@interface WCTimelineActionSheet : WCActionSheet
{
    BOOL _shownWithBadge; // +0x8
    BOOL _oversea; // +0x9
    NSMutableArray * _sections; // +0x10
}
+ (id)defaultCancelSheet:(id)arg1;
+ (id)defaultCancelSheetForOversea:(id)arg1;
- (void)reportOnShow;
- (void)reportOnSelected:(long long)arg1;
- (void)reportOnOpenedURL:(long long)arg1 success:(BOOL)arg2;
- (void)reportForFinderActionsheetItemSelect:(long long)arg1;
- (void)reportForFinderActionsheetItemEndExpose:(long long)arg1;
- (unsigned int)mapReportClickType:(long long)arg1;
- (void)configDynamicSection:(id)arg1;
- (BOOL)realContainSection:(id)arg1;
- (void)addSelectPhotoSection;
- (BOOL)dynamicAddCameraSection;
- (BOOL)dynamicAddFinderPostSection;
- (BOOL)dynamicAddMiaoJianSection;
- (BOOL)dynamicAddSpringSection;
- (BOOL)shownWithBadge;
- (void)setShownWithBadge:(BOOL)arg1;
- (BOOL)oversea;
- (void)setOversea:(BOOL)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (void).cxx_destruct;
@end
