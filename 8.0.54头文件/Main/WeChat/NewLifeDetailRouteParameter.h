@interface NewLifeDetailRouteParameter : NSObject
{
    BOOL _dataItemComplete; // +0x8
    BOOL _enableAuthor; // +0x9
    BOOL _needRecommendStream; // +0xa
    BOOL _showSkipHome; // +0xb
    BOOL _disableEdgeSlide; // +0xc
    BOOL _isPreview; // +0xd
    int _enterScene; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    NewLifeTransitionManager * _transitionManager; // +0x20
    unsigned long long _entryScene; // +0x28
    NSData * _lastBuffer; // +0x30
    NewLifeDetailReportInfo * _reportInfo; // +0x38
    NewLifeDetailThumbInfo * _detailThumbInfo; // +0x40
    NSString * _authorUsername; // +0x48
}
- (id)init;
- (BOOL)isValid;
- (BOOL)isAuthor;
- (id)authorUsername;
- (BOOL)isDetailAvailable;
- (id)description;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)isDataItemComplete;
- (void)setDataItemComplete:(BOOL)arg1;
- (id)transitionManager;
- (void)setTransitionManager:(id)arg1;
- (BOOL)enableAuthor;
- (void)setEnableAuthor:(BOOL)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (BOOL)needRecommendStream;
- (void)setNeedRecommendStream:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)isShowSkipHome;
- (void)setShowSkipHome:(BOOL)arg1;
- (BOOL)disableEdgeSlide;
- (void)setDisableEdgeSlide:(BOOL)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)detailThumbInfo;
- (void)setDetailThumbInfo:(id)arg1;
- (BOOL)isPreview;
- (void)setIsPreview:(BOOL)arg1;
- (void)setAuthorUsername:(id)arg1;
- (void).cxx_destruct;
@end

