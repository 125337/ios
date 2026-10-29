@interface MMFinderLiveConnectMicAnchorCollectionContainerView : MMFinderLiveConnectMicBaseAnchorContainerView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, MMFinderLiveConnectedMicUserCellViewDelegate>
{
    BOOL _forceDisableApplySectionCellButton; // +0x8
    BOOL _footerViewHasBeenExposed; // +0x9
    BOOL _hasModeSettingsExposed; // +0xa
    BOOL _isLastContainerHide; // +0xb
    BOOL _isCandicateAnchorListLoading; // +0xc
    BOOL _isCandicateAnchorListMoreData; // +0xd
    BOOL _isFirstShow; // +0xe
    NSArray * connectMicUserList; // +0x10
    NSArray * connectingAnchorUserList; // +0x18
    NSMutableArray * candicateAnchorList; // +0x20
    UICollectionView * _collectionView; // +0x28
    UICollectionViewDiffableDataSource * _diffableDataSource; // +0x30
    NSMutableArray * _sections; // +0x38
    NSMutableArray * _originCandicateAnchorList; // +0x40
    UICollectionViewCell * _firstPlayViewCell; // +0x48
    UICollectionViewCell * _lastPlayViewCell; // +0x50
    NSMutableDictionary * _connectingReportDic; // +0x58
    NSMutableDictionary * _applyReportDic; // +0x60
    NSMutableDictionary * _candicateReportDic; // +0x68
    unsigned long long _curRetryTime; // +0x70
    NSData * _candicateAnchorListLastBuffer; // +0x78
    double _openTabTime; // +0x80
    double _closeTabTime; // +0x88
}
- (void)initData;
- (void)onFirstShow;
- (void)updateWithConnectMicUserList:(id)arg1 connectingAnchorUserList:(id)arg2 forceDisableApplySectionCellButton:(BOOL)arg3 animted:(BOOL)arg4;
- (void)layoutContentView;
- (void)layoutCollectionView;
- (id)createLayout;
- (id)createSingleColumnSectionWithIndex:(long long)arg1 environment:(id)arg2;
- (id)createDoubleColumnSectionWithIndex:(long long)arg1 environment:(id)arg2;
- (id)createLoadingSectionWithIndex:(long long)arg1 environment:(id)arg2;
- (void)setupDataSourceIfNeeded;
- (void)updateReusableView:(id)arg1 elementKind:(id)arg2 indexPath:(id)arg3;
- (void)updateHeadersAndFooters;
- (void)updateDisplayUser:(id)arg1 withTargetUser:(id)arg2;
- (void)applyDiffSnapshot:(BOOL)arg1;
- (void)resetCandicateAnchorList;
- (void)tryFetchCandicateAnchorList;
- (BOOL)handleFilterCandicateAnchorList;
- (void)updateApplySection;
- (void)updateCandicateSection;
- (void)updateConnectingAnchorSection;
- (void)showLoadingSection;
- (void)hideLoadingSection;
- (double)calculateLoadingSectionTopInset:(id)arg1;
- (void)updateConnectingMicUserListWithResultItem:(id)arg1;
- (id)mainScrollView;
- (id)sections;
- (id)connectingReportDic;
- (id)applyReportDic;
- (id)candicateReportDic;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)onContainerDidShow;
- (void)onContainerWillHide;
- (void)onContainerWillDisappear;
- (void)onClickInviteAnchorButton:(id)arg1;
- (void)onClickRandomMatchButton:(id)arg1;
- (void)onRefreshMicAnchorInfo;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)findMicUserWithUserName:(id)arg1 micUserList:(id)arg2;
- (id)findMicUserWithDisplayMicUser:(id)arg1 sectionType:(unsigned long long)arg2;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1;
- (void)onMMFinderLiveConnectedMicUserCellViewConnectMicToUser:(id)arg1 sectionType:(unsigned long long)arg2;
- (BOOL)shouldAutoPlay;
- (void)autoPlayStart;
- (void)stopPlay;
- (void)startPlayWithCell:(id)arg1;
- (void)stopPlayWithCell:(id)arg1;
- (void)registerNotification;
- (void)onAppResignActive:(id)arg1;
- (void)onAppBecomeActive:(id)arg1;
- (void)updateDicWithIndexPath:(id)arg1;
- (void)onReporterBegin;
- (void)onReporterEnd;
- (void)reportWithType:(unsigned long long)arg1 reportParams:(id)arg2;
- (id)connectMicUserList;
- (void)setConnectMicUserList:(id)arg1;
- (id)connectingAnchorUserList;
- (void)setConnectingAnchorUserList:(id)arg1;
- (id)candicateAnchorList;
- (void)setCandicateAnchorList:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)diffableDataSource;
- (void)setDiffableDataSource:(id)arg1;
- (void)setSections:(id)arg1;
- (id)originCandicateAnchorList;
- (void)setOriginCandicateAnchorList:(id)arg1;
- (id)firstPlayViewCell;
- (void)setFirstPlayViewCell:(id)arg1;
- (id)lastPlayViewCell;
- (void)setLastPlayViewCell:(id)arg1;
- (BOOL)forceDisableApplySectionCellButton;
- (void)setForceDisableApplySectionCellButton:(BOOL)arg1;
- (BOOL)footerViewHasBeenExposed;
- (void)setFooterViewHasBeenExposed:(BOOL)arg1;
- (void)setConnectingReportDic:(id)arg1;
- (void)setApplyReportDic:(id)arg1;
- (void)setCandicateReportDic:(id)arg1;
- (BOOL)hasModeSettingsExposed;
- (void)setHasModeSettingsExposed:(BOOL)arg1;
- (BOOL)isLastContainerHide;
- (void)setIsLastContainerHide:(BOOL)arg1;
- (unsigned long long)curRetryTime;
- (void)setCurRetryTime:(unsigned long long)arg1;
- (BOOL)isCandicateAnchorListLoading;
- (void)setIsCandicateAnchorListLoading:(BOOL)arg1;
- (BOOL)isCandicateAnchorListMoreData;
- (void)setIsCandicateAnchorListMoreData:(BOOL)arg1;
- (id)candicateAnchorListLastBuffer;
- (void)setCandicateAnchorListLastBuffer:(id)arg1;
- (BOOL)isFirstShow;
- (void)setIsFirstShow:(BOOL)arg1;
- (double)openTabTime;
- (void)setOpenTabTime:(double)arg1;
- (double)closeTabTime;
- (void)setCloseTabTime:(double)arg1;
- (void).cxx_destruct;
@end
