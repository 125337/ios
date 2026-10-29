@interface SearchContactDataProvider : NSObject <contactInfoDelegate, MMYuanBaoAdvertiseCellDelegate, FTSVerticalSearchSugCellDelegate, FTSVerticalSearchTitleCellDelegate>
{
    BOOL m_isHadSearchYuanbao; // +0x8
    BOOL _isFromAddFriendScene; // +0x9
    BOOL _isShowAIContact; // +0xa
    BOOL _useVerticalSearchNewStyle; // +0xb
    BOOL _isShowDetailButton; // +0xc
    id <SearchContactDataProviderDelegate> _delegate; // +0x10
    NSString * _keyword; // +0x18
    NSArray * _contactGroupArray; // +0x20
    NSString * _svrErrorMsg; // +0x28
    NSString * _jumpDesc; // +0x30
    NSString * _jumpLink; // +0x38
}
- (id)initWithBSContent:(id)arg1 andFoundContact:(id)arg2 andSearchKeyword:(id)arg3 andLocation:(id)arg4 andDelegate:(id)arg5;
- (id)initWithFoundContact:(id)arg1 andSearchKeyword:(id)arg2 andSvrErrMsg:(id)arg3 andDelegate:(id)arg4;
- (id)initWithFoundContacts:(id)arg1 andSearchKeyword:(id)arg2 andSvrErrMsg:(id)arg3 andDelegate:(id)arg4;
- (id)makeContactGroups:(id)arg1;
- (void)setKeyword:(id)arg1;
- (void)setIsShowDetailButton:(BOOL)arg1;
- (void)setJumpDesc:(id)arg1 andJumpLink:(id)arg2;
- (double)getNoUserTipsCellHeight;
- (void)makeNoUserTipsCell:(id)arg1;
- (void)detailButtonClicked:(id)arg1;
- (long long)numberOfSectionInSearchResult;
- (long long)numberOfRowInSearchResultSection:(long long)arg1;
- (double)heightForRowInSearchResultAtIndexPath:(id)arg1 tableView:(id)arg2;
- (id)makeSearchResultCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)genBlankSpaceTableViewCell:(id)arg1 cellIdentifier:(id)arg2;
- (void)handleSearchResultDataSelectWithIndexPath:(id)arg1;
- (void)handleDidCancelSearch;
- (void)handleSearcherWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)hasFoundContact;
- (void)showContactInfoView:(id)arg1 resultRow:(unsigned int)arg2;
- (void)startCommonWebSearch;
- (void)onClickVerticalSearchFeedback:(id)arg1 currSearchText:(id)arg2 relatedWords:(id)arg3;
- (void)clickOnCloseYuanBaoAD;
- (void)newMessageFromContactInfo:(id)arg1;
- (BOOL)checkHadSearchYuanbao;
- (BOOL)isYuanbaoSectionWithIndexPath:(id)arg1;
- (void)pushYuanbaoLogicController;
- (void)onClickVerticalSearchSugItem:(id)arg1 wordIndex:(long long)arg2;
- (id)getVerticalSearchNavigationController;
- (void)reportExposureYuanBaoCell;
- (void)reportClickYuanBaoCell;
- (BOOL)isVerticalSearchNewStyle;
- (id)currSearchText;
- (id)localSearchResult;
- (BOOL)isFromAddFriendScene;
- (void)setIsFromAddFriendScene:(BOOL)arg1;
- (BOOL)isShowAIContact;
- (void)setIsShowAIContact:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)useVerticalSearchNewStyle;
- (void)setUseVerticalSearchNewStyle:(BOOL)arg1;
- (id)keyword;
- (id)contactGroupArray;
- (void)setContactGroupArray:(id)arg1;
- (id)svrErrorMsg;
- (void)setSvrErrorMsg:(id)arg1;
- (BOOL)isShowDetailButton;
- (id)jumpDesc;
- (void)setJumpDesc:(id)arg1;
- (id)jumpLink;
- (void)setJumpLink:(id)arg1;
- (void).cxx_destruct;
@end
