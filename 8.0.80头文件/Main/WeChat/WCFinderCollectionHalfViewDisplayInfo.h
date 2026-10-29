@interface WCFinderCollectionHalfViewDisplayInfo : NSObject
{
    BOOL _showCollectionDesc; // +0x8
    NSString * _navTitle; // +0x10
    NSString * _displayTitle; // +0x18
    NSString * _displayEpisodeContent; // +0x20
    NSString * _displayDescContent; // +0x28
    NSString * _reportURL; // +0x30
}
+ (id)displayInfoWithCollecitonInfo:(id)arg1;
+ (id)displayInfoWithPaidCollection:(id)arg1;
- (id)navTitle;
- (void)setNavTitle:(id)arg1;
- (id)displayTitle;
- (void)setDisplayTitle:(id)arg1;
- (id)displayEpisodeContent;
- (void)setDisplayEpisodeContent:(id)arg1;
- (BOOL)showCollectionDesc;
- (void)setShowCollectionDesc:(BOOL)arg1;
- (id)displayDescContent;
- (void)setDisplayDescContent:(id)arg1;
- (id)reportURL;
- (void)setReportURL:(id)arg1;
- (void).cxx_destruct;
@end
