@interface BrandProfileFinderLiveInfoView : UIView <MMFinderLiveNoticeViewLogicDelegate>
{
    BOOL _showBrandManagerMode; // +0x8
    id <BrandProfileFinderLiveInfoViewDelegate> _delegate; // +0x10
    id /* block */ _refreshBlock; // +0x18
    UIView * _topHorizontalSperatorLineView; // +0x20
    WCFinderLiveNoticeView * _liveNoticeView; // +0x28
    UIView * _bottomHorizontalSperatorLineView; // +0x30
    MMFinderLiveNoticeViewLogic * _noticeLogic; // +0x38
    BizVideoFinderInfo * _finderInfo; // +0x40
    BizProfileV2Resp_FinderLiveNoticeInfoV2 * _liveInfoData; // +0x48
}
- (id)init;
- (void)updateWithFinderInfo:(id)arg1 liveInfoData:(id)arg2;
- (void)reloadDataForLiveNoticeView;
- (void)setupUI;
- (void)layoutSubviews;
- (double)estimateHeight;
- (BOOL)hasLiveNotice;
- (BOOL)hasNextLiveNotice;
- (BOOL)isAuthorPerspective;
- (id)getViewController;
- (void)onFinderLiveNoticeReserved:(BOOL)arg1;
- (void)onFinderLiveNoticeInfoModified:(id)arg1;
- (void)onFinderLiveNoticeInfoDidRevoked:(id)arg1;
- (void)onFinderLiveNoticeTopStateDidChanged;
- (void)refreshUI;
- (void)reloadData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showBrandManagerMode;
- (void)setShowBrandManagerMode:(BOOL)arg1;
- (id /* block */)refreshBlock;
- (void)setRefreshBlock:(id /* block */)arg1;
- (id)topHorizontalSperatorLineView;
- (void)setTopHorizontalSperatorLineView:(id)arg1;
- (id)liveNoticeView;
- (void)setLiveNoticeView:(id)arg1;
- (id)bottomHorizontalSperatorLineView;
- (void)setBottomHorizontalSperatorLineView:(id)arg1;
- (id)noticeLogic;
- (void)setNoticeLogic:(id)arg1;
- (id)finderInfo;
- (void)setFinderInfo:(id)arg1;
- (id)liveInfoData;
- (void)setLiveInfoData:(id)arg1;
- (void).cxx_destruct;
@end
