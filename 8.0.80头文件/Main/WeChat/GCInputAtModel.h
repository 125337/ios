@interface GCInputAtModel : NSObject <GCClvManagerProtocol, MMGrowTextViewCustomeTagDelegate, GCBaseCellModelDelegate>
{
    BOOL _isAtFilter; // +0x8
    BOOL _isFromSelctChange; // +0x9
    BOOL _hasReceiveResponse; // +0xa
    BOOL _reported; // +0xb
    GCInputAtView * _atView; // +0x10
    GCInputAtModelConfig * _config; // +0x18
    MMGrowTextView * _growTextView; // +0x20
    NSMutableSet * _atList; // +0x28
    GCCollectionViewManager * _viewManager; // +0x30
    GCCommonServer * _server; // +0x38
    NSData * _context; // +0x40
    NSMutableArray * _atCellModelArray; // +0x48
    NSMutableArray * _contentRelatedUserList; // +0x50
    NSMutableSet * _contentUserIdSet; // +0x58
    NSMutableArray * _normalUserList; // +0x60
    NSMutableDictionary * _userNameToCellModel; // +0x68
    NSMutableArray * _allCellModelArray; // +0x70
    NSString * _filterText; // +0x78
    unsigned long long _inputAtLocation; // +0x80
    NSString * _inputAtFilterPreContent; // +0x88
    NSString * _inputAtFilterAfterContent; // +0x90
    NSString * _currentNsText; // +0x98
    unsigned long long _fetchCnt; // +0xa0
}
- (id)initWithConfig:(id)arg1;
- (void)triggerGetContentList;
- (void)handleResponse:(id)arg1;
- (void)updateViewEmptyState;
- (void)handleNewCellModelArray:(id)arg1;
- (void)onContentChange;
- (void)setFilterText:(id)arg1;
- (id)getCustomeTagLocation:(id)arg1 textView:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)handleTextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)checkAtListComplete;
- (void)hideAtPanel;
- (BOOL)checkAtListMatch;
- (void)exitAtFilterStatus;
- (id)atCellModelFromUserInfo:(id)arg1;
- (id)isSearchDictInfo;
- (void)handleReportWithCellModel:(id)arg1;
- (id)atView;
- (void)setAtView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)atList;
- (void)setAtList:(id)arg1;
- (id)viewManager;
- (void)setViewManager:(id)arg1;
- (id)server;
- (void)setServer:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)atCellModelArray;
- (void)setAtCellModelArray:(id)arg1;
- (id)contentRelatedUserList;
- (void)setContentRelatedUserList:(id)arg1;
- (id)contentUserIdSet;
- (void)setContentUserIdSet:(id)arg1;
- (id)normalUserList;
- (void)setNormalUserList:(id)arg1;
- (id)userNameToCellModel;
- (void)setUserNameToCellModel:(id)arg1;
- (id)allCellModelArray;
- (void)setAllCellModelArray:(id)arg1;
- (id)filterText;
- (BOOL)isAtFilter;
- (void)setIsAtFilter:(BOOL)arg1;
- (unsigned long long)inputAtLocation;
- (void)setInputAtLocation:(unsigned long long)arg1;
- (id)inputAtFilterPreContent;
- (void)setInputAtFilterPreContent:(id)arg1;
- (id)inputAtFilterAfterContent;
- (void)setInputAtFilterAfterContent:(id)arg1;
- (BOOL)isFromSelctChange;
- (void)setIsFromSelctChange:(BOOL)arg1;
- (id)currentNsText;
- (void)setCurrentNsText:(id)arg1;
- (BOOL)hasReceiveResponse;
- (void)setHasReceiveResponse:(BOOL)arg1;
- (unsigned long long)fetchCnt;
- (void)setFetchCnt:(unsigned long long)arg1;
- (BOOL)reported;
- (void)setReported:(BOOL)arg1;
- (void).cxx_destruct;
@end
