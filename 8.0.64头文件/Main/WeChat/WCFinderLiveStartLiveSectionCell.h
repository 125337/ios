@interface WCFinderLiveStartLiveSectionCell : UICollectionViewCell
{
    BOOL _hasUserFinder; // +0x8
    BOOL _hasReportShow; // +0x9
    id <WCFinderLiveStartLiveSectionCellDelegate> _actionDelegate; // +0x10
    WCTableViewManager * _tableViewManager; // +0x18
    FinderLiveCreatorFunctions * _functions; // +0x20
    MMUIButton * _noticeBtn; // +0x28
    UIView * _postSeparatorLine; // +0x30
    MMUIButton * _liveBtn; // +0x38
    MMUIButton * _liveBtnNoFinder; // +0x40
    MMUILabel * _titleLabel; // +0x48
    NSString * _finderUsername; // +0x50
}
+ (double)cellHeightWithUserHasFinder:(BOOL)arg1;
+ (id)cellIdentifier;
+ (id)getChnlextraDictionaryWithFinderUserName:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupUI;
- (void)_setupNoticeBtn;
- (void)_setupLiveBtn;
- (void)_setupLiveBtnNoFinder;
- (void)_setupTitle;
- (void)_setupPostSeparatorLine;
- (float)_calculateNicknameLabelMaxWidth:(float)arg1;
- (float)_calculateTitleMaxWidth:(float)arg1;
- (void)_layoutUI;
- (void)updateWithFinderInfo:(BOOL)arg1 finderUserName:(id)arg2 finderNickName:(id)arg3 finderHeadUrl:(id)arg4;
- (void)clickLive;
- (void)clickNotice;
- (void)reportOnCellShow;
- (void)reportOnStartLiveAction;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)functions;
- (void)setFunctions:(id)arg1;
- (id)noticeBtn;
- (void)setNoticeBtn:(id)arg1;
- (id)postSeparatorLine;
- (void)setPostSeparatorLine:(id)arg1;
- (id)liveBtn;
- (void)setLiveBtn:(id)arg1;
- (id)liveBtnNoFinder;
- (void)setLiveBtnNoFinder:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)hasUserFinder;
- (void)setHasUserFinder:(BOOL)arg1;
- (BOOL)hasReportShow;
- (void)setHasReportShow:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end
