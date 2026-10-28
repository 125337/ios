@interface WCFinderProfileOverviewSection : NSObject
{
    BOOL _showAllButton; // +0x8
    BOOL _displaySummary; // +0x9
    BOOL _isClosure; // +0xa
    int _commentScene; // +0xc
    WCFinderOverviewSectionDef * _def; // +0x10
    long long _secType; // +0x18
    id _data; // +0x20
    long long _elementCount; // +0x28
    NSArray * _layouts; // +0x30
    NSDictionary * _layoutMap; // +0x38
    long long _moreBtnType; // +0x40
    NSString * _observableTitle; // +0x48
    FinderHomePageSectionInfo * _sectionInfo; // +0x50
}
+ (id)sectionWithType:(long long)arg1;
+ (long long)mapTabInfoType:(unsigned int)arg1;
+ (id)nameForSecType:(long long)arg1;
- (id)reportName;
- (BOOL)shouldDisplay;
- (long long)displayElementRowCount:(long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)def;
- (void)setDef:(id)arg1;
- (long long)secType;
- (void)setSecType:(long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (long long)elementCount;
- (void)setElementCount:(long long)arg1;
- (id)layouts;
- (void)setLayouts:(id)arg1;
- (id)layoutMap;
- (void)setLayoutMap:(id)arg1;
- (BOOL)showAllButton;
- (void)setShowAllButton:(BOOL)arg1;
- (long long)moreBtnType;
- (void)setMoreBtnType:(long long)arg1;
- (BOOL)displaySummary;
- (void)setDisplaySummary:(BOOL)arg1;
- (BOOL)isClosure;
- (void)setIsClosure:(BOOL)arg1;
- (id)observableTitle;
- (void)setObservableTitle:(id)arg1;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (void).cxx_destruct;
@end
